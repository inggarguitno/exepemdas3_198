#include <iostream>
using namespace std;

class bidangDatar {
private:
    int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
    bidangDatar() { //constructor
        x = 0;
    }
    virtual void input() {} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
    virtual float Luas(int a) { return 0; } //fungsi untuk menghitung luas
    virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling
    void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
        this->x = a;
    }
    int getX() { //fungsi untuk membaca/mengambil nilai dalam x
        return x;
    }
};

class Lingkaran : public bidangDatar {
public:
    void input() {
        cout << "Lingkaran dibuat" << endl;
        cout << "Masukkan jejari: ";
        int radius;
        cin >> radius;
        setX(radius);
    }
    float Luas(int a) {
        return 3.14 * a * a;
    }
    float Keliling(int a) {
        return 2 * 3.14 * a;
    }
};

class Bujursangkar : public bidangDatar {
public:
    void input() {
        cout << "Bujursangkar dibuat" << endl;
        cout << "Masukkan sisi: ";
        int side;
        cin >> side;
        setX(side);
    }
    float Luas(int a) {
        return a * a;
    }
    float Keliling(int a) {
        return 4 * a;
    }
};

int main() {
    bidangDatar* bd;

    // Lingkaran
    bd = new Lingkaran();
    bd->input();
    cout << "Luas Lingkaran = " << bd->Luas(bd->getX()) << endl;
    cout << "Keliling Lingkaran = " << bd->Keliling(bd->getX()) << endl;
    delete bd;

    // Bujursangkar
    bd = new Bujursangkar();
    bd->input();
    cout << "Luas Bujursangkar = " << bd->Luas(bd->getX()) << endl;
    cout << "Keliling Bujursangkar = " << bd->Keliling(bd->getX()) << endl;
    delete bd;

    return 0;
}