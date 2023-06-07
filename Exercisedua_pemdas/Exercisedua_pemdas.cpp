#include <iostream>
using namespace std;

class bidangDatar {
public:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
	bidangDatar() { //constructor
		x = 0;
	}
	virtual void input() {

	} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
	virtual float Luas(int a) { 
		return 0; 
	} //fungsi untuk menghitung luas
	virtual float Keliling(int a) { 
		return 0; 
	} //fungsi untuk menghitung keliling
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX(int a) { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};


class Lingkaran : public bidangDatar{
public:
	void inputjejari() {
		cout << "Masukkan jejari : " << endl;
		cin >> x;
	}
	float Luas(int a) {
		cout << "Luas lingkaran = " << endl;
	Luas :  22 / 7 * x * x;

		return 0;
	}
	float Keliling(int a) {
	Keliling: 22 / 7 * 2 * x;
		return 0;
	} 
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};

class bujurSangkar : public bidangDatar {
public:
	void inputjejari() {
		cout << "Masukkan sisi : " << endl;
		cin >> x;
	}
	float Luas(int a) {
	Luas:  x* x; 

		return 0;
	}
	float Keliling(int a) {
	Keliling: 4* x;
		return 0;
	}
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};

int main() {

	bidangDatar lingkarandibuat; 

	lingkarandibuat.setX(7);
	cout << lingkarandibuat.getX(7) << endl;
}