#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void print_array(int array[], int count)
{
    for(int i = 0; i < count; i++)
    {
        cout << array[i] << "\t";
    }
    cout << "\n";
}

void play_game()
{
    int guesses[100];
    int guess_count = 0;

    int random = rand() % 101;
    cout << random << endl;
    cout << "Make a guess: " << endl;
    while (true)
    {
        int guess;
        cin >> guess;
        
        guesses[guess_count++] = guess;
        
        if(guess == random)
        {
            cout << "You win!" << endl;
            break;
        } else if (guess < random)
        {
            cout << "Number too low" << endl;
        } else
        {
            cout << "Number too high" << endl;
        }
    }
    print_array(guesses, guess_count);

}

int main()
{
    srand(time(NULL));
    char choice;

    do
    {
        cout << "[y]. Play game\n[n]. Quit\n" <<  endl;
        cin >> choice;
        switch(choice)
        {
        case 'n':
            cout << "Thanks for nothing" << endl;
            return 0;
        case 'y':
            cout << "Yoh, let's play the game!" << endl;
            play_game();
            break;
        default:
            cout << "Pick either [y/n]" << endl;
            break;
    }

    } while (choice != 0);



    return 0;
}
