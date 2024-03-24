#include <iostream>

using namespace std;

class character{
public:

    int herbs = 5;
    int manapot = 5;
    int hppot = 5;
    int swords[4] = {100,200,300,400};

    int equipedsword=0;
    int hp = 900;
    int mana = 900;
    int damage = swords[equipedsword];


    void useherb(){
        if(herbs<1){
            cout << "Anda tidak punya herbs" << endl;
        }else if(hp>=1000){
            cout << "Anda tidak perlu menggunakan herbs" << endl;
        }else{
            herbs=herbs-1;
            hp=hp+10;
            cout << "Anda menggunakan herbs +10hp" << endl;
        }
    }
    void usehppot(){
        if(hppot<=1){
            cout << "Anda tidak punya potensi hp" << endl;
        }else if(hp>=1000){
            cout << "Anda tidak perlu menggunakan potensi hp" << endl;
        }else{
            hppot=hppot-1;
            hp=hp+50;
            cout << "Anda menggunakan potensi hp +50hp" << endl;
        }
    }
    void usemanapot(){
        if(manapot<=1){
            cout << "Anda tidak punya potensi mana" << endl;
        }else if(mana>=1000){
            cout << "Anda tidak perlu menggunakan potensi mana" << endl;
        }else{
            manapot=manapot-1;
            mana=mana+50;
            cout << "Anda menggunakan potensi mana +10mana" << endl;
        }
    }

    void changesword(int a){
        damage=damage-swords[equipedsword]+swords[a];
        equipedsword=a;
    }

    void showstat(){
        cout << "hp = " << hp << endl;
        cout << "mana = " << mana << endl;
        cout << "damage = " << damage << endl;
        cout << "Anda menggunakan pedang nomor = " << equipedsword << endl << endl;
    }
    void showbag(){
        cout << "inventory" << endl;
        cout << "herbs = " << herbs << endl;
        cout << "potensi mana = " << manapot << endl;
        cout << "potensi hp = " << hppot << endl << endl;
    }
};


int main()
{
    character nabil;
    nabil.showstat();
    nabil.showbag();

    nabil.useherb();
    nabil.usemanapot();
    nabil.usehppot();
    nabil.changesword(1);

    cout << endl;

    nabil.showstat();
    nabil.showbag();


    return 0;
}
