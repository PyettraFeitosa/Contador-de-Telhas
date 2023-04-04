#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct cadastro {
	
	char nome[50];
	char email[50];
	char telefone[20];
	
};

struct cadastro cad;

void cliente();
void menu();


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	cliente();
	menu();
	
	return 0;
}

void cliente(){
	
	system("clear");
	
	int op;
	
	do{
		
		printf("\t\tCalculadora de Telhas\n\n");
		printf("\tCadastro do Cliente\n");
		
		printf("\nNome do cliente: ");
		fflush(stdin);
		fgets(cad.nome, 50, stdin);
		
		printf("\nE-mail do cliente: ");
		fflush(stdin);
		fgets(cad.email, 50, stdin);
		
		printf("\nTelefone do cliente (Exemplo: 83998313584): ");
		fflush(stdin);
		fgets(cad.telefone, 20, stdin);
		
		system("clear");
		
		printf("\nOs dados do cliente são: \n\n");
		printf("\nNome do cliente: %s", cad.nome);
		printf("\nE-mail do cliente: %s", cad.email);
		printf("\nTelefone do cliente: %s", cad.telefone);
		
		printf("\nPressione 0 para continuar!\n");
		scanf("%d", &op);
		
		system ("cls");
		
	}while(op != 0);

}

void menu(){
	
	int telha, telhado;
	float ta1[3], ta2[3], ta3[7], ta4[8], tel[1];
	
	do{
		
		printf("\t\tTipos de Telhas\n\n");
		
		printf("Escolha o tipo de telhas a ser utilizado: \n\n");
		
		printf("\t1- Telhas Cerâmicas\n");
		printf("\t2- Telhas Esmaltadas\n");
		printf("\t3- Telhas de Concreto\n");
		printf("\t4- Telhas de Fibrocimento\n");
		printf("\t5- Telhas de Vidro\n");
		printf("\t6- Telhas de Policarbonato\n");
		printf("\t7- Telhas Galvanizadas\n");
		printf("\t8- Telhas de PVC\n");
		printf("\t9- Telhas de PET\n\n");
	
		scanf("%d", &telha);
		
	}while(telha > 9);
	
	system("clear");
	
	do{
		
		printf("\t\tTipos de Telhados\n\n");
	
		printf("Escolha o tipo de telhado a ser utilizado: \n\n");
		
		printf("1- 1 água\n");
		printf("2- 2 águas\n");
		printf("3- 3 águas\n");
		printf("4- 4 águas\n\n");
		
		scanf("%d", &telhado);
		
	}while(telhado > 4);
	
	system("clear");
	
	switch(telhado){
		
	case 1:
		
		printf("\t\tMedidas do Telhado\n\n");
	
		printf("Informe a medida da parte inferior:\n");
		scanf("%f", &ta1[0]);
		printf("Informe a medida da parte direita:\n");
		scanf("%f", &ta1[1]);
		
		ta1[2] = (ta1[0]*ta1[1]);
		
		printf("A área do telhado em metros é: %.2f", ta1[2]);
		
		switch(telha){
			
		case 1:
			
			tel[0] = (15.5*ta1[2]*2);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
			
			break;
		
		case 2: 
			
			tel[0] = (12.5*ta1[2]*6);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
			
			break;
		
		case 3:
			
			tel[0] = (10.5*ta1[2]*7);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
			
			break;
		
		case 4:
			
			tel[0] = (1*ta1[2]*35);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
			
			break;
		
		case 5:
			
			tel[0] = (16*ta1[2]*36);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
					
			break;
		
		case 6:

			tel[0] = (1*ta1[2]*45);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
			
			break;
		
		case 7:

			tel[0] = (1*ta1[2]*23);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
			
			break;
		
		case 8:
			
			tel[0] = (1*ta1[2]*80);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
			
			break;			
		
		case 9:
			
			tel[0] = (12*ta1[2]*36);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
			
			break;			
											
		default:
			
			printf("Opção inválida!");
			
			break;
		}
		
		break;
	
	case 2:
		
		printf("\t\tMedidas do Telhado\n\n");
	
		printf("Informe a medida da parte inferior direita: \n");
		scanf("%f", &ta2[0]);
		printf("Informe a medida da lateral direita: \n");
		scanf("%f", &ta2[1]);
		
		ta2[2] = 2*(ta2[0]*ta2[1]);

		
		printf("\nA área total do telhado em metros é: %.2f", ta2[2]);
		
		switch(telha){
			
		case 1:
			
			tel[0] = (15.5*ta2[2]*2);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
			
			break;
		
		case 2: 
			
			tel[0] = (12.5*ta2[2]*6);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
			
			break;
		
		case 3:
			
			tel[0] = (10.5*ta2[2]*7);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
			
			break;
		
		case 4:
			
			tel[0] = (1*ta2[2]*35);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
			
			break;
		
		case 5:
			
			tel[0] = (16*ta2[2]*36);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
					
			break;
		
		case 6:

			tel[0] = (1*ta2[2]*45);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
			
			break;
		
		case 7:

			tel[0] = (1*ta2[2]*23);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
			
			break;
		
		case 8:
			
			tel[0] = (1*ta2[2]*80);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
			
			break;			
		
		case 9:
			
			tel[0] = (12*ta2[2]*36);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
			
			break;			
											
		default:
			
			printf("Opção inválida!");
			
			break;
		}		
		
		break;
	
	case 3:
		
		printf("\t\tMedidas da Parte Frontal do Telhado\n\n");
		
		printf("Informe a medida da parte inferior: \n");
		scanf("%f", &ta3[0]);
		printf("Informe a medida da altura do triângulo frontal: \n");
		scanf("%f", &ta3[1]);
		
		printf("\t\tMedidas da Lateral do Telhado\n\n");
		
		printf("Informe a medida da parte lateral inferior: \n");
		scanf("%f", &ta3[2]);
		printf("Informe a medida da lateral direita: \n");
		scanf("%f", &ta3[3]);
				
		ta3[4] = ((ta3[0]*ta3[1])/2);
		ta3[5] = 2*(ta3[2]*ta3[3]);
		
		printf("\nA área da parte triangular do telhado é: %.2f", ta3[4]);
		printf("\nA área do restante do telhado é: %.2f", ta3[5]);
		
		ta3[6] = ta3[4]+ta3[5];
		
		printf("\nA área total do telhado é: %.2f", ta3[6]);
		
		switch(telha){
			
		case 1:
			
			tel[0] = (15.5*ta3[6]*2);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
			
			break;
		
		case 2: 
			
			tel[0] = (12.5*ta3[6]*6);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
			
			break;
		
		case 3:
			
			tel[0] = (10.5*ta3[6]*7);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
			
			break;
		
		case 4:
			
			tel[0] = (1*ta3[6]*35);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
			
			break;
		
		case 5:
			
			tel[0] = (16*ta3[6]*36);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
					
			break;
		
		case 6:

			tel[0] = (1*ta3[6]*45);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
			
			break;
		
		case 7:

			tel[0] = (1*ta3[6]*23);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
			
			break;
		
		case 8:
			
			tel[0] = (1*ta3[6]*80);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
			
			break;			
		
		case 9:
			
			tel[0] = (12*ta3[6]*36);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
			
			break;			
											
		default:
			
			printf("Opção inválida!");
			
			break;
		}		
		
		break;
	
	case 4:
		
		printf("\t\tMedidas da Parte Frontal do Telhado\n\n");
		
		printf("Informe a medida da parte frontal inferior: \n");
		scanf("%f", &ta4[0]);
		printf("Informe a medida da altura do triângulo frontal: \n");
		scanf("%f", &ta4[1]);
		
		printf("\t\tMedidas da Lateral do Telhado\n\n");
		
		printf("Informe a medida da parte superior: \n");
		scanf("%f", &ta4[2]);
		printf("Informe a medida da parte inferior: \n");
		scanf("%f", &ta4[3]);
		printf("Informe a medida da altura do trapézio lateral: \n");
		scanf("%f", &ta4[4]);
		
		ta4[5] = 2*((ta4[0]*ta4[1])/2);
		ta4[6] = 2*(((ta4[2]+ta4[3])*ta4[4])/2);
		
		printf("\nA área das partes triangulares é: %.2f", ta4[5]);
		printf("\nA área dos trapézios é: %.2f", ta4[6]);
		
		ta4[7] = ta4[5]+ta4[6];
		
		printf("\nA área total do telhado é: %.2f", ta4[7]);	
		
		switch(telha){
			
		case 1:
			
			tel[0] = (15.5*ta4[7]*2);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
			
			break;
		
		case 2: 
			
			tel[0] = (12.5*ta4[7]*6);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
			
			break;
		
		case 3:
			
			tel[0] = (10.5*ta4[7]*7);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
			
			break;
		
		case 4:
			
			tel[0] = (1*ta4[7]*35);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
			
			break;
		
		case 5:
			
			tel[0] = (16*ta4[7]*36);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
					
			break;
		
		case 6:

			tel[0] = (1*ta4[7]*45);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
			
			break;
		
		case 7:

			tel[0] = (1*ta4[7]*23);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
			
			break;
		
		case 8:
			
			tel[0] = (1*ta4[7]*80);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
			
			break;			
		
		case 9:
			
			tel[0] = (12*ta4[7]*36);
			printf("\nO valor é: R$ %.2f\n", tel[0]);
			
			break;			
											
		default:
			
			printf("Opção inválida!");
			
			break;
		}		
		
		break;			  		
		
		break;
		
	default:
		
		printf("Opção Inválida!");
		
		break;
	}		
}