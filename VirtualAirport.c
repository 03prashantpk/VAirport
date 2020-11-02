/*Question. You have to go somewhere and you are at the airport. 
You missed your flight and now you have no time to go some other day. 
So, you are filtering 3 or 4 fight to book a ticket. 
Also you have to display your missed flight or departure and your upcoming flight. 
(using your knowledge till now)*/

#include <stdio.h>
#include <stdlib.h>
 

int main()
{
    int PNR, REPLY, AGE, PRICE, DONATE, UPI[20], DATE, FLIGHTA, FLIGHTB;
    char NAME[20], LNAME;
    float total;
    printf("\n\n*** Welcome To The Virtual Airport ****\n\n");
    
    
    //FLIGHT PATTERNS STARTS HERE//
    printf(" 	*		*\n");
    printf(" 	**		**\n");
    printf(" 	***		***\n");
    printf("	*****************************\n");
    printf("	***************AIR*************D\n");
    printf("	*****************************\n");
    printf("			****\n");
    printf("			***\n");
    printf("			**\n");
    printf("			*\n\n\n");
    printf("======== Loading.... =========			\n");
    
    
    printf("Sir, Please Show me Your Ticket. \nOne monent Sir, While I confirm Your details. \n\n");
    printf("Could You Please Enter Your 4 digit PNR: ");
    scanf("%d", &PNR);
    printf("I am really Sorry Sir but, The Flight matching to this %d PNR 6E-512 has already Taken off and its 13:50 PM.\n\n", PNR);
    
    
    //FLIGHT CHART SECTIONS STARTS HERE//
    printf("You Can See the Departure Chart here\n");
    printf("Flight NO	|	Arrival		Departure		FROM-TO\n");
    printf("6E-512		|	13:30		14:15			DELHI-CCU\n");
    printf("6E-51		|	14:25		14:55			DELHI-DMV\n");
    printf("6E-26		|	14:40		15:15			DELHI-DUBAI\n\n\n\n");
    
    
    //SWITCHES SECTION STARTS HERE//
    printf("Sir, Would You like to go today? Enter 1 for YES or 2 for NO: ");
    scanf("%d", &REPLY);
	switch (REPLY)
	{
		case 1:
			printf("Wonerful, Just a moment Sir Let Me refresh the Flight list.\n");
			printf("=========================== Scanning Flights ===============================\n");
			printf("Here are the list of Flight you can choose for Your Boarding\n");
		    printf("Flight NO	Flight NO	|	Arrival		Departure		FROM-TO\n");
		    printf("Indigo		6E-513		|	15:05		15:35			DELHI-CCU\n\n\n");
		    
		    //PASSENGER DETAILS SECTION STARTS HERE//
			printf("Connecting......\n");
			printf("=========================== Passenger Details ===============================\n");
		    printf("Please Enter Your Last NAME: ");
		    scanf("%s", &LNAME);
			printf("Please Enter Your First NAME: ");
		    scanf("%s", &NAME);
		    printf("Please Enter Your AGE: ");
		    scanf("%d", &AGE);
		    printf("Please Confirm Your Age %d and Name %s\n\n", AGE, NAME);
		    
		    //PAYMENTS AND DONATIONS STARTS HERE//
		    printf("Connecting......\n");
		    printf("==================== PAYMENTS ====================\n");
		    printf("Calculating You Fair\n");
		    printf("Your Total Fair is Rs.4399\n");
		    printf("Would You Like to DONATE to Fight with COVID19?\n");
		    printf("Enter The Amount from Rs0 to Rs200: Rs");
		    scanf("%d", &DONATE);
		    total = 4399 + DONATE;
		    printf("Now Your Total Amount adding donation is Rs%.2f\n", total);
		    
		    //UPI SECTION STARTS HERE//
		    printf("Now Press 1 to Continue with UPI: ");
    		scanf("%d", &PRICE);
    		if (PRICE = 1){
    			printf("Enter Your UPI: ");
    			scanf("%d", &UPI);
    			printf("Rs%.2f has been deducted from your UPI *********@upi.\n\n\n", total, UPI);
    			
	    		printf("Processig......\n");
			    printf("==================== Printing Your Virtual Boarding Pass ====================\n");
			    
				//Boarding Pass Secction Starts Here//
				printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
				printf("-					VIRTUAL BORDING PASS				-\n");
				printf("Indigo   Our Lowest Fair at IndiGo.in\n\n");
			    printf("Name %s		Flight: Indigo				6E-513\n", NAME);
			    printf("PNR:QJR6789		Seat No: 8A				Extra Service: NA\n");
			    printf("Age %d			Boarding: 15:00 PM			Departure: 15:25 PM\n", AGE);
			    printf("From DELHI		To: CCU					Date: 2 Nov 20\n");
			    printf("GATE: T2\n\n");
			    printf("Thank you %s for choosing indigo today. Please be at the departure gate\nat the indicated Boarding Time\n", NAME);
			    
			    printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
			    
			    printf("Printing Ticket Please Wait.");
			    system("START https://mindsofpk.000webhostapp.com/VBoarding.html"); //will add my VBoarding PASS
			}
			else {
				
			}
		    
		   
			
			break;
		case 2:
			printf("Thank You, Have a Nice Day\n");
			
			//SWITCHES ENDS HERE//
	}

			
			//THANK YOU AND CREDIT STARTS HERE//
			printf("\n\n======================= Exiting VAirport =======================\n");
			printf("Created By: https://www.linkedin.com/in/03prashantpk/");

    return 0;
}

//Created By Prashant Kumar LinkedIn: https://www.linkedin.com/in/03prashantpk//
