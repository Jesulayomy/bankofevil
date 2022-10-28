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
	int year_of_birth;
	char gender;
	char nationality[15];
	char username[15];
	long long int account_no;
	float balance;
};
