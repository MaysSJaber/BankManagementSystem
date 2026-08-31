#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsUser.h"
#include <iomanip>
#include "clsMainScreen.h"
#include "Global.h"

class clsLoginScreen :protected clsScreen
{

private:

	static  bool _Login()
	{
		bool LoginFaild = false;
		int FailedTries = 0;
		string Username, Password;
		do
		{

			if (LoginFaild)
			{
				FailedTries++;
				cout << "\nInvlaid Username/Password!\n\n";
				cout << "You have " << 3 - FailedTries << " trials left.\n\n";
			}
			if (FailedTries == 3) {

				cout << "\nYour are Locked after 3 faild trails \n\n";
				return false;
			}

			cout << "Enter Username? ";
			cin >> Username;

			cout << "Enter Password? ";
			cin >> Password;

			CurrentUser = clsUser::Find(Username, Password);

			LoginFaild = CurrentUser.IsEmpty();

		} while (LoginFaild);

		CurrentUser.RegisterLogIn();
		clsMainScreen::ShowMainMenue();
		return true;
	}

public:


	static bool ShowLoginScreen()
	{
		system("cls");
		_DrawScreenHeader("\t  Login Screen");
		return _Login();

	}

};

