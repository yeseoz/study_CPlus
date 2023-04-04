// author 김예서
#include<iostream>
#include<string.h>
#include<sstream>
#include<vector>
#include "Calculator2.h"
using namespace std;
#pragma warning(disable:4996)

int main()
{
	cout << "Calculator Console Application" << endl << endl;
	cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;
	cout << "Press \"ctrl + c\" to exit the program" << endl << endl;

    Calculator cal;

    while (1)
    {
        string strstring;
        cout << "input>> " << endl;
        cin >> strstring;

        char separator = ' ';

        if (strstring.find("+")!= string::npos)
        {
            separator = '+';
        }
        else if (strstring.find("-") != string::npos)
        {
            separator = '-';
        }
        else if (strstring.find("*") != string::npos)
        {
            separator = '*';
        }
        else if (strstring.find("/") != string::npos)
        {
            separator = '/';
        }
        
        int cur_position = 0;
        int position;
        double iresult1 = 0;
        double iresult2 = 0;

        while ((position = strstring.find(separator, cur_position)) != string::npos) { // find 함수를 통해 separator 찾아냄
            int len = position - cur_position;
            string result = strstring.substr(cur_position, len);
            stringstream ssDouble(result);
            ssDouble >> iresult1; // string => int
           // cout << iresult1 << endl;
            cur_position = position + 1;
        }

        //cout << separator << endl;
        string result = strstring.substr(cur_position);
        stringstream ssDouble(result);
        ssDouble >> iresult2; // string => int
        //cout << iresult2 << endl;

        cal.Calculate(iresult1, separator, iresult2);
    }
    
	return 0;
}
