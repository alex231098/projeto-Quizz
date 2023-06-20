#include <iostream>
#include <string>

using namespace std;

int main()
{
    int score = 0;

    // Question 1
    string q1Answer;
    cout << "Q1) What is the capital of France?\n";
    cout << "A) Madrid\nB) Paris\nC) Rome\nD) London\n\n";
    cin >> q1Answer;

    if (q1Answer == "B" || q1Answer == "b")
    {
        score++;
    }

    // Question 2
    string q2Answer;
    cout << "\nQ2) What is the capital of Germany?\n";
    cout << "A) Madrid\nB) Paris\nC) Rome\nD) Berlin\n\n";
    cin >> q2Answer;

    if (q2Answer == "D" || q2Answer == "d")
    {
        score++;
    }

    // Question 3
    string q3Answer;
    cout << "\nQ3) What is the capital of Italy?\n";
    cout << "A) Madrid\nB) Paris\nC) Rome\nD) London\n\n";
    cin >> q3Answer;

    if (q3Answer == "C" || q3Answer == "c")
    {
        score++;
    }

    // Question 4
    string q4Answer;
    cout << "\nQ4) What is the capital of Spain?\n";
    cout << "A) Madrid\nB) Paris\nC) Rome\nD) London\n\n";
    cin >> q4Answer;

    if (q4Answer == "A" || q4Answer == "a")
    {
        score++;
    }

    // Question 5
    string q5Answer;
    cout << "\nQ5) What is the capital of the United Kingdom?\n";
    cout << "A) Madrid\nB) Paris\nC) Rome\nD) London\n\n";
    cin >> q5Answer;

    if (q5Answer == "D" || q5Answer == "d")
    {
        score++;
    }

    // Question 6
    string q6Answer;
    cout << "\nQ6) What is the capital of Norway?\n";
    cout << "A) Oslo\nB) Stavanger\nC) Bergen\nD) Trondheim\n\n";
    cin >> q6Answer;

    if (q6Answer == "A" || q6Answer == "a")
    {
        score++;
    }

    // Question 7
    string q7Answer;
    cout << "\nQ7) What is the capital of Sweden?\n";
    cout << "A) Stockholm\nB) Malmo\nC) Gothenburg\nD) Uppsala\n\n";
    cin >> q7Answer;

    if (q7Answer == "A" || q7Answer == "a")
    {
        score++;
    }

    // Question 8
    string q8Answer;
    cout << "\nQ8) What is the capital of Denmark?\n";
    cout << "A) Copenhagen\nB) Aarhus\nC) Odense\nD) Aalborg\n\n";
    cin >> q8Answer;

    if (q8Answer == "A" || q8Answer == "a")
    {
        score++;
    }

    // Question 9
    string q9Answer;
    cout << "\nQ9) What is the capital of Finland?\n";
    cout << "A) Helsinki\nB) Turku\nC) Tampere\nD) Kuopio\n\n";
    cin >> q9Answer;

    if (q9Answer == "A" || q9Answer == "a")
    {
        score++;
    }

    // Question 10
    string q10Answer;
    cout << "\nQ10) What is the capital of Iceland?\n";
    cout << "A) Reykjavik\nB) Akureyri\nC) Hafnarfjörður\nD) Kópavogur\n\n";
    cin >> q10Answer;

    if (q10Answer == "A" || q10Answer == "a")
    {
        score++;
    }

    cout << "\nYour final score is " << score << "/10\n";

    return 0;
}
