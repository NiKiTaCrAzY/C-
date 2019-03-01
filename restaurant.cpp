#include <iostream>

using namespace std;

int bill                   = 0;
const float cezar_price    = 25.00;
const float pasta_price    = 125.00;
const float mushroom_price = 10.00;
const float beer_price     = 15.00;
const float wine_price     = 75.50;
int choice;

void MainMenu(){
    cout << "\n"
         << "#########################\n"
         << "# 1.Cezar      - 25.00  #\n"
         << "# 2. Pasta     - 125.00 #\n"
         << "# 3. Mushrooms - 10.00  #\n"
         << "# 4. Beer      - 15.00  #\n"
         << "# 5. Wine      - 70.50  #\n"
         << "#########################\n"
         << "\nChoose something from menu --> ";
    cin >> choice;
}
void order(){
    cout << "Ваш счёт: " << bill << endl;
    if( bill >= 100 ){
        cout << "Вы уверены?: ";
        cin >> access;
    }
}
void cezar(){
    bill += cezar_price;
    cout << "Saved!\n";
}
void pasta()
{
    bill += pasta_price;
    cout << "Saved!\n";
}
void mushroom()
{
    bill += mushroom_price;
    cout << "Saved!\n";
}
void beer()
{
    bill += beer_price;
    cout << "Saved!\n";
}
void wine()
{
    bill += wine_price;
    cout << "Saved!\n";
}
int main(){
    do{
        MainMenu();
        switch(choice){
            case 1: 
                cezar();
                break;
            case 2:
                pasta();
                break;
            case 3:
                mushroom();
                break;
            case 4:
                beer();
                break;
            case 5:
                wine();
                break;
            case 0:
                order();
                break;
            default:
                cerr << "Error!";
                break;
        }
    }while( choice != 0 );
    return 0;
}