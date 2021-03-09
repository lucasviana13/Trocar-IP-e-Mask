#include "iostream"
#include "stdlib.h"
#include "string"
#include "string.h"
#include "bits/stdc++.h"
using namespace std;

int zeros (float npc) {
float n0=0;
	npc+=2;

	while (npc>2)
	{
	npc=npc/2;
	n0++;
	}
if (npc==1)
return 32-n0;

else 
return 32-(n0+1);
}

int main () {

string interface, ip, comand, cmd, mask;	
float npc;
int masc;

cout<< "Interface: ";
getline(cin,interface);

cout<< "\n IP: ";
getline(cin,ip);

cout<< "\n Numero de Computadores que deseja conectar: ";
cin>>npc;

masc= zeros(npc);
mask= to_string(masc);

comand="ifconfig ";
	cmd = comand+ " " + interface+ " " + ip + "/" + mask;
	// converte string para char
	int n = cmd.length();
	char cmd_char[n + 1];
	strcpy(cmd_char, cmd.c_str());

	system(cmd_char);
	system("ifconfig");
	return 0;
}
