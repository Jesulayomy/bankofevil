#include "main.h"

/**
 * profile - user profile 
 * first, middle, last names
 * #age, yearofbirth, gender
 * nationality, #phone, username
 * #email, #address, #password
 * #nin
 */

struct profile
{
	char first_name[15];
	char last_name[15];
	char middle_name[15];
	char nationality[15];
	char username[15];
	char password[11];
	char gender;
	int dob;
	int mob;
	int yob;
	int age;
	long long int account_no;
	long long int card_no;
	long long int phone_number;
	long long int nin;
	float balance;
};
