#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <map>
#include <locale.h>
#include <vector>
#include <stdio.h>
#include <fstream>
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <ctime>
#include <algorithm>
#include <random>
#include <chrono>

#ifdef _WIN32
#include <conio.h>
#define CLEAR_COMMAND "CLS"
#else
#include <termios.h>
#define CLEAR_COMMAND "clear"
#endif

using namespace std;
string UltimoNome;
string UltimoSenha;

string PerguntasCelebs[15] = {
    "\nQual é o nome completo do ator conhecido como Tom Cruise?\n\na) Thomas Cruise Mapother IV\nb) Tom Christopher Cruise\nc) Thomas Cruise Spielberg\nd) Tom Richard Cruise\n",
    "\nQual atriz ganhou um Oscar por sua atuação no filme La La Land?\n\na) Emma Watson\nb) Emma Thompson\nc) Emma Roberts\nd) Emma Stone\n",
    "\nQual é o nome do ator que interpretou o personagem Wolverine nos filmes da franquia X-Men?\n\na) Hugh Jackman\nb) Robert Downey Jr\nc) Chris Hemsworth\nd) Tom Hiddleston\n",
    "\nQuem é o diretor do filme Pulp Fiction?\n\na) Steven Spielberg\nb) Martin Scorsese\nc) Quentin Tarantino\nd) Christopher Nolan\n",
    "\nQual é o nome da cantora conhecida por suas perucas coloridas e hits como Tik Tok?\n\na) Katy Perry\nb) Kesha\nc) Ariana Grande\nd) Taylor Swift\n",
    "\nQual destes atores venceu numa discussão com a mulher?\n\na) Tom Cruise\nb) Tom Hanks\nc) Johnny Depp\nd) Will Smith\n",
    "\nQual é o nome do ator que interpretou o personagem Tony Stark/Iron Man nos filmes da Marvel?\n\na) Chris Evans\nb) Chris Pratt\nc) Chris Hemsworth\nd) Robert Downey Jr\n",
    "\nQuem é a atriz que interpretou a Mulher-Maravilha nos filmes da DC Comics?\n\na) Margot Robbie\nb) Gal Gadot\nc) Scarlett Johansson\nd) Jennifer Lawrence\n",
    "\nQual é o nome do cantor conhecido por suas músicas Shape of You e Thinking Out Loud?\n\na) Justin Bieber\nb) Shawn Mendes\nc) Ed Sheeran\nd) Bruno Mars\n",
    "\nQual ator interpretou o personagem Joker no filme The Dark Knight?\n\na) Heath Ledger\nb) Joaquin Phoenix\nc) Jared Leto\nd) Jack Nicholson\n",
    "\nQuem é o ator mais jovem a receber um Oscar na categoria de Melhor Ator?\n\na) Timothée Chalamet\nb) Adrien Brody\nc) Eddie Redmayne\nd) Marlon Brando\n",
    "\nQual atriz ganhou um Oscar por sua atuação no filme Cisne Negro?\n\na) Emma Watson\nb) Scarlett Johansson\nc) Jennifer Lawrence\nd) Natalie Portman\n",
    "\nQual ator interpretou o personagem Hannibal Lecter no filme O Silêncio dos Inocentes?\n\na) Anthony Hopkinse\nb) Mads Mikkelsen\nc) Brian Cox\nd) Hugh Dancy\n",
    "\nQual atriz ganhou um Oscar por sua atuação no filme Monster - Desejo Assassino?\n\na) Meryl Streep\nb) Nicole Kidma\nc) Julianne Moore\nd) Charlize Theron\n",
    "\nQual ator interpretou o personagem Rick Blaine no filme Casablanca?\n\na) Marlon Brando\nb) Clark Gable\nc) Humphrey Bogart\nd) James Stewart\n",

};
string PerguntasGeo[3] = {
    "\nEm que ano o Brasil perdeu por 7-1 na semi-final?\n\na) 2010\nb) 2014\nc) 1822\nd) 2018\n",
    "\nQuem é considerado o melhor jogador brasileiro de todos os tempos?",
    "\nQuem é o maior artilheiro da Liga dos Campeões?"
};
string PerguntasHist[3] = {
    "\nEm que ano o Brasil perdeu por 7-1 na semi-final?\n\na) 2010\nb) 2014\nc) 1822\nd) 2018\n",
    "\nQuem é considerado o melhor jogador brasileiro de todos os tempos?",
    "\nQuem é o maior artilheiro da Liga dos Campeões?"
};

void tema() {
        int score = 0;
        cout << "Escolha o tema:" << endl;
        cout << "1: Celebridades" << endl;
        cout << "2: Geografia" << endl;
        cout << "3: História" << endl;
        int resposta;
        cin >> resposta;
        char respostafut;

         if (resposta == 1) {

        srand(time(NULL));

        for (int i = 0; i < 15; i++) {
            string respostafinal = PerguntasCelebs[rand() % 15];
            cout << respostafinal;
            cin >> respostafut;

            if (respostafinal == PerguntasCelebs[0] && respostafut == 'a') {
                cout << "Parabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else if (respostafinal == PerguntasCelebs[1] && respostafut == 'd') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else if (respostafinal == PerguntasCelebs[2] && respostafut == 'a') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else if (respostafinal == PerguntasCelebs[3] && respostafut == 'c') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else if (respostafinal == PerguntasCelebs[4] && respostafut == 'b') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else if (respostafinal == PerguntasCelebs[5] && respostafut == 'c') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else if (respostafinal == PerguntasCelebs[6] && respostafut == 'd') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else if (respostafinal == PerguntasCelebs[7] && respostafut == 'b') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else if (respostafinal == PerguntasCelebs[8] && respostafut == 'b') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else if (respostafinal == PerguntasCelebs[9] && respostafut == 'a') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else if (respostafinal == PerguntasCelebs[10] && respostafut == 'b') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else if (respostafinal == PerguntasCelebs[11] && respostafut == 'c') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else if (respostafinal == PerguntasCelebs[12] && respostafut == 'a') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else if (respostafinal == PerguntasCelebs[13] && respostafut == 'd') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else if (respostafinal == PerguntasCelebs[14] && respostafut == 'c') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else {
                cout << "\nResposta errada!";
            }
        }

        }

        else if (resposta == 2) {

        srand(time(NULL));

        for (int i = 0; i < 10; i++) {
            string respostafinal = PerguntasGeo[rand() % 3];
            cout << respostafinal;
            cin >> respostafut;

            if (respostafinal == PerguntasGeo[0] && respostafut == 'b') {
                cout << "Parabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else if (respostafinal == PerguntasGeo[1] && respostafut == 'd') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else if (respostafinal == PerguntasGeo[2] && respostafut == 'a') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else {
                cout << "\nResposta errada!";
            }
        }
    }

         else if (resposta == 3) {

        srand(time(NULL));

        for (int i = 0; i < 10; i++) {
            string respostafinal = PerguntasHist[rand() % 3];
            cout << respostafinal;
            cin >> respostafut;

            if (respostafinal == PerguntasHist[0] && respostafut == 'b') {
                cout << "Parabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else if (respostafinal == PerguntasHist[1] && respostafut == 'd') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else if (respostafinal == PerguntasHist[2] && respostafut == 'a') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else {
                cout << "\nResposta errada!";
            }
        }
    }



        cout << "Pontuação: " << score << endl;
        SaveScores();
         }