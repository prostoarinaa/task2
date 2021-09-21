/*
 Задача #3: Cимвол «@» в тексте это BACKSPACE . Написать функцию, возвращающую строку в ее чистом виде. При разработке алгоритма учесть какие проверки необходимы для валидного удаление символов.
 Example: сварка@@@@@лоб@ну@  ->> слон

*/

#include <iostream>
#include <vector>

using namespace std;
class Phrase {
public:
    string OldPhrase;
    string NewPhrase;

    string ClearPhrase1(string OldPhrase)
    {
        vector <char> New = {};
        for (int i = 0; i < OldPhrase.length(); i++) {
            if (OldPhrase[i] != 'q')
                New.push_back(OldPhrase[i]);
            else
                New.pop_back();
            }
        OldPhrase = "";
        for (int i = 0; i < New.size(); i++) {
            OldPhrase += New[i];
        }
        return OldPhrase;
    };

    void Cout()
    {
        for (int i = 0; i < NewPhrase.size(); i++) {
            cout << NewPhrase[i];
        }
        cout << endl;
    };
};

int main() {
    Phrase phrase;
    cin >> phrase.OldPhrase;
    phrase.NewPhrase = phrase.ClearPhrase1(phrase.OldPhrase);
    phrase.Cout();
    return 0;
}
