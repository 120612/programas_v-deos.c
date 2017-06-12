#include<stdio.h>
int main () {
	
	int x;
	printf ("     Como se tornar um mestre nos estudos.\n");
	printf("              tecnica de Feynman\n");
	printf ("             Escolher um assunto\n");
	printf ("ecolha um assunto para dominar de 1 a 10\n");
	scanf ("%d", &x);
	
	switch (x){
	
	case 1:
		printf("Pokemon GO\n");
		break;
	case 2:
		printf("Jogos Olimpícos do Rio de Janeiro\n");
		break;
	case 3:
		printf("Chapecoense\n");
		break;
	case 4:
		printf("Big Brother Brasil\n");
		break;
	case 5:
		printf("Tabela do Brasileirão\n");
		break;
	case 6:
		printf("Domingos Montagner\n");
		break;
	case 7:
		printf("Eleições 2016\n");
		break;
	case 8:
		printf("Enem\n");
		break;
	case 9:
		printf("Sisu\n");
		break;
	case 10:
		printf("iPhone 7\n");
		break;
		default:
		printf("assunto nao informado\n");
		break;	
		
	}
		if(x<11){
		
	printf ("Agora busque esse assunto pelos melhores sites ou livros \n");
	printf ("E comece a estudar.\n");
}


	else{
		
		printf ("tente outra vez\n");
	
	} 
	
}
