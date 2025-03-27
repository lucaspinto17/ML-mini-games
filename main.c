#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <locale.h> 
#include <string.h> 

	
#define numcaixas 5
#define numjogadores 7

int main()
{
	//VARIAVEIS DOS JOGOS
	
	//tipo INT = inteiras 	
	int escolha;
    int resultado;
	int resposta;
    int pontuacao = 0;
    int caixaEscolhida;
    int caixaComCobra;
    int jogoEscolhido;
    int caixaButao;
    int escolhaJogador;
    int opcao01;
	int turno; 
	int gousma1x = 1;
    int gousma2x = 1;
    int gousma1y = 1;
    int gousma2y = 1;
    int gousmaAttackedSelection;
    int gousmaAttackerSelection;
    int loop;
    int transfer;
    
    //tipo CHAR = Caracteres
    char selection;
	char personagem1[15];
	char personagem2[15];
 	typedef struct {
    int id;
    char nome[50];
    
	}
	
	
	//INSERÇÃO NO CONJUNTO
	//NOMES DO JOGO DA COBRA
	 Jogador;
	Jogador jogadores[numjogadores] = {
        {1, "Lucas"},
        {2, "Mario"},
        {3, "Girotto"},
        {4, "Casseb"},
        {5, "Poly"},
	  	{6, "Alessandra"},
		{7, "Renata"},  		
    };


	//MENU
	printf("\t\t ML MINI GAMES! \n\n");
    printf("Escolha 1 dos 3 jogos ou digite 0 para sair\n");
    printf("1- Pergunta e Resposta\n");
    printf("2- Cobra na caixa\n");
    printf("3- Gousmas War\n");
    printf("0- Sair\n\n");
    scanf("%d", &escolha);
		
    if (jogoEscolhido < 0 && jogoEscolhido >= 4) {
        printf("Escolha invalida! Por favor, escolha um numero entre 0 e 3.\n");
        return 1;
    }
    
    //CASO DE ESCOLHA JOGO 1
       if (escolha == 1) 
{
        printf("\tVoce escolheu o jogo de Perguntas e Respostas!\n");
	printf("Esse jogo consiste em voce acertar as respostas das perguntas.\n\n");
	
	// PERGUNTA N1
    printf("Pergunta 1: Qual e a capital do Brasil?\n");
    printf("1. Rio de Janeiro\n2. Sao Paulo\n3. Brasilia\n4. Salvador\n");
    printf("Sua resposta: ");
    scanf("%d", &resposta);

    if (resposta == 3) {
        printf("Resposta correta!\n");
        pontuacao++;
    } else {
        printf("Resposta errada! A resposta correta e Brasilia.\n");
    }

    // PERGUNTA N2
    printf("\nPergunta 2: Qual o melhor?\n");
    printf("1. Neymar \n2. Vini JR\n3. Rodrygo \n4. Raphinha\n");
    printf("Sua resposta: ");
    scanf("%d", &resposta);

    if (resposta == 1) {
        printf("Resposta correta!\n");
        pontuacao++;
    } else {
        printf("Se voce errou, reveja seus pensamentos! A resposta obvia e Neymar.\n");
    }

    // PERGUNTA N3
    printf("\nPergunta 3: Qual o maior time do Brasil?\n");
    printf("1. Corinthias\n2. Santos\n3. Flamengo\n4. Palmeiras\n");
    printf("Sua resposta: ");
    scanf("%d" , &resposta);
    if (resposta == 3) {
        printf("Resposta correta!\n");
        pontuacao++;
    } else {
        printf("Resposta errada! A resposta correta e Flamengo.\n");
    }
    // PERGUNTA N4
    printf("\nPergunta 4: Qual o nome do Cesupa de CC?\n");
    printf("1. Argo\n2. Largo\n3. Direito\n4. Engenharia\n");
    printf("Sua resposta: ");
    scanf("%d", &resposta);

    if (resposta == 1) {
        printf("Resposta correta!\n");
        pontuacao++;
    } else {
        printf("Resposta errada! A resposta correta e Argo.\n");
    }
    // PERGUNTA N5
    printf("\nPergunta 5: Qual o maior do Norte?\n");
    printf("1. Aguia\n2. Remo\n3. Paysandu\n4. Tuna\n");
    printf("Sua resposta: ");
    scanf("%d", &resposta);

    if (resposta == 3) {
        printf("Resposta correta!\n");
        pontuacao++;
    } else {
        printf("Resposta errada! A resposta correta e ,obviamente, Paysandu.\n");
    }

    // RESULTADO
    printf("\nVoce acertou %d de 5 perguntas!\n", pontuacao);

    if (pontuacao == 5) {
        printf("Parabens! Você acertou todas as perguntas!\n");
    } else if (pontuacao == 0) {
        printf("Voce nao acertou nenhuma pergunta. Tente novamente!\n");
    } else {
        printf("Voce fez bem! Continue tentando...\n");
    }
    
    } 
    
    
    			//JOGO DA COBRA NA CAIXA
	else if (escolha == 2) {
        printf("\tVoce escolheu o jogo Cobra na Caixa\n");
        printf("O jogo consiste em voce escolher uma caixa, ");
        printf(" caso apareca uma cobra voce perde e o outro jogador ganha, ");
        printf("se aparecer um  botao voce ganha e o outro perde, ");
        printf("os jogadores jogam ate encontrar uma das opcoes.\n\n");
        
	//ESCOLHA DO JOGADOR
			printf("Digite '2' para confirmar a escolha do jogo!\n");
    	   scanf("%d", &opcao01);

    if (opcao01 == 2) {
        

        // GERADOR DE NÚMEROS ALEATORIOS
        srand(time(NULL));
        turno = rand() % 2; 

        // ESCOLHA DO JOGADOR
        printf("Escolha 2 personagens:\n");
        printf("(1) Lucas\n");
        printf("(2) Mario\n");
        printf("(3) Girotto\n");
        printf("(4) Casseb\n");
        printf("(5) Renata\n");
        printf("(6) Poly\n");
        printf("(7) Alessandra\n");

		//LEITURA JOGADOR01
        printf("Jogador 1: ");
        scanf("%s", personagem1);  
        //LEITURA JOGADOR02
        printf("Jogador 2: ");
        scanf("%s", personagem2);  

        printf("Os personagens escolhidos foram %s e %s.\n", personagem1, personagem2);

        //LAÇO
        while (1) {
            //GERADOR ALEATORIO
            do {
                caixaButao = rand() % numcaixas + 1;
                caixaComCobra = rand() % numcaixas + 1;
                // GARANTIA DE CAIXAS DIFERENTES
            } while (caixaButao == caixaComCobra);
            
			  

            // JOGADOR ATUALloop = 1;
            printf("%s, escolha uma caixa de 1 a 5: ", turno == 0 ? personagem1 : personagem2);
			scanf("%d", &caixaEscolhida);

            // VERIFICAÇÃO DE ESCOLHA
            if (caixaEscolhida < 1 || caixaEscolhida > 5) {
                printf("Escolha invalida! Por favor, escolha um numero entre 1 e 5.\n");
                continue;
            }

            //VERIFICAÇÃO DA CAIXA
            if (caixaEscolhida == caixaComCobra) {
                printf("Voce achou a cobra! PERDEEEEU!\n");
                break;
            } else if (caixaEscolhida == caixaButao) {
                printf("Voce achou o botao! VAMOOOOOOO!\n");
                break;
            } else {
                printf("Caixa vazia. Tenta denovo.\n");
            }

            //TROCA DE TURNO
            turno = 1 - turno;
        }
    }

    return 0;
}

									//JOGO GOUSMAS WAR
        else if (escolha == 3) {
        	printf("\t\tVoce escolheu o jogo Gousmas War!\n");
        	printf("Cada jogador tem duas gousmas, cada uma comeca com 1 de furia, toda vez que voce");
        	printf(" ataca o inimigo, transfere a quantidadede poder da sua gousma para a do adversario");
        	printf(" e se ela ultrapassar 5 de furia ela morre!\n\n");
        	
 		//LAÇO DO JOGO
		while(loop = 1)
		{	
			
        	//VEZ DO JOGADOR 01
        //ATAQUE DO 01
        	printf("Jogador 01, selecione a gousma que voce quer usar para atacar: \n");
        	printf("gousma1 (digite 1) com %d de furia, ou gousma2 (digite 2) com %d de furia: \n", gousma1x, gousma2x);
        	scanf(" %d", &gousmaAttackerSelection);
        	
        //ESCOLHA DO 01 PARA ATACAR QUAL GOUSMA
        	printf("Agora, selecione a gousma que voce quer atacar (1 ou 2): \n");
        	scanf(" %d", &gousmaAttackedSelection);
        
        //TRANSFERENCIA DE FURIA DO 01 PARA 02
   		if (gousmaAttackerSelection == 1 && gousmaAttackedSelection == 1)
            gousma1y += gousma1x;
        
        	else if (gousmaAttackerSelection == 2 && gousmaAttackedSelection == 1)
            	gousma1y += gousma2x;
            
        		else if (gousmaAttackerSelection == 1 && gousmaAttackedSelection == 2)
  					gousma2y += gousma1x;
  				
        			else if (gousmaAttackerSelection == 2 && gousmaAttackedSelection == 2)
            			gousma2y += gousma2x;
        
        		//DERROTA OU CHANCE DE REVIVER DO JOGADOR 02
        //VERIFICA SE A GOUSMA DO 02 PASSOU O LIMETE E SE PODE SER REVIVIDA
        if (gousma1y > 5 && gousma2y > 1) {
            gousma1y = 0;
            do {
                printf("Jogador 02, sua gousma 1 foi derrotada, deseja transferir alguma quantidade de furia para ela ser revivida? (s/n)\n");
                scanf(" %c", &selection);
                if (selection == 's') {
                    printf("Digite o quanto deseja transferir: \n");
                    scanf(" %d", &transfer);
                    
                //VALIDA SE O VALOR DA OUTRA GOUSMA NÃO É O MESMO DO VALOR DE TRANSFERÊNCIA
                    if (transfer == gousma2y || transfer > gousma2y) {
                        printf("EHH! O valor que voce digitou nao pode ser igual ou maior ao nivel de furia da sua gousma atual.\n");
                        selection = 'z';
                        
                    } else if (selection == 'n') {
                        printf("AGOORA! O jogo vai continuar normalmente\n");
                        selection = 's';
                    }
                }
                
            } while (selection != 's');           
        } else if (gousma1y > 5 && gousma2y == 1) {
            printf("Jogador 02, sua gousma 1 foi derrotada, porem voce nao tem como reviver, ja que esta somente com 1 de furia na gousma2\n");
            gousma1y = 0;
        }
        
        //VERIFICA SE A GOUSMA DO 02 PASSOU O LIMETE E SE PODE SER REVIVIDA
        if (gousma1y > 1 && gousma2y > 5) {
            gousma2y = 0;
            
            do {
                printf("Jogador 02, sua gousma 2 foi derrotada, deseja transferir alguma quantidade de furia para ela ser revivida? (s/n)\n");
                scanf(" %c", &selection);
                
                if (selection == 's') {
                    printf("Digite o quanto deseja transferir: \n");
                    scanf(" %d", &transfer);
                    
                 // VALIDA SE O VALOR DA OUTRA GOUSMA NÃO É O MESMO DO VALOR DE TRANSFERÊNCIA DE FURIA
                    if (transfer == gousma1y || transfer > gousma1y) {
                        printf("EHH! O valor que voce digitou nao pode ser igual ou maior ao nivel de furia da sua gousma atual.\n");
                        selection = 'z';
                    } else if (selection == 'n') {
                        printf(" AGOOORA! O jogo vai continuar normalmente\n");
                        selection = 's';
                    }
                }
            } while (selection != 's');
        } else if (gousma2y > 5 && gousma1y == 1) {
            printf("Jogador 02, sua gousma 2 foi derrotada, porem voce nao tem como reviver, ja que esta somente com 1 de furia na gousma1\n");
            gousma2y = 0;
        }
        
        //CONDIÇÃO DE DERROTA JOGADOR 02
        if ((gousma1y == 0 && gousma2y == 0) || (gousma1y > 5 && gousma2y == 0) || (gousma1y == 0 && gousma2y > 5) || (gousma1y > 5 && gousma2y > 5)) {
            printf("O jogador 01 ganhou!\n");
            loop = 0;
        } else {
            		// VEZ DO JOGADOR 02
        //JOGADOR X ATACA A GOUSMA Y
            printf("Jogador 02, selecione a gousma que voce quer usar para atacar: \n");
            printf("gousma1 (digite 1) com %d de furia, ou gousma2 (digite 2) com %d de furia: \n", gousma1y, gousma2y);
            scanf(" %d", &gousmaAttackerSelection);
		//JOGADOR Y ATACA A GOUSMA X
            printf("Agora, selecione a gousma que voce quer atacar (1 ou 2): \n");
            scanf(" %d", &gousmaAttackedSelection);
            
        //TRANSFERENCIA DE FURIA DE 02 PARA 01
            if (gousmaAttackerSelection == 1 && gousmaAttackedSelection == 1)
                gousma1x += gousma1y;
            else if (gousmaAttackerSelection == 2 && gousmaAttackedSelection == 1)
                gousma1x += gousma2y;
            else if (gousmaAttackerSelection == 1 && gousmaAttackedSelection == 2)
                gousma2x += gousma1y;
            else if (gousmaAttackerSelection == 2 && gousmaAttackedSelection == 2)
                gousma2x += gousma2y;
        }
        
        		//DERROTA E CHANCE DE REVIVER DO 01
        //VERIFICA SE PASSOU DO LIMETE OU SE PODE SER REVIVIDO
        if (gousma1x > 5 && gousma2x > 1) {
            gousma1x = 0;
            do {
                printf("Jogador 01, sua gousma 1 foi derrotada, deseja transferir alguma quantidade de furia para ela ser revivida? (s/n)\n");
                scanf(" %c", &selection);
                if (selection == 's') {
                    printf("Digite o quanto deseja transferir: \n");
                    scanf(" %d", &transfer);
                //VALIDA SE O VALOR DA OUTRA GOUSMA NÃO É O MESMO DO VALOR DE TRANSFERÊNCIA DE FURIA
                    if (transfer == gousma2x || transfer > gousma2x) {
                        printf("EHH! O valor que voce digitou nao pode ser igual ou maior ao nivel de furia da sua gousma atual.\n");
                        selection = 'z';
                    } else if (selection == 'n') {
                        printf(" AGOOORA! O jogo vai continuar normalmente\n");
                        selection = 's';
                    }
                }
            } while (selection != 's');
        } else if (gousma1x > 5 && gousma2x == 1) {
            printf("Jogador 01, sua gousma 1 foi derrotada, mas voce nao tem como reviver, ja que voce tem somente 1 de furia na gousma2\n");
            gousma1x = 0;
        }
        
        //DERROTA E CHANCE DE REVIVER DO 01
        if (gousma1x > 1 && gousma2x > 5) {
            gousma2x = 0;
            do {
                printf("Jogador 01, sua gousma 2 foi derrotada, deseja transferir alguma quantidade de furia para ela ser revivida? (s/n)\n");
                scanf(" %c", &selection);
                if (selection == 's') {
                    printf("Digite o quanto deseja transferir: \n");
                    scanf(" %d", &transfer);
                // VALIDA SE O VALOR DA OUTRA GOUSMA NÃO É O MESMO DO VALOR DE TRANSFERÊNCIA
                    if (transfer == gousma1x || transfer > gousma1x) {
                        printf(" EHH! O valor que voce digitou nao pode ser igual ou maior ao nivel de furia da sua gousma atual.\n");
                        selection = 'z';
                    } else if (selection == 'n') {
                        printf(" AGOOORA! O jogo vai continuar\n");
                        selection = 's';
                    }
                }
            } while (selection != 's');
        } else if (gousma2x > 5 && gousma1x == 1) {
            printf("\nJogador 01, sua gousma 2 foi derrotada, porem voce nao tem como reviver, ja que esta somente com 1 de furia na gousma1\n");
            gousma2x = 0;
        }
        
        //VERIFICA SE PERDEU
        if ((gousma1x == 0 && gousma2x == 0) || (gousma1x > 5 && gousma2x == 0) || (gousma1x == 0 && gousma2x > 5) || (gousma1x > 5 && gousma2x > 5)) {
            printf("O jogador 02 ganhou!");
            loop = 0;
        }
    	 } 
		}
    
    	//ESCOLHA 'SAIR'
	else if(escolha == 0) {
		printf("Voce escolheu sair.\n");
        printf("Aperte 'Enter' para sair\n\n");
		return 0; 
    }
	}
