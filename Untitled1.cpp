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



#ifdef _WIN32
#define CLEAR_COMMAND "CLS"
#else
#define CLEAR_COMMAND "clear"
#endif



using namespace std;

void Exitprogram(){

    cout << "Choice not available " << endl;
    exit(0);


}

struct Utilizador {
    string nome;
    string senha;
};




vector<Utilizador> usuarios;



int op1;
string nomeLogin;





// Function to sign up
void Login() {


    system(CLEAR_COMMAND);
    int x = 0;
    while(x==0){

    string nomeUsuario, senha;



    cout << "Email: ";
    cin >> nomeUsuario;



    cout << "Senha: ";
    cin >> senha;




    for (const auto& usuario : usuarios) {
        if (usuario.nome == nomeUsuario && usuario.senha == senha) {
            cout << "seja Bem-Vindo(a) "<<nomeLogin<<"!!, Login Com Sucesso" << endl;
            system("PAUSE");
            ofstream fp;
            fp.open("dados.txt", ios_base::app); // append instead of overwrite
            fp <<nomeUsuario<<"\n"<<senha<<"\n"<<endl;
            x=1;
            return;
        }
    }



    cout << "Nome de usuário ou senha inválidos." << endl;
    system("PAUSE");

    }
}


void Signup() {
    system(CLEAR_COMMAND);



    string nomeUsuario, senha;



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
    usuarios.push_back(novoUsuario);



    cout << "Usuário registrado com sucesso!" << endl;
    system("PAUSE");

}
// Function to start the quiz
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
                cout << "Who was the first player to score 100 Premier League goals?\n";
                cout <<"a). Alan Shearer\nb). Thierry Henry\nc). Wayne Rooney\nd). Cristiano Ronaldo\n";
                cin>>respostafut;
                if(respostafut=='a'){

                cout <<"Correct\n";
                score=score+5;
                cout <<score<<"\n";
                }else{

                 cout <<"Incorrect\n";

                }

                cout <<"Which country won the first World Cup?\n";
                cout <<
a. England
b. Italy
c. Uruguay
d. Argentina
         }


    }
    else
    {
        Exitprogram();
    }



    // Display Score
    //cout << "Your score is " << score << "/1\n";




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
            while(true){
            cout << "3. Iniciar Jogo" << endl;
            cout << "4. Sair" << endl;
            cout << "Enter your choice: ";
            choice = 0;
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
        }else{

            Exitprogram();

        }


    }
    return 0;
}
