#include <iostream>
#include <Windows.h>

using namespace std;

class mass

{

private:
	int MAX;
	int* MAS;
	int rMAX;

public:

	mass()
	{
		MAX = 10;
		rMAX = MAX - 1;
		MAS = new int[MAX];
		for (int i = 0; i < MAX; i++) {
			MAS[i] = 0;
		}
	}
	void GetMAS() {
		for (int i = 0; i < rMAX; i++) {
			cout << " ������ " << i + 1 << " ������� ������: ";
			cin >> MAS[i];
		}
	}

	void AddNumbMAS() {
		cout << "\n ������ ������� ������ ��� ���������: ";
		cin >> MAS[rMAX];
		rMAX += 1;
	}

	void DeleteNumbMAS() {
		int n = 0;
		cout << "\n ������ ����� �������� ������ ��� ���������: ";
		cin >> n;
		for (int i = n - 1; i < MAX - 1; i++) {
			MAS[i] = MAS[i + 1];
		}
		rMAX = rMAX - 1;
	}

	void BubbleSortMAS() {
		int save;
		for (int i = 0; i < rMAX; i++) {
			for (int k = rMAX - 1; k > 0; k--) {
				if (MAS[k] < MAS[k - 1]) {
					save = MAS[k - 1];
					MAS[k - 1] = MAS[k];
					MAS[k] = save;
				}
			}
		}
	}

	void PrintMASZtoMax() {
		for (int i = 0; i < rMAX; i++) {
			cout << i + 1 << "." << MAS[i] << endl;
		}
	}

	void PrintMASMaxtoZ() {
		for (int i = rMAX - 1; i >= 0; i--) {
			cout << i + 1 << "." << MAS[i] << endl;
		}
	}

	~mass() {}
};
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	mass obj1;

	obj1.GetMAS();
	obj1.AddNumbMAS();
	obj1.DeleteNumbMAS();
	obj1.BubbleSortMAS();
	cout << "\n\t��������� �������� ������ �� �������" << endl;
	obj1.PrintMASZtoMax();
	cout << "\n\t��������� �������� ������ �� ����" << endl;
	obj1.PrintMASMaxtoZ();
	return 0;

}