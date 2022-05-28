#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "assinaturas.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int opcao, valorsolicitado = 0, prova = 1, resto20 = 0, resto50 = 0, nota10 = 0, nota20 = 0, nota50 = 0,restoteste=0, teste, saque=0;
    int manutencao, senha;
    printf("\t\tCaixa Eletrônico - SenaiBANK\n\n");
    printf("Digite 1 - Manutenção e 2 - Cliente\n");
    scanf("%d",&manutencao);
    if(manutencao == 1){
        printf("Digite a senha: ");
        scanf("%d",&senha);
        if(senha == 1234){
            printf("Digite a quantidade de Notas de R$10.00 deseja adicionar: ");
            scanf("%d",&nota10);
            printf("Digite a quantidade de Notas de R$10.00 deseja adicionar: ");
            scanf("%d",&nota10);
            printf("Digite a quantidade de Notas de R$10.00 deseja adicionar: ");
            scanf("%d",&nota10);
        }
    }
    system("clear");
    printf("Caixa possuí notas de: R$ 10.00, R$ 20.00, R$ 50.00\n");
    do{
        while(prova == 1){
            printf("\n\t\tOpções de Saque: \n\n\t1 - R$ 50.00\t2 - R$ 100.00 \n\n\t3 - R$ 200.00\t4 - Outro valor");
            printf("\n\nDigite sua opcao: ");
            scanf("%d",&opcao);
            switch(opcao){
                case 1:
                    valorsolicitado = 50;
                    prova=0;
                    break;
                case 2:
                    valorsolicitado = 100;
                    prova=0;
                    break;    
                case 3:
                    valorsolicitado = 200;
                    prova=0;
                    break;
                case 4:
                    printf("\nDeseja realizar saque de quanto: R$ ");
                    scanf("%d",&valorsolicitado);
                    if(valorsolicitado >= 10 && valorsolicitado%10 == 0)
                        prova = 0;
                    else if(valorsolicitado%10!=0){
                        restoteste=valorsolicitado%10;
                        restoteste=10-restoteste;
                        printf("\nSó possuimos valores multiplos de R$ 10.00, deseja sacar R$ %d.00 (1-Sim e 2-Não): ",valorsolicitado+restoteste);
                        scanf("%d",&teste);
                        if(teste==1){
                            prova=0;
                            valorsolicitado=valorsolicitado+restoteste;
                        }
                    }
                    break;
                default:
                    system("clear");
                    printf("\n\nPor gentileza, digite uma opção valida.\n\n");
                    break;
            }
        }
        printf("\nAs notas que serão fornecidas:\n");
        nota50=valorsolicitado/50;
        if(nota50 != 0)    
            printf("\nR$ 50.00 - %d unidades",nota50);
        resto50=valorsolicitado%50;
        nota20=resto50/20;
        if(nota20 != 0)    
            printf("\nR$ 20.00 - %d unidades",nota20);
        resto20=resto50%20;
        nota10=resto20/10;
        if(nota10 != 0)    
            printf("\nR$ 10.00 - %d unidades",nota10);
        
        printf("\n\nConfirma o saque (1-Sim e 2-Não): ");
        scanf("%d",&saque);
        system("clear");
        prova = 1;
    }while(saque == 2);
    
    
	
	return 0;
}
