#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  srand(time(NULL));
  
  int playAgain = 1;
  
  while (playAgain == 1) {
    printf("------------------------------------------------\n");
    printf("    PEDRA, PAPEL, TESOURA, LAGARTO OU SPOCK\n");
    printf("------------------------------------------------\n\n");
    
    printf("A partida será disputada em uma melhor de cinco contra o computador, o primeiro a fazer 3 pontos vence.\n");
    
    int round = 1;
    int playerPoints = 0;
    int computerPoints = 0;
    
    while (playerPoints < 3 && computerPoints < 3) {
      printf("\nRodada %d\n", round);
      
      if (playerPoints > 0 || computerPoints > 0) {
        printf("\nPontuação do Jogador: %d\n", playerPoints);
        printf("Pontuação do Computador: %d\n", computerPoints);
      }
      int playerOption = 0;
      
      printf("\nSelecione uma opção: \n");
      printf("1. Pedra\n");
      printf("2. Papel\n");
      printf("3. Tesoura\n");
      printf("4. Lagarto\n");
      printf("5. Spock\n\n");
      
      scanf("%d", &playerOption);
      
      if(playerOption < 1 || playerOption > 5) {
        printf("\nPor favor, digite uma opção válida.\n");
        printf("\n--------------------------------\n");
        continue;
      }
      
      int computerOption = (rand() % 5) + 1;
      
      if (computerOption == 1) {
        printf("\nComputador jogou pedra.\n");
      }
      
      if (computerOption == 2) {
        printf("\nComputador jogou papel.\n");
      }
      
      if (computerOption == 3) {
        printf("\nComputador jogou tesoura.\n");
      }
      
      if (computerOption == 4) {
        printf("\nComputador jogou lagarto.\n");
      }
      
      if (computerOption == 5) {
        printf("\nComputador jogou spock.\n");
      }
      
      if (playerOption == 1 && computerOption == 2) {
        printf("\nComputador venceu a rodada.\n");
        computerPoints++;
      }
      
      if (playerOption == 1 && computerOption == 3) {
        printf("\nJogador venceu a rodada.\n");
        playerPoints++;
      }
      
      if (playerOption == 1 && computerOption == 4) {
        printf("\nJogador venceu a rodada.\n");
        playerPoints++;
      }
      
      if (playerOption == 1 && computerOption == 5) {
        printf("\nComputador venceu a rodada.\n");
        computerPoints++;
      }
      
      if (playerOption == 2 && computerOption == 1) {
        printf("\nJogador venceu a rodada.\n");
        playerPoints++;
      }
      
      if (playerOption == 2 && computerOption == 3) {
        printf("\nComputador venceu a rodada.\n");
        computerPoints++;
      }
      
      if (playerOption == 2 && computerOption == 4) {
        printf("\nComputador venceu a rodada.\n");
        computerPoints++;
      }
      
      if (playerOption == 2 && computerOption == 5) {
        printf("\nJogador venceu a rodada.\n");
        playerPoints++;
      }
      
      if (playerOption == 3 && computerOption == 1) {
        printf("\nComputador venceu a rodada.\n");
        computerPoints++;
      }
      
      if (playerOption == 3 && computerOption == 2) {
        printf("\nJogador venceu a rodada.\n");
        playerPoints++;
      }
      
      if (playerOption == 3 && computerOption == 4) {
        printf("\nJogador venceu a rodada.\n");
        playerPoints++;
      }
      
      if (playerOption == 3 && computerOption == 5) {
        printf("\nComputador venceu a rodada.\n");
        computerPoints++;
      }
      
      if (playerOption == 4 && computerOption == 1) {
        printf("\nComputador venceu a rodada.\n");
        computerPoints++;
      }
      
      if (playerOption == 4 && computerOption == 2) {
        printf("\nJogador venceu a rodada.\n");
        playerPoints++;
      }
      
      if (playerOption == 4 && computerOption == 3) {
        printf("\nComputador venceu a rodada.\n");
        computerPoints++;
      }
      
      if (playerOption == 4 && computerOption == 5) {
        printf("\nJogador venceu a rodada.\n");
        playerPoints++;
      }
      
      if (playerOption == 5 && computerOption == 1) {
        printf("\nJogador venceu a rodada.\n");
        playerPoints++;
      }
      
      if (playerOption == 5 && computerOption == 2) {
        printf("\nComputador venceu a rodada.\n");
        computerPoints++;
      }
      
      if (playerOption == 5 && computerOption == 3) {
        printf("\nJogador venceu a rodada.\n");
        playerPoints++;
      }
      
      if (playerOption == 5 && computerOption == 4) {
        printf("\nComputador venceu a rodada.\n");
        computerPoints++;
      }
      
      if(playerOption == computerOption) {
        printf("\nEmpate. Rodada não contabilizada, jogue novamente.\n");
      } else {
        round++;
      }
      
      printf("\n--------------------------------\n");
      sleep(1);
    }
    
    printf("\nPontuação do Jogador: %d\n", playerPoints);
    printf("Pontuação do Computador: %d\n\n", computerPoints);
    
    if (playerPoints > computerPoints) {
      printf("Jogador venceu o jogo!\n");
    } else {
      printf("Computador venceu o jogo!\n");
    }
    
    printf("\nDeseja jogar novamente? Se sim, digite 1\n");
    scanf("%d", &playAgain);
  }
}

