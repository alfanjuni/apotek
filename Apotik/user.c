#include "header.h"

//void main_menu(){
//    printf("\t\t===============================\n");
//    printf("\t\t===============================\n");
//    printf("\t\t|        SISPRO APOTEK        |\n");
//    printf("\t\t===============================\n\n");
//    printf("MAIN MENU :\n\n");
//    printf("1. ADMINISTRATION\n");
//    printf("2. MENU TRANSAKSI\n");
//    printf("3. UTILITY\n");
//    printf("===============================\n");
//    printf("Pilih menu : ");scanf("%d",&pilih);
//    switch(pilih)
//    {
//        case 1:
//        getch();
//        break;
//    }
//}

///USER
//Menu Password
void tanya_pass(){
    printf("\t\t\t\t+----------------------------------+\n");
    printf("\t\t\t\t| Selamat Datang di SISPRO APOTEK |\n");
    printf("\t\t\t\t+----------------------------------+\n\n\n");
    printf("\t\t\t\t\t\tLOGIN\t\t\n\n");
    printf("\t\t\t\t username:");
    gets(user);
    compare = strcmp(user,username);
    if(compare==0){
        printf("\t\t\t\t Password:");
        gets(pass);
    }
    else{
        printf("\t\t\t\t+--------------------------------+\n");
        printf("\t\t\t\t|\t Username salah!\t |\n");
        printf("\t\t\t\t+--------------------------------+\n\n\n");
        system("pause");
        system("cls");
        tanya_pass();
    }
    compare=strcmp(pass,password);
    if(compare==0){
        system("cls");
        menu_utama();
    }
    else{
        printf("\t\t\t\t+--------------------------------+\n");
        printf("\t\t\t\t|\t Password salah!\t |\n");
        printf("\t\t\t\t+--------------------------------+\n\n\n");
        system("pause");
        system("cls");
        tanya_pass();


    }


}
/////////////////////////////////////////////////////////////////////////////////
//mengambil data pada database
void ambilpassword(){
    FILE *file; //pointer ke file
    file=fopen("database/password.txt", "r"); //membaca file password.txt
    fscanf(file,"%s",password); //menyimpan data pada variabel password
    fclose(file); //menutup file
}
void ambilusername(){
    FILE *file; //pointer ke file
    file=fopen("database/username.txt", "r"); //membaca file password.txt
    fscanf(file,"%s",username); //menyimpan data pada variabel password
fclose(file); //menutup file
}


//////////////////////////////////////////////////////////////////////////////////
//menu utama
void menu_utama(){
    printf("Selamat datang ,%s\n",username);
    printf("press any key to continue..");
    getch();
    system("cls");

    main_menu();

}
