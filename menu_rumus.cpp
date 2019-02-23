# include<iostream>

using namespace std;

struct menu
{
    string menuName;
};
menu theMenu[3];

struct rumus
{
    string namaRumus;
    double prosesRumus;
};
rumus theRumus[2][3];

int main()
{
    int
    x,
    z,
    menuPilihan,
    rumusPilihan,
    alas,
    tinggi,
    sisi,
    panjang,
    lebar,
    jariJari,
    diameter;

    // menu
    theMenu[0].menuName = "#1 Segitiga";
    theMenu[1].menuName = "#2 Persegi Panjang";
    theMenu[2].menuName = "#3 Lingkaran";

    // rumus
    theRumus[0][0].namaRumus = "#1 Luas Segitiga";
    theRumus[0][1].namaRumus = "#2 Keliling Segitiga";

    theRumus[1][0].namaRumus = "#1 Luas Persegi Panjang";
    theRumus[1][1].namaRumus = "#2 Keliling Persegi Panjang";

    theRumus[2][0].namaRumus = "#1 Luas Lingkaran";
    theRumus[2][1].namaRumus = "#2 Keliling Lingkaran";

    for(x=0; x<3; x++){
        cout<<theMenu[x].menuName<<endl;
    }

    cout<<"Pilih bangun yg mana :";
    cin>>menuPilihan;

    if(menuPilihan == 1){
        for(z=0; z<2; z++){
            cout<<theRumus[0][z].namaRumus<<endl;
        }

        cout<<"Pilih rumus yg mana :";
        cin>>rumusPilihan;

        if(rumusPilihan == 1){
            cout<<"Masukkan alas : ";
            cin>>alas;
            cout<<"Masukkan tinggi :";
            cin>>tinggi;

            // assign
            theRumus[0][0].prosesRumus = (alas * tinggi) / 2;

            cout<<"Hasil : "<<theRumus[0][0].prosesRumus;
        }else if(rumusPilihan == 2){
            cout<<"Masukkan sisi :";
            cin>>sisi;

            // assign
            theRumus[0][1].prosesRumus = sisi * 3;

            cout<<"Hasil :"<<theRumus[0][1].prosesRumus;
        }
    }else if(menuPilihan == 2){
        for(z=0; z<2; z++){
            cout<<theRumus[1][z].namaRumus<<endl;
        }

        cout<<"Pilih rumus yg mana :";
        cin>>rumusPilihan;

        if(rumusPilihan == 1){
            cout<<"Masukkan panjang :";
            cin>>panjang;
            cout<<"Masukkan lebar :";
            cin>>lebar;

            // assign
            theRumus[1][0].prosesRumus = panjang * lebar;

            cout<<theRumus[1][0].prosesRumus;
        }else if(rumusPilihan == 2){
            cout<<"Masukkan panjang :";
            cin>>panjang;
            cout<<"Masukkan lebar :";
            cin>>lebar;

            // assign
            theRumus[1][1].prosesRumus = 2 * (panjang + lebar);

            cout<<"Hasil : "<<theRumus[1][1].prosesRumus;
        }
    }else if(menuPilihan == 3){
        for(z=0; z<2; z++){
            cout<<theRumus[2][z].namaRumus<<endl;
        }

        cout<<"Pilih rumus yg mana :";
        cin>>rumusPilihan;

        if(rumusPilihan == 1){
            cout<<"Masukkan jari-jari :";
            cin>>jariJari;

            // assign
            theRumus[2][0].prosesRumus = 3.14 * jariJari * jariJari;

            cout<<"Hasil : "<<theRumus[2][0].prosesRumus;
        }else if(rumusPilihan == 2){
            cout<<"Masukkan Jari-jari :";
            cin>>jariJari;

            theRumus[2][1].prosesRumus = 2 * 3.14 * jariJari;

            cout<<"Hasil : "<<theRumus[2][1].prosesRumus;
        }
    }


    return 0;
}
