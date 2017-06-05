#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED



///VARIABLE
///------------------------------------
//user
char password[10],username[10];
char pass[10],user[10];
int compare;
FILE *file;
int pilih;
char back;



///FUNGSI DAN PROSEDURE
///------------------------------------

void main_menu();

//main menu
void menu_administrasi();
void menu_transaksi();
void menu_utility();
//sub menu tranksaksi
void menu_input();
void menu_stock();
void menu_penjualan();
void menu_supplier();
void menu_modify();
//sub menu administrasi
void menu_createuser();
void menu_deleteuser();
void menu_modifyuser();
//sub menu utility
void menu_laporanpenjualan();
void menu_keuntungan();
void menu_daftartransaksi();


///fungsi
void fungsi_input();


void tanya_pass();
void menu_utama();
//void pengolahan data base
void ambilusername();
void ambilpassword();


//void printmenu();





///STRUCT
///------------------------------------
//struct tanggal
//{
//  int tanggal[2];
//  int bulan[2];
//  int tahun[2];
//};
struct akun
{
    char username
};

struct barang
{
    char id_barang[20];
    char nama[20];
    int jumlah[20];
    int harga[20];
    char jenis[20];

}brg[20];

struct customer
{
    int id_cus[200];
    char nama[200][30];
    char alamat[200][30];
};



#endif // HEADER_H_INCLUDED
