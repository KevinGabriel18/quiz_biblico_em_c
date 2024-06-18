#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
void regras();
int fase_facil();
int fase_media();
int fase_dificil();

void apresentacao(){
	char y='e';
	do{
	printf("*************************\n");
	printf("\n");
	printf("       QUIZ BIBLICO       ");
	printf("\n\n");
    printf("*************************\n");
    
	printf("Digite x para comecar  ");
	scanf("%c", &y);
	system("cls");
	}while(y!='x');
}


int comeco(){
	system("cls");
	int qual;
	printf("1- Nova Partida\n");
	printf("2- Regra\n");
	printf("3- Sair\n");
	scanf("%d", &qual);
	
	switch(qual){
		
		case 1:
			fase_facil();	
			break;
			
		case 2:
			regras();	
			break;
		
		case 3:
		    exit(0);
			break;		
		
	}
	
}

void regras(){
   char y;
   do{	printf("O Jogo tem 3 niveis de dificuldade, 1-Facil, 2-Medio e 3-Dificil. \n\n\n");
	



   printf("Digite x para comecar  ");
	scanf("%c", &y);
	system("cls");
	}while(y!='x');
	
   comeco();	
}

void tela_apresentacao(const char* mensagem) {
    printf("\n===================================\n");
    printf("%s\n", mensagem);
    printf("Pressione Enter para continuar...\n");
    printf("===================================\n");
    getchar();  
    getchar();  
}

int fase_facil() {
system("cls");
tela_apresentacao("Bem-vindo à Fase Fácil!");
int score = 0, answer;

time_t start, end;

    time(&start);
    
    printf("1. Quem construiu a arca?\n");
    printf("1) Moisés\n");
    printf("2) Noé\n");
    printf("3) Abraão\n");
    printf("Resposta: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    printf("2. Onde Jesus nasceu?\n");
    printf("1) Belém\n");
    printf("2) Jerusalém\n");
    printf("3) Nazaré\n");
    printf("Resposta: ");
    scanf("%d", &answer);
    if (answer == 1) score++;

    printf("3. Quem foi engolido por um grande peixe?\n");
    printf("1) Jonas\n");
    printf("2) Davi\n");
    printf("3) Pedro\n");
    printf("Resposta: ");
    scanf("%d", &answer);
    if (answer == 1) score++;

    printf("4. Quem recebeu os Dez Mandamentos?\n");
    printf("1) Moisés\n");
    printf("2) José\n");
    printf("3) Salomão\n");
    printf("Resposta: ");
    scanf("%d", &answer);
    if (answer == 1) score++;

    printf("5. Qual era o nome do gigante derrotado por Davi?\n");
    printf("1) Golias\n");
    printf("2) Sansão\n");
    printf("3) Elias\n");
    printf("Resposta: ");
    scanf("%d", &answer);
    if (answer == 1) score++;

    printf("6. Quem traiu Jesus?\n");
    printf("1) Pedro\n");
    printf("2) Judas\n");
    printf("3) João\n");
    printf("Resposta: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    printf("7. Qual o primeiro livro da Bíblia?\n");
    printf("1) Êxodo\n");
    printf("2) Levítico\n");
    printf("3) Gênesis\n");
    printf("Resposta: ");
    scanf("%d", &answer);
    if (answer == 3) score++;

    printf("8. Quantos dias Deus levou para criar o mundo?\n");
    printf("1) 5 dias\n");
    printf("2) 6 dias\n");
    printf("3) 7 dias\n");
    printf("Resposta: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    printf("9. Quem foi jogado na cova dos leões?\n");
    printf("1) Daniel\n");
    printf("2) José\n");
    printf("3) Paulo\n");
    printf("Resposta: ");
    scanf("%d", &answer);
    if (answer == 1) score++;

    printf("10. Quem foi a mãe de Jesus?\n");
    printf("1) Marta\n");
    printf("2) Maria\n");
    printf("3) Ester\n");
    printf("Resposta: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    time(&end);
    double time_spent = difftime(end, start);
    printf("Você acertou %d de 10 perguntas!\n", score);
    printf("Tempo total gasto: %.2f segundos\n", time_spent);

    if(score == 10){
        return fase_media();
    }
    else{
        comeco();
        system("cls");
    }
}

int fase_media() {
system("cls");
tela_apresentacao("Bem-vindo à Fase Média!");
int score = 0, answer;

time_t start, end;

    time(&start);

    printf("1. Quem foi jogado na cova dos leões?\n");
    printf("1) Isaías\n");
    printf("2) Daniel\n");
    printf("3) Ezequiel\n");
    printf("Resposta: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    printf("2. Quem foi o segundo rei de Israel?\n");
    printf("1) Saul\n");
    printf("2) Davi\n");
    printf("3) Salomão\n");
    printf("Resposta: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    printf("3. Quem foi a irmã de Lázaro?\n");
    printf("1) Marta\n");
    printf("2) Maria\n");
    printf("3) Madalena\n");
    printf("Resposta: ");
    scanf("%d", &answer);
    if (answer == 1) score++;

    printf("4. Quem andou sobre as águas para encontrar Jesus?\n");
    printf("1) Pedro\n");
    printf("2) João\n");
    printf("3) Tiago\n");
    printf("Resposta: ");
    scanf("%d", &answer);
    if (answer == 1) score++;

    printf("5. Onde os discípulos foram primeiro chamados de cristãos?\n");
    printf("1) Jerusalém\n");
    printf("2) Roma\n");
    printf("3) Antioquia\n");
    printf("Resposta: ");
    scanf("%d", &answer);
    if (answer == 3) score++;

    printf("6. Para onde Jacó e sua família foram morar durante a fome?\n");
    printf("1) Canaã\n");
    printf("2) Gileade\n");
    printf("3) Egito\n");
    printf("Resposta: ");
    scanf("%d", &answer);
    if (answer == 3) score++;

    printf("7. Quem ungiu Davi como rei?\n");
    printf("1) Samuel\n");
    printf("2) Elias\n");
    printf("3) Eliseu\n");
    printf("Resposta: ");
    scanf("%d", &answer);
    if (answer == 1) score++;

    printf("8. Quem foi a esposa de Acabe e perseguia os profetas?\n");
    printf("1) Jezabel\n");
    printf("2) Débora\n");
    printf("3) Ana\n");
    printf("Resposta: ");
    scanf("%d", &answer);
    if (answer == 1) score++;

    printf("9. Quem foi a rainha que salvou os judeus da destruição?\n");
    printf("1) Esther\n");
    printf("2) Rute\n");
    printf("3) Naomi\n");
    printf("Resposta: "); 
    scanf("%d", &answer);
   if (answer == 1) score++;

    printf("10. Quem foi o pai de Esaú e Jacó?");
    printf("1) Abraão\n");
    printf("2) Isaac\n");
    printf("3) Jacó\n");
    printf("Resposta: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    time(&end);
    double time_spent = difftime(end, start);
    printf("Você acertou %d de 10 perguntas!\n", score);
    printf("Tempo total gasto: %.2f segundos\n", time_spent);
    
    if(score == 10){
        return fase_dificil();
    }
    else{
        comeco();
    }
}

int fase_dificil() {
system("cls");
tela_apresentacao("Bem-vindo à Fase Difícil!");
    int score = 0;
    int answer;

  time_t start, end;
    time(&start);

    printf("1. Quem foi o profeta que desafiou os profetas de Baal no Monte Carmelo?\n");
    printf("1) %-10s\n", "Elias\n");
    printf("2) %-10s\n", "Eliseu\n");
    printf("3) %-10s\n", "Jeremias\n");
    printf("Resposta: ");
    scanf("%d", &answer);
    if (answer == 1) score++;

    printf("2. Quem interpretou o sonho do Faraó sobre sete vacas gordas e sete vacas magras?\n");
    printf("1) Moisés\n");
    printf("2) José\n");
    printf("3) Daniel\n");
    printf("Resposta: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    printf("3. Quem foi o primeiro rei de Israel?\n");
    printf("1) Saul\n");
    printf("2) Davi\n");
    printf("3) Salomão\n");
    printf("Resposta: ");
    scanf("%d", &answer);
    if (answer == 1) score++;

    printf("4. Quem escreveu a maior parte dos Salmos?\n");
    printf("1) Moisés\n");
    printf("2) Davi\n");
    printf("3) Salomão\n");
    printf("Resposta: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    printf("5. Quem foi jogado na fornalha ardente por se recusar a adorar a estátua de ouro de Nabucodonosor?\n");
    printf("1) Sadraque, Mesaque e Abede-Nego\n");
    printf("2) Daniel\n");
    printf("3) Ezequiel\n");
    printf("Resposta: ");
    scanf("%d", &answer);
    if (answer == 1) score++;

    printf("6. Qual o nome do local onde Jesus foi crucificado?\n");
    printf("1) Gólgota\n");
    printf("2) Getsêmani\n");
    printf("3) Betânia\n");
    printf("Resposta: ");
    scanf("%d", &answer);
    if (answer == 1) score++;

    printf("7. Quem reconheceu Jesus como o Messias quando ele foi apresentado no templo quando bebê?\n");
    printf("1) Simeão\n");
    printf("2) João Batista\n");
    printf("3) Zacarias\n");
    printf("Resposta: ");
    scanf("%d", &answer);
    if (answer == 1) score++;

    printf("8. Qual o nome do apóstolo que duvidou da ressurreição de Jesus até ver e tocar em suas feridas?\n");
    printf("1) Pedro\n");
    printf("2) Tomé\n");
    printf("3) João\n");
    printf("Resposta: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    printf("9. Quem foi o homem que levou o evangelho à cidade de Samaria?\n");
    printf("1) Filipe\n");
    printf("2)Pedro\n");
    printf("3) Paulo\n");
    printf("Resposta: ");
    scanf("%d", &answer);
    if (answer == 1) score++;

    printf("10. Quantas pragas Deus enviou ao Egito?\n");
    printf("1) Sete\n");
    printf("2) Dez\n");
    printf("3) Doze\n");
    printf("Resposta: ");
    scanf("%d", &answer);
    if (answer == 2) score++;

    time(&end);
    double time_spent = difftime(end, start);
    printf("Você acertou %d de 10 perguntas!\n", score);
    printf("Tempo total gasto: %.2f segundos\n", time_spent);

    if(score == 10){
        printf("Parabéns! Acertou tudo!\n");
    }
    else{
        comeco();
    }
    }

int main(){
setlocale(LC_ALL, "Portuguese");
   apresentacao();
   comeco();	
  
}