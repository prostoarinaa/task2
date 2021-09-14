/*
 Задача #3: Cимвол «@» в тексте это BACKSPACE . Написать функцию, возвращающую строку в ее чистом виде. При разработке алгоритма учесть какие проверки необходимы для валидного удаление символов.
 Example: сварка@@@@@лоб@ну@  ->> слон

*/

#include <iostream>

using namespace std;
class Phrase {
public:
    string OldPhrase;
    string NewPhrase;

    string ClearPhrase1(string OldPhrase)
    {
        for (int i = 0; i < OldPhrase.length(); i++) {
            if (OldPhrase[i] == '1') {
                OldPhrase.erase(i, 1); i--;
                OldPhrase.erase(i, 1);
            }
            }
        return OldPhrase;
    };

    void Cout()
    {
        for (int i = 0; i < NewPhrase.size(); i++) {
            cout << NewPhrase[i];
        }
        cout << endl;
    }
};

int main() {
    Phrase phrase;
    cin >> phrase.OldPhrase;
    phrase.NewPhrase = phrase.ClearPhrase1(phrase.OldPhrase);
    phrase.Cout();
    return 0;
}
