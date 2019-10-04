#include <iostream>
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
		default: cout << "Nao existe nenhuma funcao com a tecla selecionada.\nFavor digitar novamente.\n"
	}
	return !(escolha == '*');
}

void Interface::novoCliente(&banco aberto)
{
	string nome, documento, endereco, tel;
	cout << "Digite o nome do cliente: ";
	cin.getline(nome);
	cout << "Digite o documento do cliente: ";
	cin.getline(documento,13);
	cout << "Digite o endereco do cliente: ";
	cin.getline(endereco);
	cout << "Digite o telefone do cliente: ";
	cin.getline(tel);
	Cliente novo(nome, documento, endereco, tel);
	aberto.novoCliente(novo);
}

void Interfce::novaConta (&banco aberto)
{
	cout << "" ;
}

void Interface::excluirCliente(&banco aberto);
{
	cout << "";
}
void Interface::excluirConta(&banco aberto);
{
	cout << "";
}
void Interface::deposito(&banco aberto)
{
	cout << "";
}
void Interface::saque(&banco aberto)
{
	cout << "";
}
void Interface::transferencia(&banco aberto)
{
	cout << "";
}
void Interface::tarifa(&banco aberto)
{
	
}
void Interface::Cpmf(&banco aberto)
{
	
}
void Interface::saldo(&banco aberto)
{
	
}
void Interface::extrato(&banco aberto)
{
	
}
void Interface::clientes(&banco aberto)
{
	
}
void Interface::contas(&banco aberto)
{
	
}
void Interface::int main()
{

}
