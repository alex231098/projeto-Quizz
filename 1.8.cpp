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
string PerguntasGeo[15] = {
        "\nQual o menor País do mundo ? \nA) Vaticano\nB) Canadá\nC) Malta\nD) São Marino\n",
        "\nQual o Maior País do mundo ?\nA) Brasil\nB) India\nC) Russia\nD) Alemanha\n",
        "\nQual é a capital do Canadá? \nA) new York\nB) Brasilia\nC) Paris\nD) Ottawa\n",
        "\nQual é o rio mais longo do mundo? \nA) Amazonas\nB) Nilo\nC) Ganges\nD) Congo\n",
        "\nQual é a capital de Malta? \nA) Valletta \nB) Kiev\nC) Berlim\nD) Budapeste\n",
        "\nQual a capital do Brasil ? \nA) São Paulo\nB) Rio de Janeiro\nC) Curitiba\nD) Brasilia\n",
        "\nQuantos Distritos Há em Portugal ? \nA) 15\nB) 18\nC) 16\nD) 19\n",
        "\nQue país tem mais ilhas na Europa? \nA) Cabo Verde\nB) Espanha\nC) Portugal\nD) Suécia\n",
        "\nQuantos estados há no Brasil ? \nA) 22\nB) 25\nC) 28\nD) 27\n",
        "\nQual a capital de Portugal? \nA) Lisboa\nB) Benfica\nC) Aveiro\nD) Madri\n",
        "\nBraga, Faro e Guimarães são ? \nA) pontos turísticos da região Nordeste do Brasil\nB) cidades de Portugal\nC) conhecidos geógrafos brasileiros\nD) monumentos famosos localizados em Lima, no Peru\n",
        "\nO maior oceano da Terra é o? \na) Oceano Pacífico\nB) Oceano Atlântico\nC) Oceano Índico\nD) Oceano Glacial Antártico\n",
        "\nQual é aproximadamente a população do estado de São Paulo? \nA) 5 milhões\nB) 10 milhões\nC) 12 milhões\nD) 28 milhões\n",
        "\nAcapulco é uma ?\na) ilha do Caribe\nB) cidade mexicana\nC capital europeia \nD) região de Tóquio, no Japão\n",
        "\nO rio Paraná passa por três países, que são:\na) Argentina, Brasil e Paraguai\nB) Brasil, Uruguai e Paraguai\nC) Inglaterra, Espanha e França\nD) Brasil, Uruguai e Chile\n"
    };


string PerguntasHist[15] = {
"\nNo início do século 20, aconteceram grandes eventos com alcance e impacto mundial. Um deles foi a Primeira Guerra. Você sabe dizer em qual período ela aconteceu?\na) 1912 a 1917\nb) 1910 a 1918\nc) 1914 a 1918\nd) 1911 a 1916\n",
"\nQual é o ano do início da construção da Muralha da China?\na) 220 A.C.\nb) 180 A.C.\nc) 10 D.C.\nd) 100 D.C.\n",
"\nA biblioteca de Alexandria foi uma das mais significativas e célebres bibliotecas e um dos maiores centros de produção do conhecimento na Antiguidade. Infelizmente ela foi perdida durante um incêndio, sabe dizer em que ano?\na) 50 D.C.\nb) 48 A.C.\nc) 100 A.C.\nd) 30 D.C.\n",
"\nRecentemente a Netflix lançou uma série sobre uma famosa rainha egípcia, uma produção considerada polêmica devido a maneira como essa rainha foi apresentada. Essa rainha já foi interpretada por Elizabeth Taylor em 1963. Qual o nome dessa rainha?\na) Nefertiti\nb) Rainha Elizabeth II\nc) Chica da Silva\nd) Cleópatra\n",
"\nNapoleão Bonaparte foi um militar que teve um desempenho elevado dentro do exército, chegando a se tornar o Imperador da França. Qual seria o nome da guerra que removeu a família real francesa de Luiz XVI do trono?\na) Revolução Francesa (1792 até 1802)\nb) Guerra dos Canudos (1893)\nc) Guerra dos Emus (1932)\nd) Guerra do cão que fugiu (1925)\n",
"\nA frase 'Que comam brioche' é atribuída a antiga rainha francesa e dizem que essa frase pegou muito mal entre os súditos (alimentando o sentimento de insatisfação com a realeza francesa). Sabe dizer quem disse?\na) Margaret Thatcher\nb) Yoko Ono\nc) Greta Thunberg\nd) Maria Antonieta\n",
"\nA pessoa mais nova a ser laureada com um prémio nobel foi uma ativista paquistanesa, Malala Yousafzai. Infelizmente ela sofreu um atentado à sua vida por dar voz a um tema importante em seu país. Qual seria o tema pelo qual a ativista luta?\na) A declaração de guerra aos gatos pretos durante a idade média\nb) Ordenar que o cavalo Incitatus se tornasse um padre\nc) Direitos civis das mulheres\nd) Permissão para visitar a Disney\n",
"\nEm 1916, um navio espanhol naufragou em Ilhabela, no litoral norte de São Paulo, e deixou 477 mortos. O naufrágio é comparado ao do Titanic - a maior tragédia marítima brasileira. Vamos listar alguns navios, como se chama?\na) Darth\nb) Aymoré\nc) Ocean Gate\nd) Príncipe de Astúrias\n",
"\nExiste um corsário que aterrorizou as águas do litoral brasileiro, dizem até que ele deixou um tesouro escondido em Ilhabela durante uma de suas fugas, após saquear a Vila de Santos e São Vicente. Qual o nome do corsário inglês que também era pirata undercover?\na) Thomas Cavendish\nb) Kylian Mbappé\nc) Marcelo Rebelo\nd) Donald Trump\n",
"\nGone with the Wind (E o Vento Levou) é um filme americano feito em 1939 que retrata um período importante dos Estados Unidos, a luta travada em Estados do Norte contra estados sulistas pela libertação dos escravos. Qual é o nome dessa guerra?\na) Guerra que durou 335 anos\nb) Guerra de Secessão\nc) Guerra do Barril\nd) Guerra do Futebol\n",
"\nTalvez a mais conhecida das prisões insulares localizada em São Francisco, a Ilha de Alcatraz possui um famoso presídio que já abrigou um famoso gangster. Qual seria o nome do gangster e também contrabandista que foi enviado para lá em 1934?\na) Al Capone\nb) Il Bidone\nc) Clinton Eastwood\nd) Neymar Jr\n",
"\nSentinela do Norte é uma das ilhas do arquipélago das Andamão, na baía de Bengala, e é considerado um local proibido para turismo (o povo nativo não gosta muito de visitas), porém, é sabido que existe um explorador que conseguiu pisar os pés na ilha. Qual seria o seu nome e o período em que isso aconteceu?\na) Maurice Vidal Portman no século XIX\nb) Dom Afonso Henriques, em 1128\nc) Xanana Gusmão, 1967\nd) Getúlio Vargas, 1945\n",
"\nEm XXXX, o presidente dos Estados Unidos, George Washington, organizou um concurso para projetar a casa presidencial. Em que ano isso aconteceu?\na) 1945\nb) 1792\nc) 1546\nd) 2001\n",
"\nQual o nome do acordo assinado entre Espanha e Portugal, assinado em 7 de junho de 1424?\na) Pacto germano-soviético\nb) Tratado de Madri\nc) Tratado de Tordesilhas\nd) Acordo de Jules Rimet\n",
"\nA Inglaterra já foi lar de uma rainha portuguesa, a mesma que trouxe a tradição de tomar chá para o reinado. Qual era o seu nome?\na) Teresa Cristina das Duas Sicílias\nb) Princesa Isabel, a Redentora\nc) Barbara Tinoco\nd) Catarina de Bragança\n"
};



struct Utilizador
{
    string nome;
    string senha;
    string nomeLogin2;
    string perguntaSeguranca;
    string respostaSeguranca;
    int pontuacao;
};

vector<Utilizador> usuarios;


void DisplayLeaderboard() {
    // Sort the players based on their scores in descending order
    sort(usuarios.begin(), usuarios.end(), [](const Utilizador &a, const Utilizador &b) {
        return a.pontuacao > b.pontuacao;
    });

    cout << "\nTabela de Líderes:\n";
    for (const auto &usuario : usuarios) {
        cout << usuario.nomeLogin2 << " - Pontuação: " << usuario.pontuacao << endl;
    }
}


void SaveAccounts()
{
    ofstream file("accounts.txt");
    if (!file)
    {
        cout << "Error opening accounts file." << endl;
        return;
    }

    for (const auto &usuario : usuarios)
    {
        file << usuario.nome << "\n"
             << usuario.senha << "\n"
             << usuario.nomeLogin2 << "\n"
             << usuario.perguntaSeguranca << "\n"
             << usuario.respostaSeguranca << "\n";
    }

    file.close();
}
void DeleteUser()
{
    string username;
    cout << "Diga o Utilizador que pretende apagar: ";
    cin >> username;

    bool userFound = false;
    for (auto it = usuarios.begin(); it != usuarios.end(); ++it)
    {
        if (it->nome == username)
        {
            usuarios.erase(it);
            userFound = true;
            break;
        }
    }

    if (userFound)
    {
        cout << "Utilizador eliminado com sucesso." << endl;
        SaveAccounts(); // Save the updated accounts to the file
    }
    else
    {
        cout << "User not found." << endl;
    }
}
void ResetScores()
{
    for (auto &usuario : usuarios)
    {
        usuario.pontuacao = 0;
    }
}

void LoadScores()
{
    ifstream scoreFile("scores.txt");
    if (!scoreFile)
    {
        cout << "No score data found." << endl;
        return;
    }

    string nomeUsuario;
    int pontuacao;
    while (scoreFile >> nomeUsuario >> pontuacao)
    {
        for (auto &usuario : usuarios)
        {
            if (usuario.nome == nomeUsuario)
            {
                usuario.pontuacao = pontuacao;
                break;
            }
        }
    }

    scoreFile.close();
}
void SaveScores()
{
    ofstream scoreFile("scores.txt");
    if (!scoreFile)
    {
        cout << "Error opening scores file." << endl;
        return;
    }

    for (const auto &usuario : usuarios)
    {
        scoreFile << usuario.nome << " " << usuario.pontuacao << endl;
    }

    scoreFile.close();
}

void Exitprogram()
{

    cout << "Escolha não atribuida" << endl;
    exit(0);
}

void LoadAccounts()
{
    ifstream file("accounts.txt");
    if (!file)
    {
        cout << "Sem dados criados" << endl;
        return;
    }

    string nomeUsuario, senha, nomeLogin,perguntaSeguranca,respostaSeguranca;
    while (getline(file, nomeUsuario) && getline(file, senha) && getline(file, nomeLogin)&& getline(file, perguntaSeguranca)&& getline(file, respostaSeguranca))
    {
        Utilizador usuario;
        usuario.nome = nomeUsuario;
        usuario.senha = senha;
        usuario.nomeLogin2 = nomeLogin;
        usuario.pontuacao = 0;
        usuario.perguntaSeguranca = perguntaSeguranca;
        usuario.respostaSeguranca = respostaSeguranca;
        usuarios.push_back(usuario);
    }

    file.close();
}


#ifdef _WIN32
string GetPassword()
{
    string password;
    char c;

    while ((c = _getch()) != '\r')
    {
        if (c == '\b')
        {
            if (!password.empty())
            {
                cout << "\b \b";
                password.pop_back();
            }
        }
        else
        {
            password.push_back(c);
            cout << "*";
        }
    }

    cout << endl;
    return password;
}
#else

string GetPassword()
{
    string password;
    termios oldSettings, newSettings;
    tcgetattr(STDIN_FILENO, &oldSettings);
    newSettings = oldSettings;
    newSettings.c_lflag &= ~ECHO;
    tcsetattr(STDIN_FILENO, TCSANOW, &newSettings);

    getline(cin, password);

    tcsetattr(STDIN_FILENO, TCSANOW, &oldSettings);
    return password;
}
#endif
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

        for (int i = 0; i < 10; i++) {
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
            string respostafinal = PerguntasGeo[rand() % 15];
            cout << respostafinal;
            cin >> respostafut;

            if (respostafinal == PerguntasGeo[0] && respostafut == 'a') {
                cout << "Parabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else if (respostafinal == PerguntasGeo[1] && respostafut == 'c') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else if (respostafinal == PerguntasGeo[2] && respostafut == 'd') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else if (respostafinal == PerguntasGeo[3] && respostafut == 'b') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else if (respostafinal == PerguntasGeo[4] && respostafut == 'a') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else if (respostafinal == PerguntasGeo[5] && respostafut == 'd') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else if (respostafinal == PerguntasGeo[6] && respostafut == 'c') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else if (respostafinal == PerguntasGeo[7] && respostafut == 'd') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else if (respostafinal == PerguntasGeo[8] && respostafut == 'd') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else if (respostafinal == PerguntasGeo[9] && respostafut == 'a') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else if (respostafinal == PerguntasGeo[10] && respostafut == 'b') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else if (respostafinal == PerguntasGeo[11] && respostafut == 'a') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else if (respostafinal == PerguntasGeo[12] && respostafut == 'c') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else if (respostafinal == PerguntasGeo[13] && respostafut == 'b') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else if (respostafinal == PerguntasGeo[14] && respostafut == 'a') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            }
            else {
                cout << "\nResposta errada!";
            }
        }
    }

         else if (resposta == 3) {

        srand(time(NULL));

        for (int i = 0; i < 10; i++) {
            string respostafinal = PerguntasHist[rand() % 15];
            cout << respostafinal;
            cin >> respostafut;

            if (respostafinal == PerguntasHist[0] && respostafut == 'c') {
                cout << "Parabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else if (respostafinal == PerguntasHist[1] && respostafut == 'a') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            } else if (respostafinal == PerguntasHist[2] && respostafut == 'b') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
                } else if (respostafinal == PerguntasHist[3] && respostafut == 'd') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
                } else if (respostafinal == PerguntasHist[4] && respostafut == 'a') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
                } else if (respostafinal == PerguntasHist[5] && respostafut == 'd') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
                } else if (respostafinal == PerguntasHist[6] && respostafut == 'c') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
                } else if (respostafinal == PerguntasHist[7] && respostafut == 'd') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
                } else if (respostafinal == PerguntasHist[8] && respostafut == 'a') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
                }else if (respostafinal == PerguntasHist[9] && respostafut == 'b') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
                }else if (respostafinal == PerguntasHist[10] && respostafut == 'a') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
                }else if (respostafinal == PerguntasHist[11] && respostafut == 'a') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
                }else if (respostafinal == PerguntasHist[12] && respostafut == 'b') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
                }else if (respostafinal == PerguntasHist[13] && respostafut == 'c') {
                cout << "\nParabéns, está certo!";
                score += 5;

                for (auto& usuario : usuarios) {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;
                        break;
                    }
                }
                } else if (respostafinal == PerguntasHist[14] && respostafut == 'd') {
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

void StartQuiz() {

    char response;

    cout << "Seja Bem Vindo(a) ao Quizz" << endl;
    cout << "Presssione 1 para jogar" << endl;
    cin >> response;
     if (response == '1')
    {
       tema();
    }
    else {
        Exitprogram();
    }
}

void Tela()
{
    while (true)
    {
        for (auto &usuario : usuarios)
        {
            if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha)
            {
                cout << "Nome do Usuário: " << usuario.nomeLogin2 << endl;
                cout << "Pontuação: " << usuario.pontuacao << endl;
            }
        }

       cout << "1. Iniciar Jogo" << endl;
        cout << "2. Sair" << endl;  // Adjust the option numbers accordingly

        cout << "Enter your choice: ";
        int choice = 0;
        cin >> choice;

        if (choice == 1)
        {
            StartQuiz();
        }

        else if (choice == 2)
        {
            break;
        }
        else
        {
            Exitprogram();
        }
    }
}

void Login()
{
    system(CLEAR_COMMAND);

    string nomeUsuario, senha;
    int x = 0;

    while (x == 0)
    {
        cout << "Email: ";
        cin >> nomeUsuario;
        cout << "Senha: ";
        senha = GetPassword();

        for (auto &usuario : usuarios)
        {
            if (usuario.nome == nomeUsuario && usuario.senha == senha)
            {
                cout << "Seja bem-vindo! Login realizado com sucesso" << endl;
                UltimoNome = nomeUsuario;
                UltimoSenha = senha;
                x = 1;
                Tela();
                return;
            }
        }

        cout << "Nome de usuário ou senha inválidos." << endl;
        return;
    }
}

void Signup()
{
    system(CLEAR_COMMAND);

    string nomeUsuario, senha, nomeLogin, perguntaSeguranca, respostaSeguranca;

    cout << "Digite um email novo de usuário: ";
    cin >> nomeUsuario;

    cout << "Digite uma senha: ";
    senha = GetPassword();

    cout << "Digite seu nome completo: ";
    cin.ignore();
    getline(cin, nomeLogin);

    cout << "Digite uma pergunta de segurança: ";
    getline(cin, perguntaSeguranca);

    cout << "Digite a resposta da pergunta de segurança: ";
    getline(cin, respostaSeguranca);

    for (const auto &usuario : usuarios)
    {
        if (usuario.nome == nomeUsuario)
        {
            cout << "Nome de usuário já está em uso. Tente novamente." << endl;
            system("PAUSE");
            return;
        }
    }

    Utilizador novoUsuario;
    novoUsuario.nome = nomeUsuario;
    novoUsuario.senha = senha;
    novoUsuario.nomeLogin2 = nomeLogin;
    novoUsuario.perguntaSeguranca = perguntaSeguranca;
    novoUsuario.respostaSeguranca = respostaSeguranca;
    novoUsuario.pontuacao = 0;
    usuarios.push_back(novoUsuario);

    SaveAccounts(); // Save the updated accounts to the file

    cout << "Cadastro realizado com sucesso!" << endl;
    system("PAUSE");
}


void RecoverPassword()
{
    cout << "Digite o email do usuário para recuperar a senha: ";
    string nomeUsuario;
    cin >> nomeUsuario;

    Utilizador* usuario = nullptr;
    for (auto& user : usuarios)
    {
        if (user.nome == nomeUsuario)
        {
            usuario = &user;
            break;
        }
    }

    if (usuario)
    {
        cout << "Pergunta de segurança: " << usuario->perguntaSeguranca << endl;
        cout << "Digite a resposta de segurança: ";
        string resposta;
        cin.ignore();
        getline(cin, resposta);

        if (resposta == usuario->respostaSeguranca)
        {
            cout << "Resposta correta! Digite a nova senha: ";
            string novaSenha = GetPassword();
            usuario->senha = novaSenha;
            cout << "Senha alterada com sucesso!" << endl;
            SaveAccounts(); // Save the updated accounts to the file
        }
        else
        {
            cout << "Resposta incorreta. Não é possível recuperar a senha." << endl;
        }
    }
    else
    {
        cout << "Usuário não encontrado. Não é possível recuperar a senha." << endl;
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    cout << "Sejam Bem Vindos ao Quiz App" << endl;

    // Load existing accounts from the file
    LoadAccounts();
    LoadScores();
    while (true)
    {
        cout << "\n1. Signup" << endl;
        cout << "2. Login" << endl;
        cout << "3. Apagar Utilizador" << endl;
        cout << "4. Tabela de Líderes" << endl;
        cout << "5. Reset de pontuações" << endl;  // Option to reset scores
        cout << "6. Recuperar senha" << endl;
        cout << "Escolha um numero: ";
        int choice;
        cin >> choice;

        if (choice == 1)
        {
            Signup();
        }
        else if (choice == 2)
        {
            Login();
        }
        else if (choice == 3) // Handle the new option
        {
            DeleteUser();
            SaveAccounts();
        }
        else if (choice == 4) // Handle the new option
        {
            DisplayLeaderboard();
        }
        else if (choice == 5)
        {
            ResetScores();  // Call the function to reset scores
            cout << "Pontuações Apagadas com sucesso." << endl;
            SaveScores();  // Save the updated scores to the file
        }
        else if (choice == 6)
        {
            RecoverPassword();
        }
        else
        {
            Exitprogram();
        }
    }

    return 0;
}
