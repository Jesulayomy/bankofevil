#include "main.h"

int main(void)
{
	int menu;
	printf("Welcome to BOE. What would you like to do today\n"
			"1. New Account(in construction)	2. Update account\n"
			"3. View profile			4. Transactions(in construction)\n"
			"5. Customer list(in construction)	6. Exit\n");
	scanf("%d", &menu);

	/* Layo's fixed structs */
	struct profile layo;

	/* Strings */
	strcpy(layo.first_name, "Jesulayomi");
	strcpy(layo.last_name, "Aina");
	strcpy(layo.middle_name, "Michael");
	strcpy(layo.nationality, "Nigerian");
	strcpy(layo.username, "Jesulayomy");
	/* Generate phone no */
	layo.account_no = getacc();
	layo.card_no = getacc();
while (menu != 6)	//loop menu
{
switch (menu)
{
	case 1:
		printf("U N D E R  C O N S T R U C T I O N\n");
		break;
	case 2:
	/* Assignable structs */
	/* Date of birth */
	printf("Enter your date of birth (dd):\n");
	scanf("%d", &layo.dob);
	while (layo.dob <=0 || layo.dob >= 32)
	{
		printf("You have entered an invalid date, please retry\n");
		scanf("%d", &layo.dob);
	}
	printf("Enter your month of birth (mm):\n");
	scanf("%d", &layo.mob);
	while (layo.dob < 1 || layo.mob > 12)
	{
		printf("You have entered an invalid month, please retry\n");
		scanf("%d", &layo.mob);
	}
	printf("Enter your year of birth (yy):\n");
	scanf("%d", &layo.yob);
	while (layo.yob < 1880 || layo.yob > 2022)
	{
		printf("You have entered an invalid year, please retry\n");
		scanf("%d", &layo.yob);
	}
	layo.age = 2022 - layo.yob;
	if (layo.age < 10)	/* Age limit */
	{
		printf("You are not eligible for this program as you are %d years old\n", layo.age);
		return (0);
	}
	/* Gender */
	printf("Enter your gender:\n");
	scanf("%c", &layo.gender);
	while (layo.gender != 70 || layo.gender != 102 || layo.gender != 77 || layo.gender != 109)
	{
		printf("There are two genders, retry\n");
		scanf("%c", &layo.gender);
	}
	/* Numbers */
	printf("Enter your phone number (begin with country code without +):\n");
	scanf("%lli", &layo.phone_number);
	printf("Enter your National Identification Number:\n");
	scanf("%lli", &layo.nin);
	/* Struct assign end */

	case 3:
	/* Profiles */
	printf("Hello, %s %s %s ", layo.first_name, layo.middle_name, layo.last_name);
	printf("From: %s \n", layo.nationality);
	printf("Your username is: %s, your gender: %c and dob: %d/%d/%d\n", layo.username, layo.gender, layo.dob, layo.mob, layo.yob);
	printf("%lli is your account number.\n", layo.account_no);
	printf("%lli is your phone number.\n", layo.phone_number);
	printf("%lli is your National identification number.\n", layo.nin);
	printf("%lli is your card number.\n", layo.card_no);
	break;
	case 4:
	printf("T R A N S A C T I O N S  I N  C O N S T R U C T I O N\n");
	break;
	case 5:
	printf("L I S T  I S  I N  C O N S T R U C T I O N\n");
	break;
	default:
	printf("Invalid selection\n");
}	/* end of switch */
scanf("%d", &menu);
}	/* end of while loop */
	return (0);
}
