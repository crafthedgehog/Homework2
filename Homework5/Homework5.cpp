#include <iostream>

//#define homework_1
//#define homework_2
//#define homework_3
//#define homework_4
#define homework_5
using namespace std;
using std::cin;
using std::cout;
using std::endl;
int main()
{
    setlocale(LC_ALL, "Russian");
#ifdef homework_1
// �������� ��������� ����� � ��������� �������
void main() {
	{
int a, b, r = 1;
setlocale(0, "");
cout << "������� ����� ";
cin >> a;
cout << "������� ������� "; cin >> b;
for (int c = 0; c < b; c++) r *= a;
cout << "�����: " << r << endl;
system("PAUSE");
	}
}

#endif // homework_1


#ifdef homework_2
//ASCII-�������
int main()
{
	for (int i=0; i<256; i++)
{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
		}
	cout << endl;
}



#endif // homework_2



#ifdef homework_3
//��� ��������

int f(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 0; i < n; i++)
    {
        a = a + b;
        b = a - b;
    }
    return a;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;

    cout << "������� ����� ";
    cin >> n;
    cout << "����� " << f(n) << "\n";
    return 0;
}


#endif // homework_3


#ifdef homework_4
//��� ��������
int main()
{
    int n;

    setlocale(LC_ALL, "Russian");

    cout << "������ ������: "; cin >> n;

    for (int a = 0, i = 0, b = 1, c = a + b; i < n; i++, c = (a = b) + (b = c))
    {
        cout << a << "\t";


    }
    cout << endl;
}

#endif // homework_4

#ifdef homework_5

int n;

cout << "������� ���������� ����� "; cin >> n;
for (int i = 0; i < n; i++)

{
    bool simple = true;
    for (int j = 2; j < i; j++)
    {
        if (i % j == 0)
        {
            simple = false;
            break;
        }

    }
    if (simple)cout << i << "\t";
}
cout << endl;
}
#endif // homework_5
