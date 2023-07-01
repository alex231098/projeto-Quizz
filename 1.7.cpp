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



struct perguntas {
    string pergunta;
    string respostaCerta;
    string respostaErrada1;
    string respostaErrada2;
    string respostaErrada3;
    int indiceRespostaCorreta;

    void mostrarPergunta(int& opcao) {
        string respostasAleatorias[4] = { respostaCerta, respostaErrada1, respostaErrada2, respostaErrada3 };

        unsigned seed = chrono::system_clock::now().time_since_epoch().count();
        shuffle(begin(respostasAleatorias), end(respostasAleatorias), default_random_engine(seed));

        cout << pergunta << endl;
        for (int i = 0; i < 4; i++) {
            cout << i + 1 << ". " << respostasAleatorias[i] << endl;
            if (respostasAleatorias[i] == respostaCerta) {
                indiceRespostaCorreta = i + 1;
            }
        }
        cout << "Escolha uma opção (1-4): ";
        cin >> opcao;
    }
};

struct Utilizador
{
    string nome;
    string senha;
    string nomeLogin2;
    int pontuacao;
};

vector<Utilizador> usuarios;
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
             << usuario.nomeLogin2 << "\n";
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
    SaveScores();
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

    string nomeUsuario, senha, nomeLogin;
    while (getline(file, nomeUsuario) && getline(file, senha) && getline(file, nomeLogin))
    {
        Utilizador usuario;
        usuario.nome = nomeUsuario;
        usuario.senha = senha;
        usuario.nomeLogin2 = nomeLogin;
        usuario.pontuacao = 0;
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
        cout << "1: Futebol" << endl;
        cout << "2: Geografia" << endl;
        cout << "3: Matemática" << endl;
        int resposta;
        cin >> resposta;


        if (resposta == 1)
        {
            perguntas questao1;
        questao1.pergunta = "Em que ano o Brasil perdeu por 7-1 na semifinal?";
        questao1.respostaCerta = "2014";
        questao1.respostaErrada1 = "2018";
        questao1.respostaErrada2 = "2022";
        questao1.respostaErrada3 = "2008";

        int opcao;
        questao1.mostrarPergunta(opcao);

        if (opcao == questao1.indiceRespostaCorreta) {
            cout << "Parabéns, está certo!";
            score = score + 5;

            for (auto &usuario : usuarios) {
                if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                    usuario.pontuacao = score;
                    break;
                }
            }
        }
        else {
            cout << "Resposta errada!";
            }
             perguntas questao2;
        questao2.pergunta = "Em que ano o Brasil perdeu por 7-1 na semifinal?";
        questao2.respostaCerta = "2014";
        questao2.respostaErrada1 = "2018";
        questao2.respostaErrada2 = "2022";
        questao2.respostaErrada3 = "2008";


        questao2.mostrarPergunta(opcao);

        if (opcao == questao2.indiceRespostaCorreta) {
            cout << "Parabéns, está certo!";
           score = score + 5;

            for (auto &usuario : usuarios) {
                if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                    usuario.pontuacao = score;
                    break;
                }
            }
        }
        else {
            cout << "Resposta errada!";
            }
             perguntas questao3;
        questao3.pergunta = "Em que ano o Brasil perdeu por 7-1 na semifinal?";
        questao3.respostaCerta = "2014";
        questao3.respostaErrada1 = "2018";
        questao3.respostaErrada2 = "2022";
        questao3.respostaErrada3 = "2008";


        questao3.mostrarPergunta(opcao);

        if (opcao == questao3.indiceRespostaCorreta) {
            cout << "Parabéns, está certo!";
           score = score + 5;

            for (auto &usuario : usuarios) {
                if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                    usuario.pontuacao = score;
                    break;
                }
            }
        }
        else {
            cout << "Resposta errada!";
            }
             perguntas questao4;
        questao4.pergunta = "Em que ano o Brasil perdeu por 7-1 na semifinal?";
        questao4.respostaCerta = "2014";
        questao4.respostaErrada1 = "2018";
        questao4.respostaErrada2 = "2022";
        questao4.respostaErrada3 = "2008";


        questao4.mostrarPergunta(opcao);

        if (opcao == questao4.indiceRespostaCorreta) {
            cout << "Parabéns, está certo!";
            score = score + 5;

            for (auto &usuario : usuarios) {
                if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                    usuario.pontuacao = score;
                    break;
                }
            }
        }
        else {
            cout << "Resposta errada!";
            }
             perguntas questao5;
        questao5.pergunta = "Em que ano o Brasil perdeu por 7-1 na semifinal?";
        questao5.respostaCerta = "2014";
        questao5.respostaErrada1 = "2018";
        questao5.respostaErrada2 = "2022";
        questao5.respostaErrada3 = "2008";


        questao5.mostrarPergunta(opcao);

        if (opcao == questao5.indiceRespostaCorreta) {
            cout << "Parabéns, está certo!";
           score = score + 5;

            for (auto &usuario : usuarios) {
                if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                    usuario.pontuacao = score;
                    break;
                }
            }
        }
        else {
            cout << "Resposta errada!";
            }
             perguntas questao6;
        questao6.pergunta = "Em que ano o Brasil perdeu por 7-1 na semifinal?";
        questao6.respostaCerta = "2014";
        questao6.respostaErrada1 = "2018";
        questao6.respostaErrada2 = "2022";
        questao6.respostaErrada3 = "2008";


        questao6.mostrarPergunta(opcao);

        if (opcao == questao6.indiceRespostaCorreta) {
            cout << "Parabéns, está certo!";
            score = score + 5;

            for (auto &usuario : usuarios) {
                if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                    usuario.pontuacao = score;
                    break;
                }
            }
        }
        else {
            cout << "Resposta errada!";
            }
             perguntas questao7;
        questao7.pergunta = "Em que ano o Brasil perdeu por 7-1 na semifinal?";
        questao7.respostaCerta = "2014";
        questao7.respostaErrada1 = "2018";
        questao7.respostaErrada2 = "2022";
        questao7.respostaErrada3 = "2008";


        questao7.mostrarPergunta(opcao);

        if (opcao == questao7.indiceRespostaCorreta) {
            cout << "Parabéns, está certo!";
            score = score + 5;

            for (auto &usuario : usuarios) {
                if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                    usuario.pontuacao = score;
                    break;
                }
            }
        }
        else {
            cout << "Resposta errada!";
            }
        }

        else if (resposta == 2)
        {
            perguntas questao1;
        questao1.pergunta = "Em que ano o Brasil perdeu por 7-1 na semifinal?";
        questao1.respostaCerta = "2014";
        questao1.respostaErrada1 = "2018";
        questao1.respostaErrada2 = "2022";
        questao1.respostaErrada3 = "2008";

        int opcao;
        questao1.mostrarPergunta(opcao);

        if (opcao == questao1.indiceRespostaCorreta) {
            cout << "Parabéns, está certo!";
            score = score + 5;

            for (auto &usuario : usuarios) {
                if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                    usuario.pontuacao = score;
                    break;
                }
            }
        }
        else {
            cout << "Resposta errada!";
            }
             perguntas questao2;
        questao2.pergunta = "Em que ano o Brasil perdeu por 7-1 na semifinal?";
        questao2.respostaCerta = "2014";
        questao2.respostaErrada1 = "2018";
        questao2.respostaErrada2 = "2022";
        questao2.respostaErrada3 = "2008";


        questao2.mostrarPergunta(opcao);

        if (opcao == questao2.indiceRespostaCorreta) {
            cout << "Parabéns, está certo!";
           score = score + 5;

            for (auto &usuario : usuarios) {
                if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                    usuario.pontuacao = score;
                    break;
                }
            }
        }
        else {
            cout << "Resposta errada!";
            }
             perguntas questao3;
        questao3.pergunta = "Em que ano o Brasil perdeu por 7-1 na semifinal?";
        questao3.respostaCerta = "2014";
        questao3.respostaErrada1 = "2018";
        questao3.respostaErrada2 = "2022";
        questao3.respostaErrada3 = "2008";


        questao3.mostrarPergunta(opcao);

        if (opcao == questao3.indiceRespostaCorreta) {
            cout << "Parabéns, está certo!";
           score = score + 5;

            for (auto &usuario : usuarios) {
                if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                    usuario.pontuacao = score;
                    break;
                }
            }
        }
        else {
            cout << "Resposta errada!";
            }
             perguntas questao4;
        questao4.pergunta = "Em que ano o Brasil perdeu por 7-1 na semifinal?";
        questao4.respostaCerta = "2014";
        questao4.respostaErrada1 = "2018";
        questao4.respostaErrada2 = "2022";
        questao4.respostaErrada3 = "2008";


        questao4.mostrarPergunta(opcao);

        if (opcao == questao4.indiceRespostaCorreta) {
            cout << "Parabéns, está certo!";
            score = score + 5;

            for (auto &usuario : usuarios) {
                if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                    usuario.pontuacao = score;
                    break;
                }
            }
        }
        else {
            cout << "Resposta errada!";
            }
             perguntas questao5;
        questao5.pergunta = "Em que ano o Brasil perdeu por 7-1 na semifinal?";
        questao5.respostaCerta = "2014";
        questao5.respostaErrada1 = "2018";
        questao5.respostaErrada2 = "2022";
        questao5.respostaErrada3 = "2008";


        questao5.mostrarPergunta(opcao);

        if (opcao == questao5.indiceRespostaCorreta) {
            cout << "Parabéns, está certo!";
           score = score + 5;

            for (auto &usuario : usuarios) {
                if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                    usuario.pontuacao = score;
                    break;
                }
            }
        }
        else {
            cout << "Resposta errada!";
            }
             perguntas questao6;
        questao6.pergunta = "Em que ano o Brasil perdeu por 7-1 na semifinal?";
        questao6.respostaCerta = "2014";
        questao6.respostaErrada1 = "2018";
        questao6.respostaErrada2 = "2022";
        questao6.respostaErrada3 = "2008";


        questao6.mostrarPergunta(opcao);

        if (opcao == questao6.indiceRespostaCorreta) {
            cout << "Parabéns, está certo!";
            score = score + 5;

            for (auto &usuario : usuarios) {
                if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                    usuario.pontuacao = score;
                    break;
                }
            }
        }
        else {
            cout << "Resposta errada!";
            }
             perguntas questao7;
        questao7.pergunta = "Em que ano o Brasil perdeu por 7-1 na semifinal?";
        questao7.respostaCerta = "2014";
        questao7.respostaErrada1 = "2018";
        questao7.respostaErrada2 = "2022";
        questao7.respostaErrada3 = "2008";


        questao7.mostrarPergunta(opcao);

        if (opcao == questao7.indiceRespostaCorreta) {
            cout << "Parabéns, está certo!";
            score = score + 5;

            for (auto &usuario : usuarios) {
                if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                    usuario.pontuacao = score;
                    break;
                }
            }
        }
        else {
            cout << "Resposta errada!";
            }
        }

        else if (resposta == 3)
        {
            perguntas questao1;
        questao1.pergunta = "Em que ano o Brasil perdeu por 7-1 na semifinal?";
        questao1.respostaCerta = "2014";
        questao1.respostaErrada1 = "2018";
        questao1.respostaErrada2 = "2022";
        questao1.respostaErrada3 = "2008";

        int opcao;
        questao1.mostrarPergunta(opcao);

        if (opcao == questao1.indiceRespostaCorreta) {
            cout << "Parabéns, está certo!";
            score = score + 5;

            for (auto &usuario : usuarios) {
                if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                    usuario.pontuacao = score;
                    break;
                }
            }
        }
        else {
            cout << "Resposta errada!";
            }
             perguntas questao2;
        questao2.pergunta = "Em que ano o Brasil perdeu por 7-1 na semifinal?";
        questao2.respostaCerta = "2014";
        questao2.respostaErrada1 = "2018";
        questao2.respostaErrada2 = "2022";
        questao2.respostaErrada3 = "2008";


        questao2.mostrarPergunta(opcao);

        if (opcao == questao2.indiceRespostaCorreta) {
            cout << "Parabéns, está certo!";
           score = score + 5;

            for (auto &usuario : usuarios) {
                if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                    usuario.pontuacao = score;
                    break;
                }
            }
        }
        else {
            cout << "Resposta errada!";
            }
             perguntas questao3;
        questao3.pergunta = "Em que ano o Brasil perdeu por 7-1 na semifinal?";
        questao3.respostaCerta = "2014";
        questao3.respostaErrada1 = "2018";
        questao3.respostaErrada2 = "2022";
        questao3.respostaErrada3 = "2008";


        questao3.mostrarPergunta(opcao);

        if (opcao == questao3.indiceRespostaCorreta) {
            cout << "Parabéns, está certo!";
           score = score + 5;

            for (auto &usuario : usuarios) {
                if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                    usuario.pontuacao = score;
                    break;
                }
            }
        }
        else {
            cout << "Resposta errada!";
            }
             perguntas questao4;
        questao4.pergunta = "Em que ano o Brasil perdeu por 7-1 na semifinal?";
        questao4.respostaCerta = "2014";
        questao4.respostaErrada1 = "2018";
        questao4.respostaErrada2 = "2022";
        questao4.respostaErrada3 = "2008";


        questao4.mostrarPergunta(opcao);

        if (opcao == questao4.indiceRespostaCorreta) {
            cout << "Parabéns, está certo!";
            score = score + 5;

            for (auto &usuario : usuarios) {
                if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                    usuario.pontuacao = score;
                    break;
                }
            }
        }
        else {
            cout << "Resposta errada!";
            }
             perguntas questao5;
        questao5.pergunta = "Em que ano o Brasil perdeu por 7-1 na semifinal?";
        questao5.respostaCerta = "2014";
        questao5.respostaErrada1 = "2018";
        questao5.respostaErrada2 = "2022";
        questao5.respostaErrada3 = "2008";


        questao5.mostrarPergunta(opcao);

        if (opcao == questao5.indiceRespostaCorreta) {
            cout << "Parabéns, está certo!";
           score = score + 5;

            for (auto &usuario : usuarios) {
                if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                    usuario.pontuacao = score;
                    break;
                }
            }
        }
        else {
            cout << "Resposta errada!";
            }
             perguntas questao6;
        questao6.pergunta = "Em que ano o Brasil perdeu por 7-1 na semifinal?";
        questao6.respostaCerta = "2014";
        questao6.respostaErrada1 = "2018";
        questao6.respostaErrada2 = "2022";
        questao6.respostaErrada3 = "2008";


        questao6.mostrarPergunta(opcao);

        if (opcao == questao6.indiceRespostaCorreta) {
            cout << "Parabéns, está certo!";
            score = score + 5;

            for (auto &usuario : usuarios) {
                if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                    usuario.pontuacao = score;
                    break;
                }
            }
        }
        else {
            cout << "Resposta errada!";
            }
             perguntas questao7;
        questao7.pergunta = "Em que ano o Brasil perdeu por 7-1 na semifinal?";
        questao7.respostaCerta = "2014";
        questao7.respostaErrada1 = "2018";
        questao7.respostaErrada2 = "2022";
        questao7.respostaErrada3 = "2008";


        questao7.mostrarPergunta(opcao);

        if (opcao == questao7.indiceRespostaCorreta) {
            cout << "Parabéns, está certo!";
            score = score + 5;

            for (auto &usuario : usuarios) {
                if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                    usuario.pontuacao = score;
                    break;
                }
            }
        }
        else {
            cout << "Resposta errada!";
            }
        }



        cout << "Score: " << score << endl;}

void StartQuiz() {

    char response;

    cout << "Welcome to the math quiz!" << endl;
    cout << "Press 'y' to begin the quiz" << endl;
    cin >> response;
     if (response == 'y')
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

        cout << "3. Iniciar Jogo" << endl;
        cout << "4. Sair" << endl;
        cout << "Enter your choice: ";

        int choice = 0;
        cin >> choice;

        if (choice == 3)
        {
            StartQuiz();
        }
        else
        {
            if (choice == 4)
            {
                break;
            }
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

    string nomeUsuario, senha, nomeLogin;

    cout << "Digite um email novo de usuário: ";
    cin >> nomeUsuario;

    cout << "Digite uma senha: ";
    senha = GetPassword();

    cout << "Digite seu nome completo: ";
    cin.ignore();
    getline(cin, nomeLogin);

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
    novoUsuario.pontuacao = 0;
    usuarios.push_back(novoUsuario);

    cout << "Usuário registrado com sucesso!" << endl;
    system("PAUSE");

    // Save the updated accounts to the file
    SaveAccounts();
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    cout << "Welcome to the Quiz App" << endl;

    // Load existing accounts from the file
    LoadAccounts();
    LoadScores();
    while (true)
    {
        cout << "1. Signup" << endl;
        cout << "2. Login" << endl;
        cout << "3. Apagar Utilizador" << endl;
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
        else
        {
            Exitprogram();
        }
    }

    return 0;
}
