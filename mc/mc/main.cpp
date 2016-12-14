#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>
using namespace std;


//4 reg
//8 pin rx tx
//64b ram
//compare flag

class pin
{
public:
	fstream file;
	bool leg;
	int wr;
};

class mc 
{
protected:
	uint8_t reg[4];
	pin pins[6];
	uint8_t ram[16];
	int8_t cf;
	vector<string> rom;
	uint8_t pc;

	void mov(uint8_t* a, uint8_t* b)
	{
		*a = *b;
		cout << "moved" << endl;
	}
	void add(uint8_t* a, uint8_t* b) 
	{
		*a += *b;
		cout << "+" << endl;
	}
	void sub(uint8_t* a, uint8_t* b) 
	{
		*a -= *b;
		cout << "-" << endl;
	}
	void mul(uint8_t* a, uint8_t* b) 
	{
		*a *= *b;
		cout << "-" << endl;
	}
	void div(uint8_t* a, uint8_t* b) 
	{
		*a /= *b;
		cout << "//" << endl;
	}
	void mod(uint8_t* a, uint8_t* b) 
	{
		*a %= *b;
		cout << "%" << endl;
	}
	void and(uint8_t* a, uint8_t* b)
	{
		*a &= *b;
		cout << "&" << endl;
	}
	void or(uint8_t* a, uint8_t* b) 
	{
		*a |= *b;
		cout << "|" << endl;
	}
	void xor(uint8_t* a, uint8_t* b) 
	{
		*a ^= *b;
		cout << "^" << endl;
	}
	void shl(uint8_t* a, uint8_t* b) 
	{
		*a <<= *b;
		cout << "<<" << endl;
	}
	void shr(uint8_t* a, uint8_t* b) 
	{
		*a >>= *b;
		cout << ">>" << endl;
	}
	void cmp(uint8_t* a, uint8_t* b) 
	{
		if (*a == *b)
			cf = 0;
		else 
		{
			if (*a > *b)
				cf = 1;
			else
				cf = -1;
		}
		cout << "cmp" << endl;
	}
	void jg(uint8_t* a) 
	{
		if (cf == 1)
			pc = *a;
		cout << "jg" << endl;
	}
	void jge(uint8_t* a) 
	{
		if ((cf == 1)||(cf==0))
			pc = *a;
		cout << "jge" << endl;
	}
	void jl(uint8_t* a) 
	{
		if (cf == -1)
			pc = *a;
		cout << "jl" << endl;
	}
	void jle(uint8_t* a) 
	{
		if ((cf == -1) || (cf == 0))
			pc = *a;
		cout << "jle" << endl;
	}
	void jmp(uint8_t* a) 
	{
		pc = *a;
		cout << "jmp" << endl;
	}
	bool getPin(size_t i) 
	{
		cout << "getted" << endl;
		return pins[i].leg;		
	}
	void setPin(size_t i, bool s) 
	{
		pins[i].leg = s;
		cout << "setted" << endl;
	}

	void setRom(string f)
	{
		fstream file(f);
		//string s;
		while (!file.eof())
		{
			string s;
			getline(file, s);
			rom.push_back(s);
		}
		file.close();
		cout << "rom installed!" << endl;
	}

	void setDefPin()
	{
		for(int i=0;i<6;i++)
			if (pins[i].wr == 0) 
			{
				pins[i].file >> pins[i].leg;
				cout << "pinne " << i << " inputted!" << endl;
			}
	}

	void getDefPin()
	{
		for (int i = 0;i<6;i++)
			if (pins[i].wr == 1)
			{
				pins[i].file << '!' << pins[i].leg << endl;
				cout << "pinne " << i << " outputted!" << endl;
			}
	}
public:
	mc() : pc(0) 
	{
		for (int i = 0;i < 6;i++)
			pins[i].wr = -1;
	}

	~mc()
	{
		for (int i = 0;i < 6;i++)
			pins[i].file.close();
	}
	void next() 
	{
		string com;
		stringstream ss(rom[pc]);
		ss >> com;
		if (com == "mov") 
		{
			string fo, so;
			ss >> fo >> so;
			if (fo[0] == '$') 
			{
				if (so[0] == '$') 
					mov(reg + (fo[1] - '0'), reg + (so[1] - '0'));
				else 
					mov(reg + (fo[1] - '0'), ram + stoi(so));
			}
			else
			{
				if (so[0] == '$')
					mov(ram + stoi(fo), reg + (so[1] - '0'));
				else
					mov(ram + stoi(fo), ram + stoi(so));
			}
		}
		else if (com == "add")
		{
			string fo, so;
			ss >> fo >> so;
			if (so[0] == '$')
				add(reg + (fo[1] - '0'), reg + (so[1] - '0'));
			else
				add(reg + (fo[1] - '0'), ram + stoi(so));
		}
		else if (com == "sub")
		{
			string fo, so;
			ss >> fo >> so;
			if (so[0] == '$')
				sub(reg + (fo[1] - '0'), reg + (so[1] - '0'));
			else
				sub(reg + (fo[1] - '0'), ram + stoi(so));
		}
		else if (com == "mul")
		{
			string fo, so;
			ss >> fo >> so;
			if (so[0] == '$')
				mul(reg + (fo[1] - '0'), reg + (so[1] - '0'));
			else
				mul(reg + (fo[1] - '0'), ram + stoi(so));
		}
		else if (com == "div")
		{
			string fo, so;
			ss >> fo >> so;
			if (so[0] == '$')
				div(reg + (fo[1] - '0'), reg + (so[1] - '0'));
			else
				div(reg + (fo[1] - '0'), ram + stoi(so));
		}
		else if (com == "mod")
		{
			string fo, so;
			ss >> fo >> so;
			if (so[0] == '$')
				mod(reg + (fo[1] - '0'), reg + (so[1] - '0'));
			else
				mod(reg + (fo[1] - '0'), ram + stoi(so));
		}
		else if (com == "and")
		{
			string fo, so;
			ss >> fo >> so;
			if (so[0] == '$')
				and(reg + (fo[1] - '0'), reg + (so[1] - '0'));
			else
				and(reg + (fo[1] - '0'), ram + stoi(so));
		}
		else if (com == "or")
		{
			string fo, so;
			ss >> fo >> so;
			if (so[0] == '$')
				or(reg + (fo[1] - '0'), reg + (so[1] - '0'));
			else
				or(reg + (fo[1] - '0'), ram + stoi(so));
		}
		else if (com == "xor")
		{
			string fo, so;
			ss >> fo >> so;
			if (so[0] == '$')
				xor(reg + (fo[1] - '0'), reg + (so[1] - '0'));
			else
				xor(reg + (fo[1] - '0'), ram + stoi(so));
		}
		else if (com == "shl")
		{
			string fo, so;
			ss >> fo >> so;
			if (so[0] == '$')
				shl(reg + (fo[1] - '0'), reg + (so[1] - '0'));
			else
				shl(reg + (fo[1] - '0'), ram + stoi(so));
		}
		else if (com == "shr")
		{
			string fo, so;
			ss >> fo >> so;
			if (so[0] == '$')
				shr(reg + (fo[1] - '0'), reg + (so[1] - '0'));
			else
				shr(reg + (fo[1] - '0'), ram + stoi(so));
		}
		else if (com == "cmp")
		{
			string fo, so;
			ss >> fo >> so;
			if (so[0] == '$')
				cmp(reg + (fo[1] - '0'), reg + (so[1] - '0'));
			else
				cmp(reg + (fo[1] - '0'), ram + stoi(so));
		}
		else if (com == "jg")
		{
			string fo;
			ss >> fo;
			if (fo[0] == '$')
				jg(reg + (fo[1] - '0'));
			else
				jg(ram + stoi(fo));
		}
		else if (com == "jge")
		{
			string fo;
			ss >> fo;
			if (fo[0] == '$')
				jge(reg + (fo[1] - '0'));
			else
				jge(ram + stoi(fo));
		}
		else if (com == "jl")
		{
			string fo;
			ss >> fo;
			if (fo[0] == '$')
				jl(reg + (fo[1] - '0'));
			else
				jl(ram + stoi(fo));
		}
		else if (com == "jle")
		{
			string fo;
			ss >> fo;
			if (fo[0] == '$')
				jle(reg + (fo[1] - '0'));
			else
				jle(ram + stoi(fo));
		}
		else if (com == "jmp")
		{
			string fo;
			ss >> fo;
			if (fo[0] == '$')
				jmp(reg + (fo[1] - '0'));
			else
				jmp(ram + stoi(fo));
		}
		else if (com == "get")
		{
			string fo,so;
			ss >> fo >> so;
			*(reg + (fo[1] - '0')) = (getPin(stoi(so)) | (*(reg + (fo[1] - '0')) & 254));
		}
		else if (com == "set")
		{
			string fo, so;
			ss >> fo >> so;
			setPin(stoi(so), *(reg + (fo[1] - '0')) & 1);
			//*(reg + (fo[1] - '0')) = getPin(stoi(so));
		}
		else cout << "wrong command!";

	}	

	bool getcommands()
	{
		string line;
		getline(cin, line);
		stringstream ss(line);
		ss >> line;
		if (line == "rx")//vuvod
		{
			string fo, so;
			ss >> fo >> so;
			pins[stoi(fo)].file.open(so);
			pins[stoi(fo)].wr = 1;
		}
		else if (line == "tx")//vvod
		{
			string fo, so;
			ss >> fo >> so;
			pins[stoi(fo)].file.open(so);
			pins[stoi(fo)].wr = 0;
		}
		else if (line == "com")
		{
			string fo;
			ss >> fo;
			setRom(fo);
		}
		else if (line == "run")
		{
			pc = 0;
			setDefPin();
			while (pc < rom.size())
			{
				next();
				pc++;
			}
			getDefPin();
		}
		else if (line == "exit")
			return 0;
		else cout << "wrong command"<<endl;
		return 1;
	}
};

int main() 
{
	mc pic;
	bool ex =1;
	while (ex)
	{
		cout << ">";
		ex = pic.getcommands();
	}
	return 0;
}