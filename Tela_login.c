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
void confere_senha(char pass[TAM_SENHA],int nivel);


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



FILE * arq;
char nomeArq [ ] = "Principal";
int status;
arq = fopen (nomeArq, "wb");
if (arq == NULL)
printf("Erro ao tentar criar o arquivo %s", nomeArq);
else {
printf("Arquivo %s criado com sucesso", nomeArq);
status = fclose (arq);
if (status == 0)
printf("Arquivo %s fechado com sucesso", nomeArq);
else
printf("Erro ao tentar fechar o arquivo %s", nomeArq);
}

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

    char buffer,senha[TAM_SENHA];
    int i,nivel=1,sair=0;

    printf("Por favor digite a senha do Administrador:");


    while(i<TAM_SENHA||sair==0){

        buffer=getch();
        if(isprint(buffer)!=0){
            senha[i]=buffer;
            i++;
            printf("*");
        }
    else  if(buffer==8){
        senha[i]='\0';
        i--;
        printf("\b \b");
  }
}
confere_senha(senha,nivel);


system("pause");
}
void confere_senha (char pass[TAM_SENHA],int nivel){

    char senha_adm[11]={'m','@','s','t','3','r','2','0','1','6'};
    int aux;
    if(nivel==1){
        if(strcmp(senha_adm,pass)==0){
    printf("Login efetuado com sucesso!\n");
        }
        else{
            printf("Senha invalida!");
        }
    }
    system("pause");

}
// Fim da tela de login do Administrador
