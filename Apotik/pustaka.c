#include"header.h"


void main_menu(){
    //printf("\t\t===============================\n");
    printf("\t\t===============================\n");
    printf("\t\t|        SISPRO APOTEK        |\n");
    printf("\t\t===============================\n\n");
    printf("MAIN MENU :\n\n");
    printf("1. Administrasi\n");
    printf("2. Menu Transaksi\n");
    printf("3. Utility\n");
    printf("4. Exit\n");
    printf("===============================\n");
    printf("Pilih menu : ");scanf("%d",&pilih);
    switch(pilih)
    {
        case 1:
        system("cls");
        menu_administrasi();

        getch();

        break;

        case 2:
        system("cls");
        menu_transaksi();

        getch();
        break;

        case 3:
        system("cls");
        menu_utility();

        getch();
        break;

        case 4:
        exit(0);

        break;
        default:
        printf("Menu tak tersedia,klik untuk kembali memilih");
        getch();
        system("cls");
        main_menu();
        break;

    }
}

void menu_administrasi(){
    //printf("\t\t===============================\n");
    printf("\t\t+-----------------------------+\n");
    printf("\t\t|        ADMINISTRASI         |\n");
    printf("\t\t+-----------------------------+\n\n");
    printf("Daftar Menu :\n\n");
    printf("1. Create User\n");
    printf("2. Delete User\n");
    printf("3. Modify\n");
    printf("4. Kembali\n");
    printf("===============================\n");
    printf("Pilih menu : ");scanf("%d",&pilih);
    switch(pilih)
    {
        case 1:
        system("cls");
        menu_createuser();

        getch();

        break;

        case 2:
        system("cls");
        menu_deleteuser();

        getch();
        break;

        case 3:
        system("cls");
        menu_modifyuser();

        getch();
        break;
        case 4:
        system("cls");
        main_menu();

        break;
        default:
        printf("Menu tak tersedia,klik untuk kembali memilih");
        getch();
        system("cls");
        menu_administrasi();
        break;
    }
}






void menu_transaksi(){
    //printf("\t\t===============================\n");
    printf("\t\t+-----------------------------+\n");
    printf("\t\t|         TRANSAKSI           |\n");
    printf("\t\t+-----------------------------+\n\n");
    printf("Daftar Menu :\n\n");
    printf("1. Input Barang\n");
    printf("2. Daftar Barang\n");
    printf("3. Penjualan\n");
    printf("4. Supplier\n");
    printf("5. Modify\n");
    printf("6. Kembali\n");
    printf("===============================\n");
    printf("Pilih menu : ");scanf("%d",&pilih);
    switch(pilih)
    {
        case 1:
        system("cls");
        menu_input();


        break;

        case 2:
        system("cls");
        menu_stock();

        getch();
        break;
        case 3:
        system("cls");
        menu_penjualan();


        getch();
        break;

        case 4:
        system("cls");
        menu_supplier();


        getch();
        break;

        case 5:
        system("cls");
        menu_modify();


        getch();
        break;
        case 6:
        system("cls");
        main_menu();

        break;
        default:
        printf("Menu tak tersedia,klik untuk kembali memilih");
        getch();
        system("cls");
        menu_transaksi();
        break;
    }
}

///submenu transaksi
void menu_input()
{

        printf("\t\t+-----------------------------+\n");
        printf("\t\t|       Input Barang          |\n");
        printf("\t\t+-----------------------------+\n\n");
        fungsi_input();
        printf("Apakan anda ingin kembali ke Menu Transaksi ? Y/N ");
        back=getch();
        if (back=='Y'||back=='y')
        {
            system("cls");
            menu_transaksi();
        }
        else
            system("cls");
            exit(0);
        getch();

}
void menu_stock()
{
        printf("\t\t+-----------------------------+\n");
        printf("\t\t|       STOCK OBAT            |\n");
        printf("\t\t+-----------------------------+\n\n");

}
void menu_penjualan()
{
        printf("\t\t+-----------------------------+\n");
        printf("\t\t|       PENJUALAN             |\n");
        printf("\t\t+-----------------------------+\n\n");

}


void menu_supplier()
{
        printf("\t\t+-----------------------------+\n");
        printf("\t\t|        SUPPLIER             |\n");
        printf("\t\t+-----------------------------+\n\n");

}
void menu_modify()
{
        printf("\t\t+-----------------------------+\n");
        printf("\t\t|      EDIT STOCK             |\n");
        printf("\t\t+-----------------------------+\n\n");

}


void menu_utility()
{
        printf("\t\t+-----------------------------+\n");
        printf("\t\t|      UTILITY                |\n");
        printf("\t\t+-----------------------------+\n\n");

}


///submenu administrasi
menu_createuser()
{

}

void menu_deleteuser()
{

}
void menu_modifyuser()
{

}

void fungsi_input()
{
    FILE * fp;
    FILE * count;
    count=fopen("count.txt","w+");
    fp=fopen("apotek.txt","a");
    int jum;
    printf("jumlah barang=");scanf("%d",&jum);
    int i;
    for(i=0;i<jum;i++){
        printf("Barang ke-%d \n",i+1);//fprintf(fp,"Barang ke-%d \n",i+1);
        printf("Id Barang  :");scanf("%s",&brg[i].id_barang);fprintf(fp,"Id Barang  : %s\n",brg[i].id_barang);
        printf("Nama Barang:");scanf("%s",&brg[i].nama);fflush(stdin);fprintf(fp,"Nama Barang: %s\n",brg[i].nama);
        printf("Jumlah     :");scanf("%d",&brg[i].jumlah);fprintf(fp,"Jumlah : %d\n",brg[i].jumlah);
        printf("Harga      :");scanf("%d",&brg[i].harga);fprintf(fp,"Harga : %d\n",brg[i].harga);
        printf("Jenis      :");scanf("%s",&brg[i].jenis);fflush(stdin);fprintf(fp,"Jenis : %s\n",brg[i].jenis);
    }
    fprintf(count,"%d",i);
    //fprintf(fp,"count = %d",count);
    fclose(fp);
}
