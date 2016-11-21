#define TAM_NOME 50
#define TAM_LOGIN 15
#define TAM_SENHA 15
#define TAM_PLYLST 200
#define QTD_MUSICAS 100

void inicial (int logo);


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



int main() {


    int op=1,logo;

    do{
    inicial(logo);
    scanf("%d",&op);

    }while(op!=0);




	return 0;
}


// Estrutura do logo do programa
void inicial (int logo){

logo=0;
printf("\n ___|)_________|___________");
printf("\n|___/___|______|____");
printf("\n|__/|___|-.__,-.________");
printf("\n|_/(|,\\_|/___`-'______");
printf("\n|_\\_|_/__________");
printf("\n    | ");
printf("\n  (_|                      DBS\n");


}
