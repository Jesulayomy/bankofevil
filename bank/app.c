#include "main.h"

int main(void)
{
	struct profile layo;
	struct profile emma;

	strcpy(layo.first_name, "Jesulayomi");
	strcpy(layo.last_name, "Aina");
	strcpy(layo.middle_name, "Michael");
	strcpy(layo.nationality, "Nigerian");
	strcpy(layo.username, "Jesulayomy");
	layo.year_of_birth = 2002;
	layo.gender = 'M';
	layo.account_no = getacc();

	strcpy(emma.first_name, "Emmanuel");
	strcpy(emma.last_name, "Aina");
	strcpy(emma.middle_name, "Damilola");
	strcpy(emma.nationality, "Nigerian");
	strcpy(emma.username, "Emmy");
	emma.year_of_birth = 2001;
	emma.gender = 'M';
	emma.account_no = getacc();


	printf("Hello, %s %s %s \n", layo.first_name, layo.middle_name, layo.last_name);
	printf("From: %s \n", layo.nationality);
	printf("Your username is: %s, your gender: %c and year of birth: %d\n", layo.username, layo.gender, layo.year_of_birth);
	printf("%lli is your account number.\n", layo.account_no);

	printf("Hello, %s %s %s \n", emma.first_name, emma.middle_name, emma.last_name);
	printf("From: %s \n", emma.nationality);
	printf("Your username is: %s, your gender: %c and year of birth: %d\n", emma.username, emma.gender, emma.year_of_birth);
	printf("%lli is your account number.\n", emma.account_no);

	return (0);
}
