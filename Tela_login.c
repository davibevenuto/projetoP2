#include<stdio.h>
#include<stdlib.h>
#define TAM_NOME 50
#define TAM_LOGIN 15
#define TAM_SENHA 15
#define TAM_PLYLST 200
#define QTD_MUSICAS 100

void inicial ();
void Tela_User();
void Tela_ADM();

typedef struct Usuario {
	int codigo; // autoincremento
	char nome[TAM_NOME];
	char login[TAM_LOGIN];
	char senha[TAM_SENHA];
	int qtdPlaylists; // quantidade de playlists criadas pelo usuário
	int playlists[TAM_PLYLST]; // vetor com os códigos das playlists criadas
	int qtdPlaylistsFav; // IDEM: favoritadas pelo usuário
	int playlistsFav[TAM_PLYLST]; // IDEM: favoritadas pelo usuário
} TUsuario;

typedef struct Musica {
	int codigo; // autoincremento
	char titulo[TAM_NOME]; // título da música
	char artista[TAM_NOME]; // nome do artista que está cantando esta música
} TMusica;

typedef struct playlist {
	int codigo; // autoincremento
int codigoUsuario; // o código do usuário que criou a playlist
char titulo[TAM_NOME]; // título desta playlist
int qtdMusicas; // quantidade atual de músicas incluídas nesta playlist
int musicas[QTD_MUSICAS]; // vetor contendo os códigos das músicas
} TPlaylist;


// Programa principal
int main() {


    int op;

do{
        system("cls");
        inicial();
        printf("Digite Uma das opcoes:\n");
        printf("1 - Acessar programa do ADM\n");
        printf("2 - Acessar programa do Usuario\n");
        printf("0 - Para sair do programa\n");
        scanf("%d",&op);

    switch(op){

        case 1:
            printf("Menu do Administrador\n");
            Tela_ADM();
            break;
        case 2:
            printf("Menu do Usuario\n");
            Tela_User();
            break;
    }
}while(op!=0);

system("pause");
	return 0;
}
// Fim programa principal

// Head do programa
void inicial (){

int i;

printf("\t\t\t\t ___|)_________|___________\n");
printf("\t\t\t\t|___/___|______|____\n");
printf("\t\t\t\t|__/|___|-.__,-.________\n");
printf("\t\t\t\t|_/(|,\\_|/___`-'______\n");
printf("\t\t\t\t|_\\_|_/__________\n");
printf("\t\t\t\t    | \n");
printf("\t\t\t\t  (_| \n");
for(i=0;i<50;i++){
    printf("--");
}
printf("\n");
printf("\t\t\t\t\tMUSIC PLAYER \n");
for(i=0;i<50;i++){
    printf("--");
}
printf("\n");

}
// Fim do head
// Area de login dos usuarios
void Tela_User(){

}
// Fim da tela de login do usuario
// Area de login do Administrador
void Tela_ADM(){

    char senha_adm[11]={'m','@','s','t','3','r','2','0','1','6'},buffer;
    int i,validar;

    printf("Por favor digite a senha do Administrador:");

    for(i=0;i<TAM_SENHA||(buffer==13);i++){

    buffer=getch();
    if(isprint(buffer)!=0){

    }
    printf("*");
    printf("senha %c\n",Administrador[i]);
    }


 do{
           c=getch();
           if(isprint(c)){     do{
           c=getch();
           if(isprint(c)){       //Analisa se o valor da variável c é imprimivel
           cadastro_senha[a]=c;  //Se for, armazena o caractere
           a++;
           printf("*");          //imprime o * Anterisco
           }
           else if(c==8&&a){     //8 é o caractere BackSpace na tabela ASCII, && a analisa se a é diferente de 0
           cadastro_senha[a]='\0';
           a--;
           printf("\b \b");       //Apagando o caractere digitado
           }
       }while(c!=13);             //13 é o valor de ENTER na tabela ASCII
       cadastro_senha[a]='\0';
       system("cls");
       printf("\n\nCadastro efetuado com sucesso...\n\n");   //Analisa se o valor da variável c é imprimivel
           cadastro_senha[a]=c;  //Se for, armazena o caractere
           a++;
           printf("*");          //imprime o * Anterisco
           }
           else if(c==8&&a){     //8 é o caractere BackSpace na tabela ASCII, && a analisa se a é diferente de 0
           cadastro_senha[a]='\0';
           a--;
           printf("\b \b");       //Apagando o caractere digitado
           }
       }while(c!=13);             //13 é o valor de ENTER na tabela ASCII
       cadastro_senha[a]='\0';
       system("cls");
       printf("\n\nCadastro efetuado com sucesso...\n\n");



system("pause");
}
// Fim da tela de login do Administrador
