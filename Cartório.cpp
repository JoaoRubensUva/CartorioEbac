#include <stdio.h> //biblioteca de comunicao ao usuario
#include <stdlib.h> //biblioteca de localidade e memoria
#include <locale.h> //biblioteca loacalidade de texto por regiao
#include <string.h> //biblioteca responsavel por cuidae das string

    int registro() //Responsavel por cadastrar usuario no sistema
    {
    	//Responsavel por criar as variaveis/string
    	
    	char arquivo[40];
		char cpf[40];
    	char nome[40];
    	char sobrenome[40];
    	char cargo[40];
    	//Final da criação de variaveis/strings
    	
		printf("Digite o cpf a ser cadastrado:");  //Coletando informações de usuarios 
    	scanf("%s" , cpf);  //% refere-se a string
    	strcpy(arquivo, cpf);  //Responsavel por copiar os valores das strings
    	
    	FILE *file; //Cria o arquivo
    	file = fopen(arquivo, "w"); //Cria o arquivo e o ""W"" significa escrver 
    	fprintf(file, cpf); //Salva o arquivo
    	fclose(file); //Fecha o arquivo
    	
    	file = fopen(arquivo, "a"); //Cria o arquivo
    	fprintf(file, ",");  //Salva o arquivo
    	fclose(file);  //Fecha o arquivo
    	printf("Digete o nome a ser cadastrado");  //Coletando informações de usuarios 
    	scanf("%s" ,nome); //% refere-se a string
    	
    	file = fopen(arquivo, "a"); //Cria o arquivo / comando
    	fprintf(file,nome);  //Salva o arquivo
    	fclose(file);  //Fecha o arquivo
    	
    	file = fopen(arquivo, "a");  //Cria o arquivo / comando
    	fprintf(file, ",");   //Salva o arquivo
    	fclose(file);  //Fecha o arquivo
    	
		printf("Digete o nome a ser cadastardo: ");  //Coletando informações de usuarios 
    	scanf("%s" ,sobrenome);  //% refere-se a string
    	
    	file = fopen(arquivo, "a");  //Cria o arquivo / comando
    	fprintf(file,sobrenome);  //Salva o arquivo
    	fclose(file);  //Fecha o arquivo
    	
    	file = fopen(arquivo, "a");  //Cria o arquivo / comando
    	fprintf(file, ",");  //Salva o arquivo
    	fclose(file);  //Fecha o arquivo
    	
    	printf("Digete o cargo a ser cadastardo: ");  //Coletando informações de usuarios 
    	scanf("%s" ,cargo);  //% refere-se a string
    	
    	file = fopen(arquivo, "a");  //Cria o arquivo / comando
    	fprintf(file,cargo);   //Salva o arquivo
    	fclose(file);  //Fecha o arquivo
    	
    	system("pause");
    	
    	
	}

    int consulta()
    {
    setlocale(LC_ALL, "Portuguese"); //definindo linguagem
	
	char cpf[40];
    char conteudo [200];
    
    printf ("Digete o cpf a ser consultado ");  //Coletando i//Coletando informações de usuarios 
    scanf ("%s", cpf);  //% refere-se a string
    
    FILE *file;
    file = fopen(cpf, "r");
    
    if(file == NULL)
    {
    	printf("Nao foi possivel abrir o arquivo, nao localizado!./n");  //Coletando informações de usuarios
	}
    
    while(fgets(conteudo, 200, file) != NULL)
    {
    	printf("\nEssa são as informações do usuario: ");  //Coletando informações de usuarios
    	printf ("%s conteudo");   //% refere-se a string
    	printf("\n\n");  // Pula uma linha
    	
    	system("pause");
    
	} 
	}
    
int deletar()
{

	
    	char cpf[40];
    	
    	printf("Digete o CPF do usuario a ser deletado");
    	scanf("%s", cpf);
    	
    	remove(cpf);
    	
    	FILE *file;
    	file = fopen(cpf, "r"); 
    	
    	if(file == NULL);
    	
			
		{
		printf("O usuario não se encontra no sistema!. \n");
    		system("pause");
		} 
	
		
    
		
			
}
		
    

	
    int main()
    {
	 
    int opcao=0; //definindo variaveis
    int laco=1;
    
    for(laco=1;laco=1;)
    {
		
    system("cls");
	
	setlocale(LC_ALL, "Portuguese"); //definindo linguagem

	printf("### Cartorio da EBAC ###\n\n"); //Definindo menu
	printf("Escolha a opção do menu:\n\n");
	printf("\t1 - Registrar nomes\n");
	printf("\t2 - Consultar nomes\n");
	printf("\t3 - Deletar nomes\n");  //Fim do menu
	printf("\4 - Sair do sistema\n\n");
	printf("Opção: "); 

	
	scanf("%d" , &opcao);  //Armazenamento e escolha do usuario

	system("cls"); //Responsavel por limpar a tela 
	
	switch(opcao) //Inicio da seleção  do menu
	
	
	    {
		
		case 1: 
	    registro();  // Chamada de funcionalidade
		break;
		
		case 2:
	    consulta();  // Chamada de funcionalidades
    	break;
    	
    	case 3:
    	deletar();  // Chamada de funcionalidades
		break;
		
	    case 4:
		printf("Obrigado por utilizar o sistema!\n");
		return 0;
		break;
			
	
		default:
		printf("Esta opcao nao esta disponivel!\n");
    	system("pause");
    	break;
    	}//Fim da seleï¿½ï¿½o 
        
    	
        }
    	    
    	
		}

