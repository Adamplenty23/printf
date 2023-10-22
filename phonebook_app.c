/* A mini phonebook program */
#include "adam.h"

/*Declaring the struct */
struct contact 
{
	char firstName[20];
	char *streetAddress[40];
	char *country[20];
	long int phoneNumber[20];
};
/* Giving an alias to the struct*/
typedef struct contact s_c;

int main(void)
{
	/*declare the struct*/
	s_c contact[5];

	/*assign the variables for each contact*/
	/*for contact[0]*/
	strcpy(contact[0].firstName, "Adam");
	strcpy(contact[0].streetAddress, "323, orile road");
	strcpy(contact[0].country, "Nigeria");
	contact[0].phoneNumber = 9153377334;
	/*for contact[1]*/
	strcpy(contact[1].firstName, "Yusuf");
	strcpy(contact[1].streetAddress, "419,dopemu str.");
	strcpy(contact[1].country, "Nigeria");
	contact[1].phoneNumber = 9041941966;
	
	/*ask user for their choice*/
	int user_choice;
	
	printf("Press 1 to search for contact. \nPress 2 to create new contact.\n     what is your choice: ");
	scanf("%d", &user_choice);
	if (user_choice == 1)
	{
		/*ask the user the first name of the contact they are klooking for and display it*/
		char user_name[20];

		printf("what's the first name of the contact you are looking for? ");
		scanf("%s", user_name);
		
		printf("Here is the contact you requested for: \n \n ________________________________\n");

		if (strcmp(contact[0], user_name) == 0)
		{
			printf("Name: %s \n", contact[0].firstName);
			printf("Street Address: %s \n", contact[0].streetAddress);
			printf("Country: %s \n", contact[0].country);
			printf("Phone number: %ld \n", contact[0].phoneNumber);
		}
		
		else if (strcmp(contact[1], user_name) == 0)
		{
			printf("Name: %s \n", contact[1].firstName);
			printf("Street Address: %s \n", contact[1].streetAddress);
			printf("Country: %s \n", contact[1].country);
			printf("Phone number: %ld \n", contact[1].phoneNumber);
		}
		else
			printf("sorry, the contact you are looking for does not exist");
	}
	else if (user_choice == 2)
	{
		/*declare an empty variable to store new contact*/
		contact[2].firstName;
		contact[2].streetAddress;
		contact[2].country;
		contact[2].phoneNumber;
		/*ask the user series of questions and save it in the empty variables we created earlier*/
		printf("input the first name of the contact: ");
		scanf("%s", &contact[2].firstName);
		printf("input the street address of the contact: ");
		scanf("%s", &contact[2].streetAddress);
		printf("input the country of the contact: ");
		scanf("%s", &contact[2].country);
		printf("input the phone number of ther user: ");
		scanf("%ld", &contact[2].phoneNumber);
		
		/*then display the contact we have just saved*/
		printf("\nhere is the contact that you just saved\n>>>>>>>>>>"); 
		printf("Name: %s \n", contact[1].firstName);
		printf("Street Address: %s \n", contact[1].streetAddress);
		printf("Country: %s \n", contact[1].country);
		printf("Phone number: %ld \n", contact[1].phoneNumber);
	}
	else 
		printf("unfortunately, the program has crashed");
	return (0);
}


