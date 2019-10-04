#include <iostream>
using namespace std;


int main(){



    return 0;
}

#include "Interface.h"
Interface::Interface()
{
	
}

bool Interface::Menu(&banco aberto)
{
	cout<<"(a) - Cadastrar novo cliente" << endl
	<<"(b) - Criar uma nova conta" << endl
	<<"(c) - Excluir um cliente" << endl
	<<"(d) - Excluir uma conta" << endl
	<<"(e) - Efetuar depósito" << endl
	<<"(f) - Efetuar saque" << endl
	<<"(g) - Efetuar transferência entre contas" << endl
	<<"(h) - Cobrar tarifa" << endl
	<<"(i) - Cobrar CPMF" << endl
	<<"(j) - Obter saldo" << endl
	<<"(k) - Obter extrato" << endl
	<<"(l) - Listar clientes" << endl
	<<"(m) - Listar contas" << endl
	<<"(*) - Sair do programa" << endl;
	char escolha;
	cin >> escolha;
	switch (escolha)
	{
		case 'a' || 'A': NovoCliente(aberto); break;
		case 'b' || 'B': NovaConta(aberto); break;
		case 'c' || 'C': ExcluirCliente(aberto); break;
		case 'd' || 'D': ExcluirConta(aberto); break;
		case 'e' || 'E': Deposito(aberto); break;
		case 'f' || 'F': Saque(aberto); break;
		case 'g' || 'G': Transferencia(aberto); break;
		case 'h' || 'H': Tarifa(aberto); break;
		case 'i' || 'I': CPMF(aberto); break;
		case 'j' || 'J': Saldo(aberto); break;
		case 'k' || 'K': Extrato(aberto); break;
		case 'l' || 'L': Clientes(aberto); break;
		case 'm' || 'M': Contas(aberto); break;
		case '*' : break;
		default: cout << "Nao ha nenhuma funcao no menu que conincida com o numero digitado.\nFavor digitar novamente.\n"
	}
	return !(escolha == '*');
}

void Interface::NovoCliente(&banco aberto)
{
	string nome, docum, endereco, tel;
	cout << "Digite o nome do cliente: ";
	cin.getline(nome);
	cout << "Digite o documento do cliente: ";
	cin.getline(docum,13);
	cout << "Digite o endereco do cliente: ";
	cin.getline(endereco);
	cout << "Digite o telefone do cliente: ";
	cin.getline(tel);
	Cliente novo(nome, docum, endereco, tel);
	aberto.novoCliente(novo);
}

void Interfce::NovaConta (&banco aberto)
{
	cout << "" ;
}

void Interface::ExcluirCliente(&banco aberto);
{
	cout << "";
}
void Interface::ExcluirConta(&banco aberto);
{
	cout << "";
}
void Interface::Deposito(&banco aberto)
{
	cout << "";
}
void Interface::Saque(&banco aberto)
{
	cout << "";
}
void Interface::Transferencia(&banco aberto)
{
	cout << "";
}
void Interface::Tarifa(&banco aberto)
{
	
}
void Interface::CPMF(&banco aberto)
{
	
}
void Interface::Saldo(&banco aberto)
{
	
}
void Interface::Extrato(&banco aberto)
{
	
}
void Interface::Clientes(&banco aberto)
{
	
}
void Interface::Contas(&banco aberto)
{
	
}
void Interface::int main()
{

}
