#include <iostream>
using namespace std;
int qum(){
	double valor;
	cout << "Digite um valor: ";
	cin >> valor;
	if(valor>0){
		cout << valor << " e positivo.";
	} else if(valor<0){
		cout << valor << " e negativo.";
	} else{
		cout << valor << " e nulo.";
	}
	return 0;
}

int qdois(){
	double numUm;
	double numDois;
	cout << "Digite um numero: ";
	cin >> numUm;
	cout << "Digite outro numero: ";
	cin >> numDois;
	if(numUm > numDois){
		cout << numUm << " e maior que " << numDois;
	} else if(numUm < numDois){
		cout << numUm << " e menor que " << numDois;
	} else {
		cout << numUm << " e igual a " << numDois;
	}
	return 0;
}

int qtres(){
	char letra;
	cout << "Informe seu sexo, digite F para feminino e M para masculino: ";
	cin >> letra;
	if(toupper(letra) == 'F'){
		cout << "Feminino";
	} else if(toupper(letra) == 'M'){
		cout << "Masculino";
	} else{
		cout << "Sexo invalido";
	}
	return 0;
}

int qquatro(){
	char resposta;
	int num, menor, maior;
	bool primeiro = true;
	int soma = 0;
	do {
		resposta = 'F';
		cout << "Digite um numero: ";
		cin >> num;
		if(primeiro){
			menor = num;
			maior = num;
		} else if(num > maior){
			maior = num;
		} else if(num < menor){
			menor = num;
		}
		soma += num;
		primeiro = false;
		while(resposta != 'S' && resposta != 'N'){
			cout << "Deseja digitar outro numero? [S/N] ";
			cin >> resposta;
			resposta = toupper(resposta);
		} 
	} while(resposta == 'S');
	cout << "O menor valor digitado foi " << menor << endl;
	cout << "O maior valor digitado foi " << maior << endl;
	cout << "A soma dos valores digitados foi " << soma << endl;	
	return 0;
}

int qcinco(){
	int num;
	cout << "Digite um numero: ";
	cin >> num;
	for(int i = 1; i<=9; i++){
		cout << num << " x " << i << " = " << num*i << endl;
	}
	return 0;
}

int qseis(){
	int num;
	char resposta;
	bool primo = true;
	do{
		resposta = 'f';
		cout << "Digite um numero: ";
		cin >> num;
		for(int i = num/2; i > 1; i--){
			if(num%i==0){
				primo = false;
				cout << num << " nao e primo." << endl;
				break;
			}
		}
		if(primo){
			cout << num << " e primo." << endl;
		}
		while(toupper(resposta) != 'S' && toupper(resposta) != 'N'){
			cout << "Deseja digitar mais numeros? [S/N] ";
			cin >> resposta;
		}
	} while(toupper(resposta) == 'S');
	return 0;
}

int qsete(){
	int num;
	int somaPar = 0;
	int somaImpar = 0;
	while(true){
		cout << "Digite um numero (valor maior que 1000 encerra o programa): ";
		cin >> num;
		if(num>1000){
			break;
		} else if(num%2 == 0){
			somaPar += num;
		} else{
			somaImpar += num;
		}
	}
	cout << "Soma dos numeros pares: " << somaPar << endl;
	cout << "Soma dos numeros impares: " << somaImpar << endl;
	return 0;
}

int qoito(){
	int termoAnterior = 0;
	int varAuxiliar;
	int termoAtual = 1;
	int num;
	cout << "Qual a posicao do termo da sequencia de Fibonacci que voce deseja exibir? ";
	cin >> num;	
	for(int i = 1; i < num; i++){
		varAuxiliar = termoAtual;
		termoAtual = termoAtual + termoAnterior;
		termoAnterior = varAuxiliar;
	}
	cout << "O " << num << " termo da sequencia de Fibonacci e " << termoAtual;
	return 0;
}

int qnove(){
	float salarioAntes, salarioDepois;
	float percentualAumento;
	float aumento;
	
	cout << "Digite seu salario atual: ";
	cin >> salarioAntes;
	if(salarioAntes <= 280){
		percentualAumento = 20;
	} else if(salarioAntes <= 700){
		percentualAumento = 15;
	} else if(salarioAntes <= 1500){
		percentualAumento = 10;
	} else{
		percentualAumento = 5;
	}
	aumento = salarioAntes*percentualAumento/100;
	salarioDepois = salarioAntes + aumento;
	
	cout << "Salario antes do reajuste: " << salarioAntes << endl;
	cout << "Percentual do aumento aplicado: " << percentualAumento << "%" << endl;
	cout << "Valor do aumento: " << aumento << endl;
	cout << "Novo salario: " << salarioDepois << endl;
	return 0;
}

int qdez(){
	int numUm, numDois;
	
	do{
	cout << "Primeiro botao = ";
	cin >> numUm;
	} while(numUm > 5 || numUm < 0);
	
	do{
	cout << "Segundo botao = ";
	cin >> numDois;
	} while(numDois > 5 || numDois < 0);
	
	switch(numUm + numDois)	{
		case 0:
			cout << "Meio Dia";
			break;
		case 1:
			cout << "Rock no Sertao";
			break;
		case 2:
			cout << "Saga de um Vaqueiro";
			break;
		case 3:
			cout << "Bota pegado parea";
			break;
		case 4:
			cout << "Ponto final";
			break;
		case 5:
			cout << "Luz, Camera, Acao";
			break;
		case 6:
			cout << "Toma conta de mim";
			break;
		case 7:
			cout << "Olha pro ceu";
			break;
		case 8:
			cout << "Olhinhos de fogueira";
			break;
		case 9:
			cout << "Rancheira";
			break;
		case 10:
			cout << "Avoante";
			break;
	}
	return 0;
}

int main() {
	int questao;
	do{
		cout << "Qual questao deseja exibir? ";
		cin >> questao;
	}while(questao<=0 || questao > 10);
	switch(questao){
		case 1:
			qum();
			break;
		case 2:
			qdois();
			break;
		case 3:
			qtres();
			break;
		case 4:
			qquatro();
			break;
		case 5:
			qcinco();
			break;
		case 6:
			qseis();
			break;
		case 7:
			qsete();
			break;
		case 8:
			qoito();
			break;
		case 9:
			qnove();
			break;
		case 10:
			qdez();
			break;
	}
	return 0;
}
