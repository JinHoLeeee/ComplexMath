#include <iostream>
using namespace std;
class complex {
public:
	double real1,real2,image1,image2;
	complex();
	complex(double r1, double i1,double r2,double i2);
	

};

complex::complex() :complex(0, 0, 0, 0) {}


complex::complex(double r1, double i1, double r2, double i2) {
	real1 = r1;
	real2 = r2;
	image1 = i1;
	image2 = i2;
	cout << r1 << " + " << "(" << i1 << "i" << ")" << " + " << r2 << " + "<<"(" << i2 << "i) = " << r1 + r2 << " + " << "(" << i1 + i2 << "i)" << endl;
	cout << r1 << " + " << "(" << i1 << "i" << ")" << " - " << r2 << " + " << "(" << i2 << "i) = " << r1 - r2 << " + " << "(" << i1 - i2 << "i)" << endl;
	cout << r1 << " + " << "(" << i1 << "i" << ")" << " * " << r2 << " + " << "(" << i2 << "i) = " << (r1 * r2)-(i1*i2) << " + " << "(" << (r1*i2)+(r2*i1) << "i)" << endl;
	cout << r1 << " + " << "(" << i1 << "i" << ")" << " / " << r2 << " + " << "(" << i2 << "i) = " << r1 * r2/(r2*r2)+(i2*i2) << " + " << "(" << (-1*((r1*i2)-(r2*i1)))/(r2*r2)+(i2*i2)<< "i)" << endl;
}


int main() {
	
	cout << "(1.5 + 7i) 와 (4.3 - 2.9i) 에 대한 복소수 사칙연산을 진행합니다.\n" << endl;
	
	complex number(1.5, 7, 4.3, -2.9);

	cout << "\n끝!" << endl;
}

