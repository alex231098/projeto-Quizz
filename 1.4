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
#define CLEAR_COMMAND "CLS"
#else
#define CLEAR_COMMAND "clear"
#endif



using namespace std;

string Perguntas[3]={"Em que ano o brasil perdeu por 7-1 na semi-final?","Quem é considerado o melhor jogador brasileiro de sempre?","Melhor marcador da Champions?"};

char Respostas[2]={'b','b'};
void Exitprogram(){

    cout << "Choice not available " << endl;
    exit(0);


}

struct Utilizador {
    string nome;
    string senha;
    string nomeLogin2;
    int pontuacao;
};




vector<Utilizador> usuarios;

string UltimoNome;
string UltimoSenha;


int op1;

void StartQuiz()
{
    // Variables
  //  int score = 0;
    int number1, number2;
    int answer;
    char response;



    // Begin Quiz
    cout << "Welcome to the math quiz!\n";
    cout << "Press 'y' to begin the quiz\n";
    cin >> response;



    if (response == 'y')
    {
        // Generate Random Numbers
        /*
        srand(time(NULL));
        number1 = rand() % 10;
        number2 = rand() % 10;



        // Query user for answer
        cout << "What is " << number1 << " + " << number2 << "?\n";
        cin >> answer;



        // Check answer
        if (answer == (number1 + number2))
        {
            cout << "Correct!\n";
            score++;

        }
        else
        {
            cout << "Incorrect\n";
        }
        */

        cout << "Escolha o tema:\n";
        cout << "1: futebol\n";
        cout << "2: geografia\n";
        cout << "3: matematica\n";
        int resposta;
         cin >> resposta;
         int score=0;
         if(resposta== 1){

                char respostafut;
                cout << Perguntas[0];
                cout <<"\na). 2010\nb). 2014\nc). 1822\nd). 2018\n";
                cin>>respostafut;
                if(respostafut==Respostas[0]){

                cout <<"Correct\n";
                score=score+5;
                cout <<score<<"\n";

                for (auto& usuario : usuarios) {
                if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        usuario.pontuacao = score;

                                                                    }
                                    }


                }else{

                 cout <<"Incorrect\n";

                }

         }


    }
    else
    {
        Exitprogram();
    }



    // Display Score
    //cout << "Your score is " << score << "/1\n";




}


// Function to sign up
void Login() {


    system(CLEAR_COMMAND);

    string nomeUsuario, senha;

    int x = 0;

    while(x==0){

    cout << "Email: ";
    cin >> nomeUsuario;



    cout << "Senha: ";
    cin >> senha;




    for (auto& usuario : usuarios) {
        if (usuario.nome == nomeUsuario && usuario.senha == senha) {
            cout << "seja Bem-Vindo!!, Login Com Sucesso" << endl;
            ofstream fp;
            fp.open("dados.txt", ios_base::app); // append instead of overwrite
            fp <<nomeUsuario<<"\n"<<senha<<"\n"<<endl;
            UltimoNome=nomeUsuario;
            UltimoSenha=senha;
            x=1;
            return;

                                                                    }
                                    }


    cout << "Nome de usuário ou senha inválidos." << endl;

    }

}

// TELA

void Tela(){

            while(true){

             for (auto& usuario : usuarios) {
                if (usuario.nome == UltimoNome && usuario.senha == UltimoSenha) {
                        cout << "Nome do Usuario: "<<usuario.nomeLogin2 << endl;
                         cout << "Pontuacao: "<<usuario.pontuacao << endl;

                                                                    }
                                    }


            cout << "3. Iniciar Jogo" << endl;
            cout << "4. Sair" << endl;
            cout << "Enter your choice: ";

            int choice = 0;

            cin >> choice;

             if (choice == 3){
                StartQuiz();

            }else{
                if (choice == 4){

                            break;
                    }
                Exitprogram();
                }
            }



}


void Signup() {
    system(CLEAR_COMMAND);



    string nomeUsuario, senha,nomeLogin;



    cout << "Digite um email novo de usuário: ";
    cin >> nomeUsuario;



    cout << "Digite uma senha: ";
    cin >> senha;



    cout << "Digite seu nome completo: ";
    cin.ignore();
    getline(cin, nomeLogin);







    for (const auto& usuario : usuarios ) {
        if (usuario.nome == nomeUsuario) {
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

}


int main()
{
    cout << "Welcome to the Quiz App" << endl;
setlocale(LC_ALL, "Portuguese");
    while (true)
    {
        cout << "1. Signup" << endl;
        cout << "2. Login" << endl;
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;



        if (choice == 1)
        {
            Signup();
        }
        else if (choice == 2)
        {
            Login();
            Tela();

        }else{

            Exitprogram();

        }


    }
    return 0;
}
