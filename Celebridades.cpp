#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
using namespace std;


int main(){
setlocale(LC_ALL,"");


//declarar variavel categorias
int categorias;
    
cout<<"Categorias\n\n";
cout<<"[1] Matematica\n";
cout<<"[2] Celebridades\n";
cout<<"[3] Geografia\n";
cout<<"[4] Musica\n";
cin >> categorias; //ler categoria escolhida

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


// NÍVEL FÁCIL
if(nivel == 1){
    //Pergunta 1 - Nível Fácil
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

    //Pergunta 2 - Nível Fácil
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

    //Pergunta 3 - Nível Fácil
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

    //Pergunta 4 - Nível Fácil
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

    //Pergunta 5 - Nível Fácil
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

    //Pergunta 6 - Nível Fácil
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

    //Pergunta 7 - Nível Fácil
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

    //Pergunta 8 - Nível Fácil
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

    //Pergunta 9 - Nível Fácil
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

    //Pergunta 10 - Nível Fácil
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
  

  // NÍVEL MÉDIO
if(nivel == 2){
    //Pergunta 1 - Nível Médio
    cout<<"Qual é o nome verdadeiro da cantora Lady Gaga?" << endl;
    cout<<"a) Katy Perry" <<endl;
    cout<<"b) Elizabeth Grant" <<endl;
    cout<<"c) Stefani Germanotta" <<endl;
    cout<<"d) Taylor Swift" <<endl;
    cin>> resultado;

     if(resultado == 'c'){  //declarar qual a resposta valida
        cout<<"Resposta Correta";
        total=total + 5;
    }else{
        cout<<"Resposta errada"<<endl;
        cout<<"A resposta correta é a opção c."<<endl;
        }

    //Pergunta 2 - Nível Médio
    cout<<"Qual ator interpretou o personagem Wolverine nos filmes da franquia X-Men?" << endl;
    cout<<"a) Hugh Jackman" <<endl;
    cout<<"b) Robert Downey Jr." <<endl;
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

    //Pergunta 3 - Nível Médio
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

    //Pergunta 4 - Nível Médio
    cout<<"Qual é o nome completo do ator conhecido como Leonardo DiCaprio?" << endl;
    cout<<"a) Leonardo Wilhelm DiCaprio" <<endl;
    cout<<"b) Leonardo Charles DiCaprio" <<endl;
    cout<<"c) Leonardo David DiCaprio" <<endl;
    cout<<"d) Leonardo Michael DiCaprio" <<endl;
    cin>> resultado;

     if(resultado == 'a'){  //declarar qual a resposta valida
        cout<<"Resposta Correta";
        total=total + 5;
    }else{
        cout<<"Resposta errada"<<endl;
        cout<<"A resposta correta é a opção a."<<endl;
        } 

    //Pergunta 5 - Nível Médio
    cout<<"Quem foi a primeira pessoa a alcançar 100 milhões de seguidores no Instagram?" << endl;
    cout<<"a) Kylie Jenner" <<endl;
    cout<<"b) Cristiano Ronaldo" <<endl;
    cout<<"c) Kim Kardashian" <<endl;
    cout<<"d) Selena Gomez" <<endl;
    cin>> resultado;

     if(resultado == 'd'){  //declarar qual a resposta valida
        cout<<"Resposta Correta";
        total=total + 5;
    }else{
        cout<<"Resposta errada"<<endl;
        cout<<"A resposta correta é a opção d." <<endl;
        } 

    //Pergunta 6 - Nível Médio
    cout<<"Quem é o ator mais jovem a receber um Oscar na categoria de Melhor Ator?" << endl;
    cout<<"a) Timothée Chalamet" <<endl;
    cout<<"b) Adrien Brody" <<endl;
    cout<<"c) Eddie Redmayne" <<endl;
    cout<<"d) Marlon Brando" <<endl;
    cin>> resultado;

     if(resultado == 'b'){  //declarar qual a resposta valida
        cout<<"Resposta Correta";
        total=total + 5;
    }else{
        cout<<"Resposta errada"<<endl;
        cout<<"A resposta correta é a opção b." <<endl;
        } 

    //Pergunta 7 - Nível Médio
    cout<<"Qual é o nome do ator que interpretou o personagem Tony Stark/Iron Man nos filmes da Marvel?Qual é o nome da atriz que interpretou a personagem Katniss Everdeen nos filmes de Jogos Vorazes?" << endl;
    cout<<"a) Jennifer Lawrence" <<endl;
    cout<<"b) Emma Stone" <<endl;
    cout<<"c) Shailene Woodley" <<endl;
    cout<<"d) Saoirse Ronan" <<endl;
    cin>> resultado;

     if(resultado == 'a'){  //declarar qual a resposta valida
        cout<<"Resposta Correta";
        total=total + 5;
    }else{
        cout<<"Resposta errada"<<endl;
        cout<<"A resposta correta é a opção a." <<endl;
        } 

    //Pergunta 8 - Nível Médio
    cout<<"Quem é o diretor do filme Clube da Luta?" << endl;
    cout<<"a) Christopher Nolan" <<endl;
    cout<<"b) David Fincher" <<endl;
    cout<<"c) Darren Aronofsky" <<endl;
    cout<<"d) Quentin Tarantino" <<endl;
    cin>> resultado;

     if(resultado == 'b'){  //declarar qual a resposta valida
        cout<<"Resposta Correta";
        total=total + 5;
    }else{
        cout<<"Resposta errada"<<endl;
        cout<<"A resposta correta é a opção b." <<endl;
        } 

    //Pergunta 9 - Nível Médio
    cout<<"Qual é o nome completo do ator conhecido como Morgan Freeman?" << endl;
    cout<<"a) Morgan Douglas Freeman" <<endl;
    cout<<"b) Morgan James Freeman" <<endl;
    cout<<"c) Morgan Porterfield Freeman" <<endl;
    cout<<"d) Morgan William Freeman" <<endl;
    cin>> resultado;

     if(resultado == 'c'){  //declarar qual a resposta valida
        cout<<"Resposta Correta";
        total=total + 5;
    }else{
        cout<<"Resposta errada"<<endl;
        cout<<"A resposta correta é a opção c." <<endl;
        } 

    //Pergunta 10 - Nível Médio
    cout<<"Qual atriz ganhou um Oscar por sua atuação no filme Cisne Negro?" << endl;
    cout<<"a) Emma Watson" <<endl;
    cout<<"b) Scarlett Johansson" <<endl;
    cout<<"c) Natalie Portman" <<endl;
    cout<<"d) Jennifer Lawrence" <<endl;
    cin>> resultado;

     if(resultado == 'c'){  //declarar qual a resposta valida
        cout<<"Resposta Correta";
        total=total + 5;
    }else{
        cout<<"Resposta errada"<<endl;
        cout<<"A resposta correta é a opção c." <<endl;
        } 
    
}


// NÍVEL DIFÍCIL
if(nivel == 3){
    //Pergunta 1 - Nível Difícil
    cout<<"Qual foi o primeiro filme em que Leonardo DiCaprio atuou ao lado de Martin Scorsese?" << endl;
    cout<<"a) O Aviador" <<endl;
    cout<<"b) Gangues de Nova York" <<endl;
    cout<<"c) Os Infiltrados" <<endl;
    cout<<"d) Ilha do Medo" <<endl;
    cin>> resultado;

     if(resultado == 'b'){  //declarar qual a resposta valida
        cout<<"Resposta Correta";
        total=total + 5;
    }else{
        cout<<"Resposta errada"<<endl;
        cout<<"A resposta correta é a opção b."<<endl;
        }

    //Pergunta 2 - Nível Difícil
    cout<<"Qual ator interpretou o personagem Hannibal Lecter no filme O Silêncio dos Inocentes?" << endl;
    cout<<"a) Anthony Hopkins" <<endl;
    cout<<"b) Mads Mikkelsen" <<endl;
    cout<<"c) Brian Cox" <<endl;
    cout<<"d) Hugh Dancy" <<endl;
    cin>> resultado;

     if(resultado == 'a'){  //declarar qual a resposta valida
        cout<<"Resposta Correta";
        total=total + 5;
    }else{
        cout<<"Resposta errada"<<endl;
        cout<<"A resposta correta é a opção a."<<endl;
        }

    //Pergunta 3 - Nível Difícil
    cout<<"Qual atriz ganhou um Oscar por sua atuação no filme Monster - Desejo Assassino?" << endl;
    cout<<"a) Meryl Streep" <<endl;
    cout<<"b) Nicole Kidman" <<endl;
    cout<<"c) Julianne Moore" <<endl;
    cout<<"d) Charlize Theron" <<endl;
    cin>> resultado;

     if(resultado == 'd'){  //declarar qual a resposta valida
        cout<<"Resposta Correta";
        total=total + 5;
    }else{
        cout<<"Resposta errada"<<endl;
        cout<<"A resposta correta é a opção d."<<endl;
        } 

    //Pergunta 4 - Nível Difícil
    cout<<"Qual é o nome da atriz que interpretou a personagem Lisbeth Salander na trilogia original sueca de filmes Millennium?" << endl;
    cout<<"a) Noomi Rapace" <<endl;
    cout<<"b) Rooney Mara" <<endl;
    cout<<"c) Alicia Vikander" <<endl;
    cout<<"d) Claire Foy" <<endl;
    cin>> resultado;

     if(resultado == 'a'){  //declarar qual a resposta valida
        cout<<"Resposta Correta";
        total=total + 5;
    }else{
        cout<<"Resposta errada"<<endl;
        cout<<"A resposta correta é a opção a."<<endl;
        } 

    //Pergunta 5 - Nível Difícil
    cout<<"Qual ator interpretou o personagem Rick Blaine no filme Casablanca?" << endl;
    cout<<"a) Marlon Brando" <<endl;
    cout<<"b) Clark Gable" <<endl;
    cout<<"c) Humphrey Bogart" <<endl;
    cout<<"d) James Stewart" <<endl;
    cin>> resultado;

     if(resultado == 'c'){  //declarar qual a resposta valida
        cout<<"Resposta Correta";
        total=total + 5;
    }else{
        cout<<"Resposta errada"<<endl;
        cout<<"A resposta correta é a opção c." <<endl;
        } 

    //Pergunta 6 - Nível Difícil
    cout<<"Qual é o nome completo da atriz conhecida como Audrey Hepburn?" << endl;
    cout<<"a) Audrey Jean Blythe" <<endl;
    cout<<"b) Audrey Harper Hudson" <<endl;
    cout<<"c) Audrey Penelope Hartman" <<endl;
    cout<<"d) Audrey Kathleen Ruston" <<endl;
    cin>> resultado;

     if(resultado == 'd'){  //declarar qual a resposta valida
        cout<<"Resposta Correta";
        total=total + 5;
    }else{
        cout<<"Resposta errada"<<endl;
        cout<<"A resposta correta é a opção d." <<endl;
        } 

    //Pergunta 7 - Nível Difícil
    cout<<"Quem dirigiu o filme Apocalypse Now?" << endl;
    cout<<"a) Stanley Kubrick" <<endl;
    cout<<"b) Francis Ford Coppola" <<endl;
    cout<<"c) Oliver Stone" <<endl;
    cout<<"d) Steven Spielberg" <<endl;
    cin>> resultado;

     if(resultado == 'b'){  //declarar qual a resposta valida
        cout<<"Resposta Correta";
        total=total + 5;
    }else{
        cout<<"Resposta errada"<<endl;
        cout<<"A resposta correta é a opção b." <<endl;
        } 

    //Pergunta 8 - Nível Difícil
    cout<<"Qual atriz interpretou a personagem Rachel em Blade Runner?" << endl;
    cout<<"a) Sigourney Weaver" <<endl;
    cout<<"b) Linda Hamilton" <<endl;
    cout<<"c) Daryl Hannah" <<endl;
    cout<<"d) Sean Young" <<endl;
    cin>> resultado;

     if(resultado == 'd'){  //declarar qual a resposta valida
        cout<<"Resposta Correta";
        total=total + 5;
    }else{
        cout<<"Resposta errada"<<endl;
        cout<<"A resposta correta é a opção d." <<endl;
        } 

    //Pergunta 9 - Nível Difícil
    cout<<"Qual ator interpretou o personagem Jordan Belfort no filme O Lobo de Wall Street?" << endl;
    cout<<"a) Christian Bale" <<endl;
    cout<<"b) Ryan Gosling" <<endl;
    cout<<"c) Leonardo DiCaprio" <<endl;
    cout<<"d) Matthew McConaughey" <<endl;
    cin>> resultado;

     if(resultado == 'c'){  //declarar qual a resposta valida
        cout<<"Resposta Correta";
        total=total + 5;
    }else{
        cout<<"Resposta errada"<<endl;
        cout<<"A resposta correta é a opção c." <<endl;
        } 

    //Pergunta 10 - Nível Difícil
    cout<<"Quem dirigiu o filme Gravidade?" << endl;
    cout<<"a) Alfonso Cuarón" <<endl;
    cout<<"b) Alejandro González Iñárritu" <<endl;
    cout<<"c) Guillermo del Toro" <<endl;
    cout<<"d) Pedro Almodóvar" <<endl;
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