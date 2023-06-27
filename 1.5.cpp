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

string Perguntas[3] = {
    "Em que ano o Brasil perdeu por 7-1 na semifinal?",
    "Quem é considerado o melhor jogador brasileiro de todos os tempos?",
    "Quem é o maior artilheiro da Champions League?"
};

char Respostas[3] = {'b', 'a', 'c'};

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

void StartQuiz()
{
    int score = 0;
    char response;

    cout << "Welcome to the math quiz!" << endl;
    cout << "Press 'y' to begin the quiz" << endl;
    cin >> response;

    if (response == 'y')
    {
        cout << "Escolha o tema:" << endl;
        cout << "1: Futebol" << endl;
        cout << "2: Geografia" << endl;
        cout << "3: Matemática" << endl;
        int resposta;
        cin >> resposta;

        if (resposta == 1)
        {
            char respostafut;
            cout << Perguntas[0] << endl;
            cout << "a) 2010\nb) 2014\nc) 1822\nd) 2018" << endl;
            cin >> respostafut;
            if (respostafut == Respostas[0])
            {
                cout << "Correct" << endl;
                score = score + 5;
                cout << "Score: " << score << endl;

                for (auto &usuario : usuarios)
                {
                    if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha)
                    {
                        usuario.pontuacao = score;
                        break;
                    }
                }
            }
            else
            {
                cout << "Incorrect" << endl;
            }
        }
    }
    else
    {
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
