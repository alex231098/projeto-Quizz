#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
using namespace std;


int main(){
setlocale(LC_ALL,"");


//declarar variavel categorias e ler categoria escolhida
int categorias;
    
cout<<"Categorias\n\n";
cout<<"[1] Matematica\n";
cout<<"[2] Celebridades\n";
cout<<"[3] Geografia\n";
cout<<"[4] Musica\n";
cin >> categorias;

   switch(categorias){
    case 1:
        cout<<"Matemática" << endl;
        getch();
        break;
    case 2:
        cout<<"Celebridades" << endl;
        getch();
        break;
    case 3:
        cout<<"Geografia" << endl;
        getch();
        break;
    case 4:
        cout<<"Música" << endl;
        getch();
        break;
   default:
        cout<<"Valor inválido, por favor volte a tentar!" << endl ;
        getch();
        break;
   }

//declarar a variavel nivel e ler variavel escolhida
int nivel;

cout<<"Escolhe o nivel que queres jogar!!\n\n";
cout<<"[1] Nivel Facil" "      ";
cout<<"[2] Nivel Medio" "      ";
cout<<"[3] Nivel Dificil" << endl;
cin >> nivel;

        int total = 0;
        char resultado;  

if(nivel == 1){
    //Pergunta 1
    cout<<"Qual é o nome completo do ator conhecido como Tom Cruise?" << endl;
    cout<<"a) Thomas Cruise Mapother IV" <<endl;
    cout<<"b) Tom Christopher Cruise" <<endl;
    cout<<"c) Thomas Cruise Spielberg" <<endl;
    cout<<"d) Tom Richard Cruise" <<endl;
    cin>> resultado;

     if(resultado == 'a'){  //declarar qual a resposta valida
        cout<<"Resposta Correta";
        total=total + 5;
    }else{
        cout<<"Resposta errada"<<endl;
        cout<<"A resposta correta é a opção a."<<endl;
        }

    //Pergunta 2
    cout<<"Qual atriz ganhou um Oscar por sua atuação no filme La La Land?" << endl;
    cout<<"a) Emma Watson" <<endl;
    cout<<"b) Emma Thompson" <<endl;
    cout<<"c) Emma Roberts" <<endl;
    cout<<"d) Emma Stone" <<endl;
    cin>> resultado;

     if(resultado == 'd'){  //declarar qual a resposta valida
        cout<<"Resposta Correta";
        total=total + 5;
    }else{
        cout<<"Resposta errada"<<endl;
        cout<<"A resposta correta é a opção d."<<endl;
        }

    //Pergunta 3
    cout<<"Qual é o nome do ator que interpretou o personagem Wolverine nos filmes da franquia X-Men?" << endl;
    cout<<"a) Hugh Jackman" <<endl;
    cout<<"b) Robert Downey Jr" <<endl;
    cout<<"c) Chris Hemsworth" <<endl;
    cout<<"d) Tom Hiddleston" <<endl;
    cin>> resultado;

     if(resultado == 'a'){  //declarar qual a resposta valida
        cout<<"Resposta Correta";
        total=total + 5;
    }else{
        cout<<"Resposta errada"<<endl;
        cout<<"A resposta correta é a opção a."<<endl;
        } 

    //Pergunta 4
    cout<<"Quem é o diretor do filme Pulp Fiction?" << endl;
    cout<<"a) Steven Spielberg" <<endl;
    cout<<"b) Martin Scorsese" <<endl;
    cout<<"c) Quentin Tarantino" <<endl;
    cout<<"d) Christopher Nolan" <<endl;
    cin>> resultado;

     if(resultado == 'c'){  //declarar qual a resposta valida
        cout<<"Resposta Correta";
        total=total + 5;
    }else{
        cout<<"Resposta errada"<<endl;
        cout<<"A resposta correta é a opção c."<<endl;
        } 

    //Pergunta 5
    cout<<"Qual é o nome da cantora conhecida por suas perucas coloridas e hits como Tik Tok?" << endl;
    cout<<"a) Katy Perry" <<endl;
    cout<<"b) Kesha" <<endl;
    cout<<"c) Ariana Grande" <<endl;
    cout<<"d) Taylor Swift" <<endl;
    cin>> resultado;

     if(resultado == 'b'){  //declarar qual a resposta valida
        cout<<"Resposta Correta";
        total=total + 5;
    }else{
        cout<<"Resposta errada"<<endl;
        cout<<"A resposta correta é a opção b." <<endl;
        } 

    //Pergunta 6
    cout<<"Qual destes atores venceu numa discussão com a mulher?" << endl;
    cout<<"a) Tom Cruise" <<endl;
    cout<<"b) Tom Hanks" <<endl;
    cout<<"c) Johnny depp" <<endl;
    cout<<"d) Will Smith" <<endl;
    cin>> resultado;

     if(resultado == 'c'){  //declarar qual a resposta valida
        cout<<"Resposta Correta";
        total=total + 5;
    }else{
        cout<<"Resposta errada"<<endl;
        cout<<"A resposta correta é a opção c." <<endl;
        } 

    //Pergunta 7
    cout<<"Qual é o nome do ator que interpretou o personagem Tony Stark/Iron Man nos filmes da Marvel?" << endl;
    cout<<"a) Chris Evans" <<endl;
    cout<<"b) Chris Pratt" <<endl;
    cout<<"c) Chris Hemsworth" <<endl;
    cout<<"d) Robert Downey Jr" <<endl;
    cin>> resultado;

     if(resultado == 'd'){  //declarar qual a resposta valida
        cout<<"Resposta Correta";
        total=total + 5;
    }else{
        cout<<"Resposta errada"<<endl;
        cout<<"A resposta correta é a opção d." <<endl;
        } 

    //Pergunta 8
    cout<<"Quem é a atriz que interpretou a Mulher-Maravilha nos filmes da DC Comics?" << endl;
    cout<<"a) Margot Robbie" <<endl;
    cout<<"b) Gal Gadot" <<endl;
    cout<<"c) Scarlett Johansson" <<endl;
    cout<<"d) Jennifer Lawrence" <<endl;
    cin>> resultado;

     if(resultado == 'b'){  //declarar qual a resposta valida
        cout<<"Resposta Correta";
        total=total + 5;
    }else{
        cout<<"Resposta errada"<<endl;
        cout<<"A resposta correta é a opção b." <<endl;
        } 

    //Pergunta 9
    cout<<"Qual é o nome do cantor conhecido por suas músicas Shape of You e Thinking Out Loud?" << endl;
    cout<<"a) Justin Bieber" <<endl;
    cout<<"b) Shawn Mendes" <<endl;
    cout<<"c) Ed Sheeran" <<endl;
    cout<<"d) Bruno Mars" <<endl;
    cin>> resultado;

     if(resultado == 'b'){  //declarar qual a resposta valida
        cout<<"Resposta Correta";
        total=total + 5;
    }else{
        cout<<"Resposta errada"<<endl;
        cout<<"A resposta correta é a opção b." <<endl;
        } 

    //Pergunta 10
    cout<<"Qual ator interpretou o personagem Joker no filme The Dark Knight?" << endl;
    cout<<"a) Heath Ledger" <<endl;
    cout<<"b) Joaquin Phoenix" <<endl;
    cout<<"c) Jared Leto" <<endl;
    cout<<"d) Jack Nicholson" <<endl;
    cin>> resultado;

     if(resultado == 'a'){  //declarar qual a resposta valida
        cout<<"Resposta Correta";
        total=total + 5;
    }else{
        cout<<"Resposta errada"<<endl;
        cout<<"A resposta correta é a opção a." <<endl;
        } 
    
}
  

    return 0;
}