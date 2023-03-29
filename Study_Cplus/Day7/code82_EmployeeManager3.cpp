#include<iostream>
#include<cstring>
using namespace std;
#pragma warning(disable:4996)

// 상속 관계에 있어서 함수 이름이 같으면 오버라이딩

class Employee
{
private:
	char name[100];
public:
	Employee(const char* aname)
	{
		strcpy(name, aname);
	}
	void ShowYourName() const
	{
		cout << "name : " << name << endl;
	}
};

class PermanentWorker : public Employee
{
private:
	int salary;
public:
	PermanentWorker(const char* name, int money) :Employee(name), salary(money)
	{ }
	int GetPay() const
	{
		return salary;
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary : " << GetPay() << endl << endl;
	}
};

class TemporaryWorker : public Employee
{
private:
	int workTime;
	int payPerHour;
public:
	TemporaryWorker(const char *name, int pay):Employee(name), workTime(0), payPerHour(pay)
	{ }
	void AddWorkTime(int time)
	{
		workTime += time;
	}
	int GetPay() const
	{
		return workTime * payPerHour;
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary : " << GetPay() << endl << endl;
	}
};

class SalesWorker : public PermanentWorker
{
private:
	int salesResult;
	double bonusRatio;
public:
	SalesWorker(const char *name, int money, double ratio):PermanentWorker(name, money), salesResult(0), bonusRatio(ratio)
	{ }
	void AddSaleResult(int value)
	{
		salesResult += value;
	}
	int GetPay() const
	{
		return PermanentWorker::GetPay()
			+ (int)(salesResult * bonusRatio);
	}
	void ShowsalaryInfo() const
	{
		ShowYourName();
		cout << "salary : " << GetPay() << endl << endl;
	}
};

class EmployeeHandler
{
private:
	Employee* empList[50];
	int empNum;
public:
	EmployeeHandler() :empNum(0)
	{ }
	void AddEmployee(Employee* emp)
	{
		empList[empNum++] = emp;
	}
	void ShowAllSalaryInfo() const
	{
		/*
		for(int i =0; i<empNum;i++)
		empList[i]->ShowSalaryInfo();
		*/
	}
	void ShowTotalSalary() const
	{
		int sum = 0;
		/*
		for(int i=0; i<empNum;i++)
		sum+=empList[i]->Getpay();
		*/
		cout << "salary sum : " << sum << endl;
	}
	~EmployeeHandler()
	{
		for (int i = 0; i < empNum;i++)
			delete empList[i];
	}
};

int main()
{
	EmployeeHandler handler;

	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));

	TemporaryWorker* alba = new TemporaryWorker("Jung", 700);
	alba->AddWorkTime(5);
	handler.AddEmployee(alba);

	SalesWorker* seller = new SalesWorker("Hong", 1000, 0.1);
	seller->AddSaleResult(7000);
	handler.AddEmployee(seller);

	handler.ShowAllSalaryInfo();

	handler.ShowTotalSalary();
	return 0;
}

/*
	배열포인터는 포인터인데 배열을 가리키는 포인터
	포인터배열은 포인터로 이루어진 배열

	-- 포인터배열 --
	int n1 = 10, n2 = 20, n3 = 30;
	int *ary[3] = {&n1, &n2, &n3};

	-- 배열 포인터 --
	int *pa = &a; // 일반 변수를 가리키는 포인터

	int ary[3] = {1, 2, 3};
	int (*pary) = ary; // 1차원 배열을 가리키는 배열포인터 괄호 없어도 됨

	int ary[2][3] = {{1, 2, 3}, {4, 5, 6}}; // 2차원 배열
	int (*parr)[3] = arr; // 2차원 배열을 가리키는 배열포인터
	// 행은 별로 중요하지 않음


*/