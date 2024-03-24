#include <iostream>

using namespace std;

class character{
public:

    int herbs = 5;
    int manapoten = 5;
    int hppoten = 5;
    int swords[4] = {100,200,300,400};

    int equiped_sword=0;
    int hp = 900;
    int mana = 900;
    int damage = swords[equiped_sword];


    void use_herb(){
        if(herbs<1){
            cout << "Anda tidak punya herbs" << endl;
        }else if(hp>=1000){
            cout << "Anda tidak perlu menggunakan herbs" << endl;
        }else{
            herbs=herbs-1;
            hp=hp+10;
            cout << "Anda menggunakan herbs +10 hp" << endl;
        }
    }
    void use_hppoten(){
        if(hppoten<=1){
            cout << "Anda tidak punya potensi hp" << endl;
        }else if(hp>=1000){
            cout << "Anda tidak perlu menggunakan potensi hp" << endl;
        }else{
            hppoten=hppoten-1;
            hp=hp+50;
            cout << "Anda menggunakan potensi hp +50 hp" << endl;
        }
    }
    void use_manapoten(){
        if(manapoten<=1){
            cout << "Anda tidak punya potensi mana" << endl;
        }else if(mana>=1000){
            cout << "Anda tidak perlu menggunakan potensi mana" << endl;
        }else{
            manapoten=manapoten-1;
            mana=mana+50;
            cout << "Anda menggunakan potensi mana +10 mana" << endl;
        }
    }

    void change_sword(int a){
        damage=damage-swords[equiped_sword]+swords[a];
        equiped_sword=a;
    }

    void show_stats(){
        cout << "hp = " << hp << endl;
        cout << "mana = " << mana << endl;
        cout << "damage = " << damage << endl;
        cout << "Anda menggunakan pedang nomor = " << equiped_sword << endl << endl;
    }
    void show_inven(){
        cout << "inventory" << endl;
        cout << "herbs = " << herbs << endl;
        cout << "potensi mana = " << manapoten << endl;
        cout << "potensi hp = " << hppoten << endl << endl;
    }
};


int main()
{
    character nabil;
    nabil.show_stats();
    nabil.show_inven();

    nabil.use_herb();
    nabil.use_manapoten();
    nabil.use_hppoten();
    nabil.change_sword(1);

    cout << endl;

    nabil.show_stats();
    nabil.show_inven();


    return 0;
}
