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

    char senha_adm[11]="m@st3r2016",Administrador[TAM_SENHA];
    int i;

    printf("Por favor digite a senha do Administrador:");
    for(i=0;i<TAM_SENHA;i++){
    Administrador[i]=getch();
    printf("*");
    }
    printf("Senha do ADM %s\n",Administrador);

}
// Fim da tela de login do Administrador
