#include<stdio.h>
#include<stdlib.h>


struct dados {
                char nome_estado[20];
                int n_veiculo,n_acidentes;
                }Coletar;


void coletar_dados (Coletar dados);


int main (){

int op=0;
struct dados acidentes[26];

do{
    printf("Pesquisa sobre estatisca de indice de acidentes\n");
    printf("Digite uma das seguintes opcoes\n");
    printf("1 - Para cadastrar de acidentes por estado\n");
    printf("2 - Vizualizar qual estado mais ocorreu acidentes e menos acidentes\n");
    printf("3 - Visualizar percentual de veiculos envilvidos em acidentes por estado\n");
    printf("4 - Informa a media de acidentes no pais\n");
    printf("5 - Visualizar estados que estao com numero de acidentes acima da media do pais\n");
    printf("6 - Para sair do programa\n");

    switch (op){

case 1:
    coletar_dados (Coletar dados);
    break;
case 2:
    break;
case 3:
    break;
case 4:
    break;
case 5:
    break;
    default
    printf("Opcao invalida!\n");
    }

}while(op!=6);


return 0;
}

coletar_dados (Coletar dados){
int i;

for(i=0;i<26;i++){
    printf("Digite o nome do estado: ");
    fgets(dados.nome_estado,20,stdin);


}


}
