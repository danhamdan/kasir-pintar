/*
 * Program Final Project Kelompok 12
 * Kasir pintar
 */


#include <iostream>
#include <iomanip> // Mengubah lokasi kursor/pointer
#include <cstring>
#include <ctime> // Manipulasi waktu

using namespace std;

// Fungsi untuk table
void draw_hline1(int len);
void draw_hline2(int len);

int main()
{
    // deklarasi variabel
    const int max = 5;
    char   yorno, back;
    string nama, 
           menu[max] = {"Cappuccino", "Teavana Ice Tea", "Tea Latte", "Coffee Frappuccino", "Caffe Latte"};
    int    menu_number[max], jumlah_menu[max], bayar, total=0,
           harga[max] = {25000, 33000, 37000, 41000, 44000},
           harga_kali[max] = {0,0,0,0,0};

do{
    // Pembuka/opening
    cout << char(201); draw_hline2(47); cout << char(187) << endl;
    cout << char(186) << setw(31) << "Selamat Datang di" << setw(17) << char(186) << endl;
    cout << char(186) << setw(29) << "TWELVE CAFFE" << setw(19) << char(186) << endl;
    cout << char(186) << setw(35) << "Pusing nugas? Kopiin ajaa" << setw(13) << char(186) << endl;
    cout << char(200); draw_hline2(47); cout << char(188) << endl;
    cout << "Hallo Kak, sebelumnya dengan kakak siapa? : ";
    getline(cin, nama);

    //system("clear");
    system("cls");

    // Menampilkan tabel
    // Header tabel
    cout << endl << "Hallo, Kak " << nama << ". Silahkan pilih menu yang tersedia." << endl << endl;
    cout << char(201); draw_hline2(5); cout << char(203); draw_hline2(27); cout << char(203); draw_hline2(13); cout << char(187) << endl;
    cout << char(186) << setw(4) << "NO." << setw(2) << char(186) << setw(18) << "DAFTAR MENU" << setw(10) << char(186) << setw(8) << "HARGA" << setw(6) << char(186) << endl;
    cout << char(204); draw_hline2(5); cout << char(206); draw_hline2(27); cout << char(206); draw_hline2(13); cout << char(185) << endl;
    
    // Menampilkan isi array ke"dalam tabel
    // Perulangan
    for(int i = 0; i < max; ++i)
    {
        cout << char(186) << setw(3) << i+1 << setw(3)
             << char(186) << setw(25) << menu[i] << setw(3) 
             << char(186) << setw(5) << "Rp." << harga[i] << setw(4) 
             << char(186) << endl;
    }
    // Footer tabel
    cout << char(200); draw_hline2(5); cout << char(202); draw_hline2(27); cout << char(202); draw_hline2(13); cout << char(188) << endl;
    //  caution
    cout << "[!] Anda cukup menuliskan nomor menunya saja." << endl << endl; 

    // Memilih menu yang ingin dipesan
    draw_hline1(49); cout << endl;
    for(int i = 0; true; ++i)
    {
        cout << "Pilih menu   : ";
        cin >> menu_number[i];

        cout << "Jumlah (pcs) : ";
        cin >> jumlah_menu[i];
        
        cout << "Apakah anda ingin menambah menu lain? (Y/N) : ";
        cin >> yorno;
        draw_hline1(49); cout << endl;
        
        if(yorno == 'n' || yorno == 'N')
            break;
    }
    cout << endl;

    //system("clear");
    system("cls");

    // Menampilkan menu yang dipilih
    cout << char(201); draw_hline2(47); cout << char(187) << endl;
    cout << char(186) << setw(32) << "MENU YANG ANDA PILIH" << setw(16) << char(186) << endl;
    cout << char(200); draw_hline2(47); cout << char(188) << endl;
    // perulangan
    
    for(int i = 0; i < max; i++)
    {
        if(menu_number[i] == 1)
        {
            harga_kali[i] += harga[0] * jumlah_menu[i];
            cout << i+1 << "." << setw(20) << menu[0] << " X " << jumlah_menu[i] << " pcs " << setw(11) << "Rp." << harga_kali[i] << endl;
        }
        else if(menu_number[i] == 2)
        {
            harga_kali[i] += harga[1] * jumlah_menu[i];
            cout << i+1 << "." << setw(20) << menu[1] << " X " << jumlah_menu[i] << " pcs " << setw(11) << "Rp." << harga_kali[i] << endl;
        }
        else if(menu_number[i] == 3)
        {
            harga_kali[i] += harga[2] * jumlah_menu[i];
            cout << i+1 << "." << setw(20) << menu[2] << " X " << jumlah_menu[i] << " pcs " << setw(11) << "Rp." << harga_kali[i] << endl;
        }
        else if(menu_number[i] == 4)
        {
            harga_kali[i] += harga[3] * jumlah_menu[i];
            cout << i+1 << "." << setw(20) << menu[3] << " X " << jumlah_menu[i] << " pcs " << setw(11) << "Rp." << harga_kali[i] << endl;
        }
        else if(menu_number[i] == 5)
        {
            harga_kali[i] += harga[4] * jumlah_menu[i];
            cout << i+1 << "." << setw(20) << menu[4] << " X " << jumlah_menu[i] << " pcs " << setw(11) << "Rp." << harga_kali[i] << endl;
        }
        total += harga_kali[i];
    }
    
    draw_hline1(49);
    cout << endl << "Total" << setw(37) << "Rp." << total  << endl;
    draw_hline1(49);

    cout << endl << "[!] Silahkan selesaikan pembayaran anda" << endl;
    cout << "Jumlah uang anda (sebesar)" << setw(16) << "Rp.";
    cin >> bayar;

    //system("clear");
    system("cls");

    // Menampilkan struk/nota pembayaran
    // Header
    cout << char(201); draw_hline2(55); cout << char(187) << endl;;
    cout << char(186) << setw(33) << "TWELVE CAFFE" << setw(23) << char(186) << endl;
    cout << char(200); draw_hline2(55); cout << char(188) << endl;

    // Manipulasi waktu pembayaran
    time_t now = time(0);
    char* dt = ctime(&now);
    cout << "Tanggal & waktu pembelian : " << setw(30) << dt;
    draw_hline1(57); cout << endl;

    // Menampilkan perincian pembelian
    cout << setw(28) << "Nama pelanggan : " << nama << endl;
    cout << setw(28) << "Metode pembayaran : " << "CASH" << endl;
    cout << setw(28) << "Menu yang dipesan : " << endl << endl;

    //menampilkan menu yang dipesan
    for(int i = 0; i < max; i++)
    {
        if(menu_number[i] == 1)
        {
            cout << i+1 << "." << setw(21) << menu[0] << " X " << jumlah_menu[i] << " pcs =" << setw(9) << "Rp." << harga_kali[i] << endl;
        }
        else if(menu_number[i] == 2)
        {
            cout << i+1 << "." << setw(21) << menu[1] << " X " << jumlah_menu[i] << " pcs =" << setw(9) << "Rp." << harga_kali[i] << endl;
        }
        else if(menu_number[i] == 3)
        {
            cout << i+1 << "." << setw(21) << menu[2] << " X " << jumlah_menu[i] << " pcs =" << setw(9) << "Rp." << harga_kali[i] << endl;
        }
        else if(menu_number[i] == 4)
        {
            cout << i+1 << "." << setw(21) << menu[3] << " X " << jumlah_menu[i] << " pcs =" << setw(9) << "Rp." << harga_kali[i] << endl;
        }
        else if(menu_number[i] == 5)
        {
            cout << i+1 << "." << setw(21) << menu[4] << " X " << jumlah_menu[i] << " pcs =" << setw(9) << "Rp." << harga_kali[i] << endl;
        }
    } cout << endl;

    // Menampilkan perincian pembayaran
    cout << setw(34) << "Total pesanan = " << setw(8) << "Rp." << total << endl;
    cout << setw(34) << "Uang anda = " << setw(8) << "Rp." << bayar << endl;
    cout << setw(34) << "Kembalian = " << setw(8) << "Rp." << bayar - total << endl;

    // Footer
    draw_hline1(57); cout << endl;
    cout << setw(39) << "THANKS FOR YOUR ORDER" << endl;
    cout << setw(45) << "Kritik & saran : twelve@caffe.com" << endl;
    draw_hline1(57); cout << endl << endl;

    // Memesan lagi atau keluar
    cout << "Apakah anda ingin memesan lagi? (Y/N) : ";
    cin >> back;
}
    while(back == 'Y' or back == 'y');

    //system("clear");
    system("cls");

    cout << endl << "[!] Anda keluar dari program, Terima kasih." << endl << endl;
    
    // ANGGOTA KELOMPOK 12
    string anggota[5] = {"Monica Pratisa Wulandari L.",
                        "Muhammad hamdan Zulfa",
                        "Alif Ikhwan Habibi",
                        "Linggar Brilly Ardha",
                        "Rizal Ramadani"};
    string nim[5] =     {"21.11.4024",
                        "21.11.4039",
                        "21.11.3990",
                        "21.11.4017",
                        "21.11.3995"};
    // Header tabel
    cout << char(201);; draw_hline2(5); cout << char(203); draw_hline2(31); cout << char(203); draw_hline2(14); cout << char(187) << endl;
    cout << char(186) << setw(4) << "NO." << setw(2) << char(186) << setw(19) << "NAMA ANGGOTA" << setw(13) << char(186) << setw(8) << "NIM" << setw(7) << char(186) << endl;
    cout << char(204); draw_hline2(5); cout << char(206); draw_hline2(31); cout << char(206); draw_hline2(14); cout << char(185) << endl;
    // Menampilkan isi array ke"dalam tabel
    // Perulangan
    for(int i = 0; i < 5; ++i)
    {
        cout << char(186) << setw(3) << i+1 << setw(3)
             << char(186) << setw(29) << anggota[i] << setw(3) 
             << char(186) << setw(12) << nim[i] << setw(3) 
             << char(186) << endl;
    }
    // Footer tabel
    cout << char(200); draw_hline2(5); cout << char(202); draw_hline2(31); cout << char(202); draw_hline2(14); cout << char(188) << endl;

    system("pause");

    return 0;
}

void draw_hline1(int len)
{
    for(int i = 0; i < len; ++i)
        cout << char(196);
}

void draw_hline2(int len)
{
    for(int i = 0; i < len; ++i)
        cout << char(205);
}
