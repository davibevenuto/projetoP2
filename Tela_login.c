#define TAM_NOME 50
#define TAM_LOGIN 15
#define TAM_SENHA 15
#define TAM_PLYLST 200
#define QTD_MUSICAS 100

void inicial ();


typedef struct Usuario {
	int codigo; // autoincremento
	char nome[TAM_NOME];
	char login[TAM_LOGIN];
	char senha[TAM_SENHA];
	int qtdPlaylists; // quantidade de playlists criadas pelo usu�rio
	int playlists[TAM_PLYLST]; // vetor com os c�digos das playlists criadas
	int qtdPlaylistsFav; // IDEM: favoritadas pelo usu�rio
	int playlistsFav[TAM_PLYLST]; // IDEM: favoritadas pelo usu�rio
} TUsuario;

typedef struct Musica {
	int codigo; // autoincremento
	char titulo[TAM_NOME]; // t�tulo da m�sica
	char artista[TAM_NOME]; // nome do artista que est� cantando esta m�sica
} TMusica;

typedef struct playlist {
	int codigo; // autoincremento
int codigoUsuario; // o c�digo do usu�rio que criou a playlist
char titulo[TAM_NOME]; // t�tulo desta playlist
int qtdMusicas; // quantidade atual de m�sicas inclu�das nesta playlist
int musicas[QTD_MUSICAS]; // vetor contendo os c�digos das m�sicas
} TPlaylist;



int main() {


    int op;

    do{
    inicial();
    printf("Digite Uma das opcoes\n");
    printf("1 - Para programa do ADM\n");
    printf("2 - Para programa do Usuario\n");
    scanf("%d",&op);

switch(op){

    case 1:
        printf("Menu do Administrador\n");
        break;
    case 2:
        printf("Menu do Usuario\n");
        break;
    }
}while(op!=0);




	return 0;
}


// Estrutura do logo do programa
void inicial (){


printf("\n ___|)_________|___________");
printf("\n|___/___|______|____");
printf("\n|__/|___|-.__,-.________");
printf("\n|_/(|,\\_|/___`-'______");
printf("\n|_\\_|_/__________");
printf("\n    | ");
printf("\n  (_|                      DBS\n");


}
