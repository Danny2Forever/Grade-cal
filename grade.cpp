#include <iostream>
using namespace std;
int main(){
    while (true)
    {
        int score;
        cout << "Input score = ";
        cin >> score ;

        if(score >= 80 and score <= 100){
            cout << "Your grade is 4" << endl;
        }else if (score >= 75 and score < 80)
        {
            cout << "Your grade is 3.5" << endl;
        }else if (score >= 70 and score < 75)
        {
            cout << "Your grade is 3" << endl;
        }else if (score >= 65 and score < 70)
        {
            cout << "Your grade is 2.5" << endl;
        }else if (score >= 60 and score < 65)
        {
            cout << "Your grade is 2" << endl;
        }else if (score >= 55 and score < 60)
        {
            cout << "Your grade is 1.5" << endl;
        }else if (score >= 50 and score < 55)
        {
            cout << "Your grade is 1" << endl;
        }else if (score >= 0 and score < 50)
        {
            cout << "Your grade is 0" << endl;
        }else
        {
            cout << "Input Error" << endl;
        }
    }
}