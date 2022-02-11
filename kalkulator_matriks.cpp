/* 
Program Kalkulator Matriks Dibuat Oleh :
Nama    : Budi Setiawan
Kelas   : 2C Teknik Informatika
NPM     : 1910631170012
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int c,m,n,matriksB[10][10],matriksC[10][10],transpose[10][10];
float determinant,matriksInverse[10][10],matriksA[10][10],kofaktor[10][10],adjoint[10][10];

//function untum membuat garis
garis(){
    cout <<"============================================================================";
    cout <<endl;
}

//function untum membuat garis
garis2(){
    cout <<"----------------------------------------------------------------------------";
    cout <<endl;
}

//function header
header(){
    garis();
    cout << "\t\t\t Aplikasi Kalkulator Matriks " <<endl;
    garis2();
    cout << "Nama : Budi Setiawan \t Kelas : 2C Teknik Informatika \t NPM : 1910631170012" <<endl;
    garis();
}

//function penjumlahan matriks
penjumlahanMatriks(){
    //input jumlah baris dan kolom ke dalam matriks
    cout << "Masukkan jumlah baris matriks :";
    //m adalah baris
    cin >> m;
    cout << "Masukkan jumlah kolom matriks :";
    //n adalah kolom
    cin >> n;
    cout << endl;


    if(m <=3 && n <=3){
    //input nilai matriks A
    cout << "Masukkan elemen matriks A : "<<endl;
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cout << "Masukkan nilai baris ["<< i+1 << "] Kolom [" << j+1 << "] : ";
            cin >> matriksA[i][j];
        }
    }
    cout << endl;

    //input nilai matriks B
    cout << "Masukkan elemen matriks B : "<<endl;
    for(int i = 0; i<m; i++){
        for(int j =0; j<n; j++){
            cout << "Masukkan nilai baris ["<< i+1 << "] Kolom [" << j+1 << "] : ";
            cin >> matriksB[i][j];
        }
    }
    cout << endl;

    // output matriks A
    cout << "Matriks A" <<endl;
    for(int i = 0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << matriksA[i][j]<< " ";
        }
        cout << endl;
    }
    cout << endl;

    //output matriks B
    cout << "Matriks B" <<endl;
    for(int i = 0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << matriksB[i][j]<< " ";
        }
        cout << endl;
    }
    cout << endl;

    //penjumlahan matriks A dan matriks B
    cout << "Hasil Penjumlahan Matriks A dan Matriks B" <<endl;
    for(int i = 0; i<m; i++){
        for(int j=0; j<n; j++){
            matriksC[i][j] = matriksA[i][j] + matriksB[i][j];
            cout << matriksC[i][j]<< " ";
        }
        cout << endl;
    }
    cout << endl;

    }else{
        cout << "Kalkulator matriks ini hanya untuk matriks 2*2 dan 3*3" <<endl;
    }
}

//function pengurangan matriks
penguranganMatriks(){
    //input jumlah baris dan kolom ke dalam matriks
    cout << "Masukkan jumlah baris matriks :";
    //m adalah baris
    cin >> m;
    cout << "Masukkan jumlah kolom matriks :";
    //n adalah kolom
    cin >> n;
    cout << endl;

    if(m <=3 && n <=3){
    //input nilai matriks A
    cout << "Masukkan elemen matriks A : "<<endl;
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cout << "Masukkan nilai baris ["<< i+1 << "] Kolom [" << j+1 << "] : ";
            cin >> matriksA[i][j];
        }
    }
    cout << endl;

    //input nilai matriks B
    cout << "Masukkan elemen matriks B : "<<endl;
    for(int i = 0; i<m; i++){
        for(int j =0; j<n; j++){
            cout << "Masukkan nilai baris ["<< i+1 << "] Kolom [" << j+1 << "] : ";
            cin >> matriksB[i][j];
        }
    }
    cout << endl;

    // output matriks A
    cout << "Matriks A" <<endl;
    for(int i = 0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << matriksA[i][j]<< " ";
        }
        cout << endl;
    }
    cout << endl;

    //output matriks B
    cout << "Matriks B" <<endl;
    for(int i = 0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << matriksB[i][j]<< " ";
        }
        cout << endl;
    }
    cout << endl;

    //pengurangan matriks A dan matriks B
    cout << "Hasil Pengurangan Matriks A dan Matriks B" <<endl;
    for(int i = 0; i<m; i++){
        for(int j=0; j<n; j++){
            matriksC[i][j] = matriksA[i][j] - matriksB[i][j];
            cout << matriksC[i][j]<< " ";
        }
        cout << endl;
    }
    cout << endl;

    }else{
        cout << "Kalkulator matriks ini hanya untuk matriks 2*2 dan 3*3" <<endl;
    }
}

//function perkalian matriks
perkalianMatriks(){
    //input jumlah baris dan kolom ke dalam matriks
    cout << "Masukkan jumlah baris matriks :";
    //m adalah baris
    cin >> m;
    cout << "Masukkan jumlah kolom matriks :";
    //n adalah kolom
    cin >> n;
    cout << endl;

    if(m <=3 && n <=3){
    //input nilai matriks A
    cout << "Masukkan elemen matriks A : "<<endl;
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cout << "Masukkan nilai baris ["<< i+1 << "] Kolom [" << j+1 << "] : ";
            cin >> matriksA[i][j];
        }
    }
    cout << endl;

    //input nilai matriks B
    cout << "Masukkan elemen matriks B : "<<endl;
    for(int i = 0; i<m; i++){
        for(int j =0; j<n; j++){
            cout << "Masukkan nilai baris ["<< i+1 << "] Kolom [" << j+1 << "] : ";
            cin >> matriksB[i][j];
        }
    }
    cout << endl;

    // output matriks A
    cout << "Matriks A" <<endl;
    for(int i = 0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << matriksA[i][j]<< " ";
        }
        cout << endl;
    }
    cout << endl;

    //output matriks B
    cout << "Matriks B" <<endl;
    for(int i = 0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << matriksB[i][j]<< " ";
        }
        cout << endl;
    }
    cout << endl;

    //rumus perkalian matriks
    for(int i =0; i<m; i++){
        for(int j =0; j<n; j++){
            matriksC[i][j]=0;
            for(int k =0; k<n; k++){
                c = matriksA[i][k] * matriksB[k][j];
                matriksC[i][j] += c;
            }
        }
    }

    //hasil perkalian matriks A dan matriks B
    cout << "Hasil perkalian matriks A dan matriks B"<<endl;
    for(int i =0; i<m; i++){
        for(int j =0; j<n; j++){
            cout << matriksC[i][j] << " ";
        }
        cout<<endl;
    }
    }else{
        cout << "Kalkulator matriks ini hanya untuk matriks 2*2 dan 3*3" <<endl;
    }
}

//function determinant matriks
determinantMatriks(){
        //input jumlah baris dan kolom ke dalam matriks
        cout << "Masukkan jumlah baris matriks :";
        // m adalah baris
        cin >> m;
        cout << "Masukkan jumlah kolom matriks :";
        // n adalah kolom
        cin >> n;
        cout << endl;

        if(m == 2 && n == 2){
            //input nilai matriks A
            cout << "Masukan Elemen Matriks A" <<endl;
            cout << "==============================" <<endl;
            for(int i=0;i<m;i++){
                for(int j=0; j<n; j++){
                    cout << "Masukan nilai baris ["<< i+1 << "] Kolom [" << j+1 << "] = ";
                    cin >> matriksA[i][j];
                }
            }
            cout<<endl;
            //Output matriks A
            cout <<" Matriks A" <<endl;
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    cout << matriksA[i][j] << " ";
                }
                cout << endl;
            }
            cout << endl;

            //rumus determinant 2*2
            determinant = (matriksA[0][0]*matriksA[1][1])-(matriksA[0][1]*matriksA[1][0]);
            //hasil determinant
            cout << "Nilai Determinant = "<< determinant << endl;

        }else if(m == 3 && n == 3){
            //input nilai matriks A
            cout << "Masukan Elemen Matriks A" <<endl;
            cout << "==============================" <<endl;
            for(int i=0;i<m;i++){
                for(int j=0; j<n; j++){
                    cout << "Masukan nilai baris ["<< i+1 << "] Kolom [" << j+1 << "] = ";
                    cin >> matriksA[i][j];
                }
            }
            cout<<endl;
             //Output matriks A
            cout << "Matriks A" <<endl;
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    cout << matriksA[i][j] << " ";
                }
                cout << endl;
            }
            cout << endl;

                //rumus determinant matriks 3*3
                determinant
                =matriksA[0][0]*matriksA[1][1]*matriksA[2][2]
                +matriksA[0][1]*matriksA[1][2]*matriksA[2][0]
                +matriksA[0][2]*matriksA[1][0]*matriksA[2][1]
                -matriksA[0][2]*matriksA[1][1]*matriksA[2][0]
                -matriksA[0][0]*matriksA[1][2]*matriksA[2][1]
                -matriksA[0][1]*matriksA[1][0]*matriksA[2][2];
                //hasil determinant
                cout << "Nilai Determinant = " << determinant <<endl;

        }else{
        cout << "Kalkulator matriks ini hanya untuk matriks 2*2 dan 3*3" <<endl;
    }
}

//function invers matriks
inversMatriks(){
    //input jumlah baris dan kolom ke dalam matriks
        cout << "Masukkan jumlah baris matriks :";
        cin >> m;
        cout << "Masukkan jumlah kolom matriks :";
        cin >> n;
        cout << endl;

        

        if(m == 2 && n == 2){
            //input nilai matriks A
            cout << "Masukan Elemen Matriks A" <<endl;
            cout << "==============================" <<endl;
            for(int i=0;i<m;i++){
                for(int j=0; j<n; j++){
                    cout << "Masukan nilai baris ["<< i+1 << "] Kolom [" << j+1 << "] = ";
                    cin >> matriksA[i][j];
                }
            }
            cout<<endl;
            //Output matriks A
            cout << " Matriks A" <<endl;
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    cout << matriksA[i][j] << " ";
                }
                cout << endl;
            }
            cout << endl;

            //mencari determinant 2*2
            determinant = (matriksA[0][0]*matriksA[1][1])-(matriksA[0][1]*matriksA[1][0]);
            cout <<"Nilai Determinant = "<< determinant << endl;
            cout<<endl;

            //mencari invers 2*2
            matriksInverse[1][1] = matriksA[0][0];
            matriksInverse[0][0]  =  matriksA[1][1];
            matriksInverse[0][1] = matriksA[0][1]*-1;
            matriksInverse[1][0] = matriksA[1][0]*-1;

             //Output Invers A
            cout << "Invers Matriks A" <<endl;
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    cout << matriksInverse[i][j]/determinant << " ";
                }
                cout<<endl;
            }
            cout<<endl;
        }else if(m == 3 && n == 3){
            //input nilai matriks A
            cout << "Masukan Elemen Matriks A" <<endl;
            cout << "==============================" <<endl;
            for(int i=0;i<m;i++){
                for(int j=0; j<n; j++){
                    cout << "Masukan nilai baris ["<< i+1 << "] Kolom [" << j+1 << "] = ";
                    cin >> matriksA[i][j];
                }
            }
            cout<<endl;
            //output matriks A
            cout << "Matriks A" <<endl;
            for(int i = 0; i<m; i++){
                for(int j=0; j<n; j++){
                    cout << matriksA[i][j] << " ";
                }
                cout << endl;
            }
            cout << endl;

            //Determinant Matriks A 3*3
            determinant 
            = matriksA[0][0] * matriksA[1][1] * matriksA[2][2]
            + matriksA[0][1] * matriksA[1][2] * matriksA[2][0]
            + matriksA[0][2] * matriksA[1][0] * matriksA[2][1]
            - matriksA[0][2] * matriksA[1][1] * matriksA[2][0]
            - matriksA[0][0] * matriksA[1][2] * matriksA[2][1]
            - matriksA[0][1] * matriksA[1][0] * matriksA[2][2];

            //output determinant 3*3
            cout << "Nilai determinant : " << determinant ;
            cout << endl;

            //Kofaktor Matriks A

            kofaktor[0][0] = (matriksA[1][1] * matriksA[2][2] - matriksA[2][1] * matriksA[1][2]);
            kofaktor[0][1] = -1 * (matriksA[1][0] * matriksA[2][2] - matriksA[2][0] * matriksA[1][2]);
            kofaktor[0][2] = (matriksA[1][0] * matriksA[2][0] - matriksA[2][0] * matriksA[1][1]);
            kofaktor[1][0] = -1 * (matriksA[0][1] * matriksA[2][2] - matriksA[2][1] * matriksA[0][2]);
            kofaktor[1][1] = (matriksA[0][0] * matriksA[2][2] - matriksA[2][0] * matriksA[0][2]);
            kofaktor[1][2] = -1 * (matriksA[0][0] * matriksA[2][1] - matriksA[2][0] * matriksA[0][1]);
            kofaktor[2][0] = (matriksA[0][1] * matriksA[1][2] - matriksA[1][1] * matriksA[0][2]);
            kofaktor[2][1] = -1 * (matriksA[0][0] * matriksA[1][2] - matriksA[1][0] * matriksA[0][2]);
            kofaktor[2][2] = (matriksA[0][0] * matriksA[1][1] - matriksA[1][0] * matriksA[0][1]);

            //output kofaktor
            cout << "Kofaktor matriks A" << endl;
            for(int i = 0 ;i<m;i++){
                for(int j = 0 ;j<n;j++){
                    cout << kofaktor[i][j] << " ";
                }
                cout << endl;
            }
            cout << endl;

            //adjoint Matriks A
            adjoint[0][0] = kofaktor[0][0]; adjoint[1][0] = kofaktor[0][1]; adjoint[2][0] = kofaktor[0][2];
            adjoint[0][1] = kofaktor[1][0]; adjoint[1][1] = kofaktor[1][1]; adjoint[2][1] = kofaktor[1][2];
            adjoint[0][2] = kofaktor[2][0]; adjoint[1][2] = kofaktor[2][1]; adjoint[2][2] = kofaktor[2][2];

            //ouput adjoint Matriks A
            cout << "Adjoint matriks A" << endl;
            for(int i = 0 ;i<m;i++){
                for(int j = 0 ;j<n;j++){
                    cout << adjoint[i][j] << " ";
                }
                cout << endl;
            }
            cout << endl;

            //invers matriks

            matriksA[0][0] = adjoint[0][0] / determinant;
            matriksA[0][1] = adjoint[0][1] / determinant;
            matriksA[0][2] = adjoint[0][2] / determinant;
            matriksA[1][0] = adjoint[1][0] / determinant;
            matriksA[1][1] = adjoint[1][1] / determinant;
            matriksA[1][2] = adjoint[1][2] / determinant;
            matriksA[2][0] = adjoint[2][0] / determinant;
            matriksA[2][1] = adjoint[2][1] / determinant;
            matriksA[2][2] = adjoint[2][2] / determinant;

            //ouput invers Matriks A
            cout << "invers matriks A" << endl;
            for(int i = 0 ;i<m;i++){
                for(int j = 0 ;j<n;j++){
                    cout << matriksA[i][j] << " ";
                }
                cout << endl;
            }
            cout << endl;
        }else{
        cout << "Kalkulator matriks ini hanya untuk matriks 2*2 dan 3*3" <<endl;
    }
}

//function transpose matriks
transposeMatriks(){
    //input jumlah baris dan kolom ke dalam matriks
        cout << "Masukkan jumlah baris matriks :";
        //m adalah baris
        cin >> m;
        cout << "Masukkan jumlah kolom matriks :";
        //n adalah kolom
        cin >> n;
        cout << endl;

        if(m <= 3 && n <= 3){
            //input nilai matriks A
            cout << "Masukan Elemen Matriks A" <<endl;
            cout << "==============================" <<endl;
            for(int i=0;i<m;i++){
                for(int j=0; j<n; j++){
                    cout << "Masukan nilai baris ["<< i+1 << "] Kolom [" << j+1 << "] = ";
                    cin >> matriksA[i][j];
                }
            }
            cout<<endl;

            //Output matriks A
            cout << " Matriks A" <<endl;
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    cout << matriksA[i][j] << " ";
                }
                cout << endl;
            }
            cout << endl;

            //Transpose Matriks A
            for(int i =0; i<m; i++){
                for(int j =0; j<n; j++){
                    transpose[j][i] = matriksA[i][j];
                }
            }

            //output transpose matriks A
            for(int i=0; i<n; i++){
                for(int j =0; j<m; j++){
                    cout << transpose[i][j] << " ";
                }
                cout << endl;
            }
            cout << endl;

        }else{
            cout << "Kalkulator matriks ini hanya untuk matriks 2*2 2*3 3*2 dan 3*3" <<endl;
        }
}

main(){
    int pilihMenu;
    char ulang;

    menu :
    system("cls");

    header();

    //ini adalah menu
    cout <<"[1] Penjumlahan Matriks" <<endl;
    cout <<"[2] Pengurangan Matriks" <<endl;
    cout <<"[3] Perkalian Matriks" <<endl;
    cout <<"[4] Determinant Matriks" <<endl;
    cout <<"[5] Invers Matriks" <<endl;
    cout <<"[6] Transpose Matriks "<<endl;
    cout <<"[7] Keluar " <<endl;
    cout <<"Pilih Menu [1][2][3][4][5][6][7] : ";
    cin >>pilihMenu;

    switch(pilihMenu){
        //Menu [1] Penjumlahan Matriks
        case 1: 
        menuPenjumlahan :
        system("cls");
        header();
        cout <<endl;
        garis2();
        cout <<"\t\t\t[1] Penjumlahan Matriks" <<endl;
        garis2();
        cout <<"Keterangan : *Matriks 2*2 \t\t\t\t **Matriks 3*3" <<endl;
        garis2();

        penjumlahanMatriks();

        cout << endl;
        cout << "Keterangan : " <<endl;
        cout << "[y] = Kembali ke penjumlahan matriks " <<endl;
        cout << "[m] = Kembali ke menu utama " << endl;
        cout << "[e] = Keluar dari program " << endl;
        cout << "Apakah anda ingin melakukan penjumlahan matriks lagi ? [y][m][e] : ";
        cin >> ulang;  

        if(ulang == 'y' || ulang == 'Y'){
            goto menuPenjumlahan;
        }else if(ulang == 'm' || ulang == 'M'){
            goto menu;
        }else if(ulang == 'e' || ulang == 'E'){
            exit(0);
        }else{
            cout << "Tidak ada Pilihan" <<endl;
        }
        break;

        //menu [2] pengurangan matriks 
        case 2 :
        menuPengurangan :
        system("cls");
        header();
        cout <<endl;
        garis2();
        cout <<"\t\t\t[2] Pengurangan Matriks" <<endl;
        garis2();
        cout <<"Keterangan : *Matriks 2*2 \t\t\t\t **Matriks 3*3" <<endl;
        garis2();
        penguranganMatriks();

        cout << endl;

        //keterangan
        cout << "Keterangan : " <<endl;
        cout << "[y] = Kembali ke pengurangan matriks " <<endl;
        cout << "[m] = Kembali ke menu utama " << endl;
        cout << "[e] = Keluar dari program " << endl;
        cout << "Apakah anda ingin melakukan pengurangan matriks lagi ? [y][m][e] : ";
        cin >> ulang;  

        if(ulang == 'y' || ulang == 'Y'){
            goto menuPengurangan;
        }else if(ulang == 'm' || ulang == 'M'){
            goto menu;
        }else if(ulang == 'e' || ulang == 'E'){
            exit(0);
        }else{
            cout << "Tidak ada Pilihan" <<endl;
        }
        break;

        //menu[3] Perkalian Matriks
        case 3 :
        menuPerkalian :
        system("cls");
        header();
        cout <<endl;
        garis2();
        cout <<"\t\t\t[3] Perkalian Matriks" <<endl;
        garis2();
        cout <<"Keterangan : *Matriks 2*2 \t\t\t\t **Matriks 3*3" <<endl;
        garis2();
        perkalianMatriks();

        cout << endl;

        //keterangan
        cout << "Keterangan : " <<endl;
        cout << "[y] = Kembali ke perkalian matriks " <<endl;
        cout << "[m] = Kembali ke menu utama " << endl;
        cout << "[e] = Keluar dari program " << endl;
        cout << "Apakah anda ingin melakukan perkalian matriks lagi ? [y][m][e] : ";
        cin >> ulang;  

        if(ulang == 'y' || ulang == 'Y'){
            goto menuPerkalian;
        }else if(ulang == 'm' || ulang == 'M'){
            goto menu;
        }else if(ulang == 'e' || ulang == 'E'){
            exit(0);
        }else{
            cout << "Tidak ada Pilihan" <<endl;
        }
        break;

        //menu[4] Determinant Matriks
        case 4 :
        menuDeterminan :
        system("cls");
        header();
        cout <<endl;
        garis2();
        cout <<"\t\t\t[4] Determinan Matriks" <<endl;
        garis2();
        cout <<"Keterangan : *Matriks 2*2 \t\t\t\t **Matriks 3*3" <<endl;
        garis2();
        determinantMatriks();

        cout << endl;

        //keterangan
        cout << "Keterangan : " <<endl;
        cout << "[y] = Kembali ke determinant matriks " <<endl;
        cout << "[m] = Kembali ke menu utama " << endl;
        cout << "[n] = Keluar dari program " << endl;
        cout << "Apakah anda ingin melakukan determinant matriks lagi ? [y][m][n] : ";
        cin >> ulang;  

        if(ulang == 'y' || ulang == 'Y'){
            goto menuDeterminan;
        }else if(ulang == 'm' || ulang == 'm'){
            goto menu;
        }else if(ulang == 'n' || ulang == 'N'){
            exit(0);
        }else{
            cout << "Tidak ada Pilihan" <<endl;
        }
        break;

        //menu[5] Inverse Matriks 
        case 5 :
        menuInvers :
        system("cls");
        header();
        cout <<endl;
        garis2();
        cout <<"\t\t\t[5] Invers Matriks" <<endl;
        garis2();
        cout <<"Keterangan : *Matriks 2*2 \t\t\t\t **Matriks 3*3" <<endl;
        garis2();
        inversMatriks();

        cout << endl;

        //keterangan
        cout << "Keterangan : " <<endl;
        cout << "[y] = Kembali ke inverse matriks " <<endl;
        cout << "[m] = Kembali ke menu utama " << endl;
        cout << "[e] = Keluar dari program " << endl;
        cout << "Apakah anda ingin melakukan inverse matriks lagi ? [y][m][e] : ";
        cin >> ulang;  

        if(ulang == 'y' || ulang == 'Y'){
            goto menuInvers;
        }else if(ulang == 'm' || ulang == 'M'){
            goto menu;
        }else if(ulang == 'e' || ulang == 'E'){
            exit(0);
        }else{
            cout << "Tidak ada Pilihan" <<endl;
        }
        break;

        //menu[6] transpose matriks
        case 6 :
        menuTranspose :
        system("cls");
        header();
        cout <<endl;
        garis2();
        cout <<"\t\t\t[6] Transpose Matriks" <<endl;
        garis2();
        cout <<"Keterangan : *Matriks 2*2  **Matriks 2*3  ***Matriks 3*2  ***Matriks 3*3" <<endl;
        garis2();
        transposeMatriks();

        cout << endl;

        //keterangan
        cout << "Keterangan : " <<endl;
        cout << "[y] = Kembali ke transpose matriks " <<endl;
        cout << "[m] = Kembali ke menu utama " << endl;
        cout << "[e] = Keluar dari program " << endl;
        cout << "Apakah anda ingin melakukan transpose matriks lagi ? [y][m][e] : ";
        cin >> ulang;  

        if(ulang == 'y' || ulang == 'Y'){
            goto menuTranspose;
        }else if(ulang == 'm' || ulang == 'M'){
            goto menu;
        }else if(ulang == 'e' || ulang == 'E'){
            exit(0);
        }else{
            cout << "Tidak ada Pilihan" <<endl;
        }
        break;

        //menu[7] exit
        case 7:
        exit(0);
        break;

        default:
        cout <<"\t\t\t Menu Tidak Tersedia !!!" <<endl;
        break;
    }
}

