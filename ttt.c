#include <stdio.h>
#include <stdlib.h>

char jogo[9];
char turno = 'x';
int emp;

char printJogo(){
				printf("\n%c | %c | %c \n%c | %c | %c \n%c | %c | %c \n", jogo[0],jogo[1],jogo[2],jogo[3],jogo[4],jogo[5],jogo[6],jogo[7],jogo[8]);
}

int checarVitoria() {
				int ok = 0;
				for (int ko = 0; ko < 9; ko++){
								if (jogo[ko] == '-') {
												ok = 1;
								}
				}
				if(ok == 0){
								return 1;
								printf("\nEmpate!");
								emp = 1;
				}
				if (jogo[0] == jogo[1] && jogo[1] == jogo[2] && jogo[1] != '-') {
								return 1;
				}
				if (jogo[3] == jogo[4] && jogo[4] == jogo[5] && jogo[4] != '-') {
								return 1;
				}
				if (jogo[6] == jogo[7] && jogo[7] == jogo[8] && jogo[7] != '-') {
								return 1;
				}
				if (jogo[0] == jogo[3] && jogo[3] == jogo[6] && jogo[3] != '-') {
								return 1;
				}
				if (jogo[1] == jogo[4] && jogo[4] == jogo[7] && jogo[4] != '-') {
								return 1;
				}
				if (jogo[2] == jogo[5] && jogo[5] == jogo[8] && jogo[5] != '-') {
								return 1;
				}
				if (jogo[0] == jogo[4] && jogo[4] == jogo[8] && jogo[4] != '-') {
								return 1;
				}
				if (jogo[6] == jogo[4] && jogo[4] == jogo[2] && jogo[4] != '-') {
								return 1;
				}
				return 0;
}

int main (void) {
				for (int i = 0; i < 9; i++) {
								jogo[i] = '-';
				}
				char awn;
				printf("1) Sigleplayer\n2) Multipayer\n\nEscolha: ");
				scanf("%c", &awn);
				switch (awn) {
								case'1':
				while (checarVitoria() != 1) {
								if (turno == 'x') {
												printJogo();
												int pos;
												printf("\nDigite: ", turno);
												scanf("%d", &pos);
												if (jogo[pos-1] != 'x' && jogo[pos-1] != 'o') {
															turno = 'o';
											    	jogo[pos-1] = 'x';
												} else {
																printf("Posiçao ja escolhida\n");
												}
								} else  {
												int r = rand() % 9;
												if (jogo[r] != 'x' && jogo[r] != 'o') {
															turno = 'x';
											    	jogo[r] = 'o';
												} 
								}
				}
				if (emp != 1) {	
				switch (turno) {
								case'x':
								    printJogo();
								    printf("\no é o vencedor");
												break;
								case'o':
								    printJogo();
								    printf("\nx é o vencedor");
				}
								break;
								}
								case'2':
				while (checarVitoria() != 1) {
								if (turno == 'x') {
												printJogo();
												int pos;
												printf("\nDigite (jogador %c): ", turno);
												scanf("%d", &pos);
												if (jogo[pos-1] != 'x' && jogo[pos-1] != 'o') {
															turno = 'o';
											           	jogo[pos-1] = 'x';
												} else {
																printf("Posiçao ja escolhida\n");
												}
								} else  {
												printJogo();
												int pos;
												printf("\nDigite (jogador %c): ", turno);
												scanf("%d", &pos);
												if (jogo[pos-1] != 'x' && jogo[pos-1] != 'o') {
															turno = 'x';
											           	jogo[pos-1] = 'o';
												} else {
																printf("Posiçao ja escolhida\n");
												}
								}
				}
				if (emp != 1) {
				switch (turno) {
								case'x':
								    printJogo();
								    printf("\no é o vencedor");
												break;
								case'o':
								    printJogo();
								    printf("\nx é o vencedor");
												break;
				}
				}
				}
}
