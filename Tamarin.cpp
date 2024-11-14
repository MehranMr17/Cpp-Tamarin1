#include <iostream>
#include <math.h>
using namespace std;

void question1(), question2(), question3(), question4(), question5(), question6(), question7(), question8(), question9(), question10(),
	 question11(), question12(), question13(), question14(), question15(), question16a(), question16b(), question16c(), question16d(),
	 question17a(), question17b(), question18(), question19();


void main() {
	//question1();
	//question2();
	//question3();
	//question4();
	//question5();
	//question6();
	//question7();
	//question8();
	//question9();
	//question10();
	//question11();
	//question12();
	//question13();
	//question14();
	//question15();
	//question16a();
	//question16b();
	//question16c();
	//question16d();
	//question17a();
	//question17b();
	//question18();
	question19();
	//cin.get();
	//cin.ignore();

}


// WHILE QAs

void question1() {
	int _number, number, reverse = 0;

	cout << "Enter number: " << endl;
	cin >> _number;
	number = _number;

	while (_number > 0) {
		while (number > 0) {
			reverse = (reverse * 10) + (number % 10);
			number /= 10;
		}

		if (_number == reverse) {
			cout << _number << " is Palindrome" << endl;
		}

		reverse = 0;
		cout << "Enter number: " << endl;
		cin >> _number;
		number = _number;


	}
}

void question2() {
	for (int i = 1000; i <= 10000; i++) {
		int number = i;
		bool dousHave5Or0 = false;
		while (number > 0) {
			if (number % 5 == 0) {
				dousHave5Or0 = true;
			}
			number /= 10;
		}
		if (!dousHave5Or0) {
			cout << i << endl;
		}
	}
}

void question3() {
	int a = 0, b = 1, c = 1, number;

	cout << "Enter number: " << endl;
	cin >> number;

	cout << a << endl;

	while (number > c) {
		cout << c << endl;
		c = a + b;
		a = b;
		b = c;



	}



}

void question4() {
	for (int i = 100; i < 1000; i++) {
		int number = i, sum = 0;
		while (number > 0) {
			int a = number % 10;
			sum = sum + (a * a * a);
			number /= 10;
		}
		if (i == sum) {
			cout << i << endl;
		}
	}


}

void question5() {
	int number, _number, countE = 0, countO = 0;
	cout << "Enter number: " << endl;
	cin >> _number;
	number = _number;

	while (_number > 0) {
		while (number > 0) {
			int r = number % 10;
			if (r % 2 == 0) {
				countE++;
			}
			else {
				countO++;
			}
			number /= 10;
		}
		if (countE > countO) {
			cout << "Even numbers are more then Odd numbers => count is :" << countE << endl;
		}
		else if (countO > countE) {
			cout << "Odd numbers are more then Even numbers => count is :" << countO << endl;
		}
		else {
			cout << "Odd numbers and Even numbers are equal => count is :" << countO << endl;
		}
		countE = 0;
		countO = 0;
		cout << "Enter number: " << endl;
		cin >> _number;
		number = _number;
	}
}

void question6() {

	char ch;

	cout << "Enter char: " << endl;
	cin >> ch;

	while (ch != 'q') {

		int asciiCode = int(ch);

		cout << "char: " << ch << endl;
		cout << "asciiCode: " << asciiCode << endl;


		cout << "Enter char: " << endl;
		cin >> ch;
	}

}

void question7() {
	int money, count500 = 0, count250 = 0, count100 = 0, count50 = 0, count10 = 0, count1 = 0;

	cout << "Enter money: " << endl;
	cin >> money;

	while (money > 0) {
		count500 = money / 500;
		money = money - (count500 * 500);

		count250 = money / 250;
		money = money - (count250 * 250);

		count100 = money / 100;
		money = money - (count100 * 100);

		count50 = money / 50;
		money = money - (count50 * 50);

		count10 = money / 10;
		money = money - (count10 * 10);

		count1 = money / 1;
		money = money - (count1 * 1);
	}

	cout << "count500 => " << count500 << endl;
	cout << "count250 => " << count250 << endl;
	cout << "count100 => " << count100 << endl;
	cout << "count50 => " << count50 << endl;
	cout << "count10 => " << count10 << endl;
	cout << "count1 => " << count1 << endl;

}

void question8() {

	int n, k;
	cout << "Enter n: ";
	cin >> n;
	cout << "Enter k: ";
	cin >> k;

	int higherCountO = 0;
	int numberWithHigherCountO = 0;

	while (n > 0) {
		int num, _num;
		cout << "Enter number:" << endl;
		cin >> _num;
		num = _num;
		int countO = 0;
		while (num > 0) {
			int a = num % k;
			if (a % 2 != 0) {
				countO++;
			}
			num /= k;
		}

		if (countO > higherCountO) {
			higherCountO = countO;
			numberWithHigherCountO = _num;
		}
		n--;
	}

	cout << "Number with higher count odd numbers =>  " << numberWithHigherCountO << endl;


}

void question9() {
	for (int i = 100; i < 10000; i++) {
		int number = i, sum = 0;

		while (number > 0) {
			int a = number % 10;

			int f = 1;
			for (int j = 1; j <= a; j++) {
				f = f * j;
			}

			sum = sum + f;
			number /= 10;

		}

		if (i == sum) {
			cout << i << endl;
		}
	}
	cout << "end" << endl;


}

void question10() {
	for (int j = 1; j < 50; j++) {

		int n = j, sum = 0, s = 0;

		sum += (n * (n + 1)) / 2;

		if (sum > 1000) break;
		s = sum;

		if (s < 1000 && s >= 100) {

			bool isSimiler = true;
			int digit = -1;
			int a = sum % 10;
			digit = a;
			sum /= 10;

			while (sum > 0) {

				a = sum % 10;
				if (digit != a) {
					isSimiler = false;
				}
				sum /= 10;

			}

			if (isSimiler) {
				cout << "n" << n << endl;
				cout << "s" << s << endl;

			}
		}

	}
}

// FOR QAs

void question11() {
	for (int i = 100; i < 1000; i++) {
		if (i % 6 == 0) {
			cout << i << endl;
		}
	}

}

void question12() {
	int number = 0;
	cout << "Enter number: ";
	cin >> number;

	for (int i = 0; i <= number; i++) {
		int count = 0;
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				count++;
			}
		}
		if (count == 2) {
			cout << i << endl;
		}
	}
}

void question13() {
	int number = 0;
	cout << "Enter number: ";
	cin >> number;

	int count = 0;
	int sum = 0;
	for (int i = 1; i <= number; i++) {
		if (number % i == 0) {
			count++;
			sum += i;
		}
	}
	cout << "count => " << count << endl;
	cout << "sum => " << sum << endl;

}

void question14() {

	int number1, number2, smallerNumber, biggerM = 0;
	cout << "Enter number1: ";
	cin >> number1;
	cout << "Enter number2: ";
	cin >> number2;

	if (number1 >= number2) smallerNumber = number2;
	else smallerNumber = number1;

	for (int i = 1; i <= smallerNumber; i++) {
		if (number1 % i == 0 && number2 % i == 0) {
			if (i > biggerM) biggerM = i;
		}
	}

	if (biggerM == 0)
		cout << "No similer magsoom aleh";
	else
		cout << biggerM;


}

void question15() {
	for (int i = 1; i <= 10000; i++) {
		int sum = 0;
		for (int j = 1; j < i; j++) {
			if (i % j == 0) {
				sum += j;
			}
		}
		if (sum == i) {
			cout  << i << endl;
		}
	}
}

void question16a() {

	int n;
	double sum = 0;
	cout << "Enter n: ";
	cin >> n;


	for (int i = 1; i <= n; i++) {
		sum += (1.0 / i);
	}

	cout << "sum is => " << sum;
}

void question16b() {

	int n;
	double sum = 0;
	cout << "Enter n: ";
	cin >> n;


	for (int i = 1; i <= n; i++) {
		if( i % 2 == 0) sum -= (1.0 / i);
		else sum += (1.0 / i);
	}

	cout << "sum is => " << sum;
}

void question16c() {

	double sum = 0.0;


	for (int i = 100; i >= 1; i = i - 2) {
		//cout << "("<<i-1<<" + "<<i<<")"<<" / ("<< i << " * "<< i-1 << ")" << endl;

		sum = sum + ((double(i) + double(i - 1)) / (double(i) * double(i - 1)));
	}

	cout << "sum is => " << sum;
}

void question16d() {

	int n,x;
	double sum = 0;
	cout << "Enter n: ";
	cin >> n;
	cout << "Enter x: ";
	cin >> x;

	for (int i = 1; i <= n; i++) {
		int f = 1;
		for (int j = 1; j <= i; j++) {
			f *= j;
		}

		//cout << "(" << x << " ^ " << i << " / " << i << "!)" << endl;


		sum += pow(x,(i/f));
	}

	cout << "sum is => " << sum;

}

void question17a() {
	int n = 6;
	cout << "Enter n: ";
	cin >> n;
	for (int i = n; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			cout << j << " ";
		}
		for (int k = i-1; k >= 1; k--) {
			cout << k << " ";
		}
		cout << endl;
	}
}

void question17b() {
	int n = 6;
	cout << "Enter n: ";
	cin >> n;
	for (int i = n; i >= 1; i--) {
		if (i % 2 == 0) {
			for (int j = 1; j <= i; j++) {
				cout << "* ";
			}
		}
		else {
			for (int j = 1; j <= i; j++) {
				cout << "# ";
			}
		}

		cout << endl;
	}
}

void question18() {

	int a = 0, b = 1, c = 1, number, biggestN = 0;

	cout << "Enter number: " << endl;
	cin >> number;

	for(int i = c; number > i; i = a + b){
		biggestN = i;
		a = b;
		b = i;
	}

	cout << biggestN;


}

void question19() {
	for (int i = 5; i >  0; i--) {
		for (int j = i; j >= 1; j--) {
			cout << j << " ";
		}
		cout << endl;

	}
	
	for (int i = 9; i > 0; i-=2) {
		for (int j = i; j >= 1; j -= 2) {
			cout << j << " ";
		}
		cout << endl;

	}
}





















