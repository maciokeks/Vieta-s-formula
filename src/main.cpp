#include <iostream>
#include <cmath>
#include <string>
#include <Windows.h>
#include <conio.h>
using namespace std;
float delta;
//main variables
float b;
float c;
//a
string al;
string ar;
float a1;
float a2;
//b
string bl;
string br;
float b1;
float b2;
//c
string cl;
string cr;
float c1;
float c2;
string ap;
string bp;
string cp;

string viete(float a, float b, float c) {

	string end = "Enter to do it again or twice ESC to exit";
	float resultsum;
	float resultmulti;
	float resultzero;
	float x1;
	float x2;
	system("cls");
	if (delta >= 0) {
		if (delta > 0) {
			resultsum = (-b) / a;//x1+x2
			resultmulti = c / a;//x1*x2
			float x1 = ((-b) - sqrt(delta)) / 2 * a;
			float x2 = ((-b) + sqrt(delta)) / 2 * a;
			//wyświetlić tutaj wzór funckji w postaci iloczynowej
			cout << "sum= " << resultsum << endl;
			cout << "multi= " << resultmulti << endl;
			cout << "x1 value: " << x1 << endl;
			cout << "x2 value: " << x2 << endl;
			if (resultmulti < 0) {
				cout << "Sign of x1 and x2: different" << endl;
			}
			else if (resultmulti && resultsum >= 0) {
				cout << "Sign of x1 and x2: +" << endl;
			}
			if (resultmulti > 0 && resultsum < 0) {
				cout << "Sign of x1 and x2: -" << endl;
			}
		}
		if (delta == 0) {
			resultzero = (-b) / 2 * a;
			cout << "x0= " << resultzero << endl;
		}
	}
	else if (delta < 0) {
		cout << "No solution :( sorry" << endl;
		return(0);
	}
	return(end);
}


int main() {
	do {
		system("cls");
		int posofap = 0;
		cout << "Hi user this is simple program of counting x1 or x2 of your square function. Have fun with math!! :)" << endl;
		cout << "---------------DISCLOSURE--------------" << endl;
		cout << "1.Square of root- ex. a/b->2/25 or /b->25" << endl;
		cout << "2.If you want to exit on the end press twice ESC" << endl;
		cout << "3.Dont type letters or you just crash the program with sigle letter" << endl;
		cout << "4.PS. The 3 variables are string so it can input letters but it will crash program" << endl;
		cout << "----------------------------------------" << endl;

		cout << "GIVE a: ";
		cin >> ap;
		cout << endl;
		cout << "GIVE b: ";
		cin >> bp;
		cout << endl;
		cout << "GIVE c: ";
		cin >> cp;


		int locationa = ap.find('/', 0);
		/*----------------a------------------*/
		if (locationa == std::string::npos) {
			a = stof(ap);
			//cout << "wynik bez sqrt: " << a << endl;
		}
		else if (locationa == 1 && ap[0] == '-') {
			string temp;
			for (int i = 2; i <= ap.length();i++) {
				temp += ap[i];
			}
			a1 = stof(temp);
			a = -(sqrt(a1));
			//cout << a << endl;

		}
		else if (locationa == 0) {
			string temp;
			for (int i = 1; i <= ap.length(); i++) {
				temp += ap[i];
			}
			a1 = stof(temp);
			a = sqrt(a1);
			//cout << a << endl;
		}
		else if (locationa != std::string::npos) {
			string temp1;
			string temp2;
			for (int i = 0; i < locationa; i++) {
				temp1 += ap[i];
			}
			a = stof(temp1);
			//cout << a << endl;
			for (int i = locationa + 1; i < ap.length(); i++) {
				temp2 += ap[i];
			}
			//cout << temp2 << endl;
			a2 = stof(temp2);
			a = a * (sqrt(a2));
			//cout << a << endl;
		}
		/*----------------a------------------*/
		int locationb = bp.find('/', 0);

		/*----------------b------------------*/
		if (locationb == std::string::npos) {
			b = stof(bp);
			//cout << "wynik bez sqrt: " << b << endl;
		}else if (locationa == 1 && bp[0] == '-') {
			string temp;
			for (int i = 2; i <= ap.length(); i++) {
				temp += bp[i];
			}
			b1 = stof(temp);
			b = -(sqrt(b1));
			//cout << b << endl;

		}
		else if (locationb == 0) {
			string temp;
			for (int i = 1; i <= bp.length(); i++) {
				temp += bp[i];
			}
			b1 = stof(temp);
			b = sqrt(b1);
			//cout << b << endl;
		}
		else if (locationb != std::string::npos) {
			string temp1;
			string temp2;
			for (int i = 0; i < locationb; i++) {
				temp1 += bp[i];
			}
			b = stof(temp1);
			//cout << b << endl;
			for (int i = locationa + 1; i < bp.length(); i++) {
				temp2 += bp[i];
			}
			//cout << temp2 << endl;
			b2 = stof(temp2);
			b = b * (sqrt(b2));
			//cout << b << endl;
		}
		/*----------------b------------------*/
		int locationc = cp.find('/', 0);

		/*----------------c------------------*/
		if (locationc == std::string::npos) {
			c = stof(cp);
			//cout << "wynik bez sqrt: " << c << endl;
		}else if (locationa == 1 && cp[0] == '-') {
			string temp;
			for (int i = 2; i <= cp.length(); i++) {
				temp += cp[i];
			}
			c1 = stof(temp);
			c = -(sqrt(c1));
			//cout << a << endl;

		}

		else if (locationc == 0) {
			string temp;
			for (int i = 1; i <= cp.length(); i++) {
				temp += cp[i];
			}
			c1 = stof(temp);
			c = sqrt(c1);
			//cout << c << endl;
		}
		else if (locationc != std::string::npos) {
			string temp1;
			string temp2;
			for (int i = 0; i < locationc; i++) {
				temp1 += cp[i];
			}
			c = stof(temp1);
			//cout << c << endl;
			for (int i = locationc + 1; i < bp.length(); i++) {
				temp2 += cp[i];
			}
			//cout << temp2 << endl;
			c2 = stof(temp2);
			c = c * (sqrt(c2));
			//cout << c << endl;
		}
		/*----------------b------------------*/
		delta = pow(b, 2) - (4 * (a) * (c));
		cout << viete(a, b, c) << endl;
	}while (_getch() != 27);
}
