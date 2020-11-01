/*Question. You have to go somewhere and you are at the airport. 
You missed your flight and now you have no time to go some other day. 
So, you are filtering 3 or 4 fight to book a ticket. 
Also you have to display your missed flight or departure and your upcoming flight. 
(using your knowledge till now)*/

#include <stdio.h>
#include <stdlib.h>
 

int main()
{
    int PNR, REPLY, AGE, DATE, FLIGHTA, FLIGHTB;
    char NAME;
    printf("***Welcome To The Virtual Airport****\n\n");
    printf("Sir, Please Show me Your Ticket. \nOne monent Sir, While I confirm Your details. \n\n");
    
    printf("Could You Please Enter Your 4 digit PNR: ");
    scanf("%d", &PNR);
    printf("I am really Sorry Sir but, The Flight matching to this %d PNR 6E-512 has already Taken off and its 13:50\n\n", PNR);
    printf("You Can See the Departure Chart here\n");
    printf("Flight NO	|	Arrival		Departure		FROM-TO\n");
    printf("6E-512		|	13:30		14:15			DELHI-CCU\n");
    printf("6E-51		|	14:25		14:55			DELHI-DMV\n");
    printf("6E-26		|	14:40		15:15			DELHI-DUBAI\n\n\n\n");
    
    printf("Sir, Would You like to go today? Enter 1 for YES or 2 for NO\n");
    scanf("%d", &REPLY);
	switch (REPLY)
	{
		case 1:
		printf("Wonerful, Just a moment Sir Let Me refresh the Flight list\n");
		printf("Here are the list of Flight you can choose for Your Boarding\n");
		    printf("Flight NO	Flight NO	|	Arrival		Departure		FROM-TO\n");
		    printf("Indigo		6E-513		|	15:05		15:35			DELHI-CCU\n");
		    
			printf("Connecting......\n");
		    printf("Please Enter Your First NAME: ");
		    scanf("%s", &NAME);
		    printf("Please Enter Your AGE: ");
		    scanf("%d", &AGE);
		    printf("Please Confirm Your Age %d", AGE);
		    system("START https://www.linkedin.com/in/03prashantpk/"); //will add my VBoarding PASS
			
		    
		    break;
		case 2:
			printf("Thank You, Have a Nice Day\n");
	}


printf("\n\n============================");

    return 0;
}

//Created By Prashant Kumar LinkedIn: https://www.linkedin.com/in/03prashantpk/
