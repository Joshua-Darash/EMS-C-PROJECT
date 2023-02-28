#include <stdio.h>
#include <strings.h>
#include <windows.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>


#define percentofpaye 0.05
#define percentofnssf 0.04

#define ENTER 13
#define TAB 9
#define BKSP 8


struct{
    int id;
    char name[20];
    char username[20];
    char password[20];
    char address[20];
    char number[20];
    char email[25];
    char event[20];
    char venu[20];
    char date[20];
    float amount;
    int basicpay, allowance, grossalary, netsalary;
    int paye, nssf;
    int deposit, num;
}s, s1, p;

void signup();
void change();
void Time();
void menu();
void event_type();
void Exit();
void venue();
void add_records();

void client();
void add_client();
void client_list();
void booking();
void noofrec();
void search_client();
void update_cilent();
void delete_client();

void staff();
void staff_list();
void add_staff();
void staff_payroll();
void staff_salary();
void update_staff();
void update_payroll();
void delete_staff();
void delete_payroll();

void admin();
void admin2();
void admin_staff();
void admin_client();
void payments();

void gotoxy(int x ,int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}


int main()
{

    FILE *fx;
    time_t now;
    time(&now);
    char username[20];
    char password[100];
    int choice, i;

    system("color 5e");
 a:
    gotoxy(15,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    printf("\n\t\t@@ By: OMIA MOSES 2001600021\n\t\t BONGO JOSHUA 2001600003\n\t\t NAHURIRA DIDAS 2001600022\n\t\t KISITU RASHID 2001600011");

    printf("\n\n\t");
    for(i=0;i<100;i++) //this loop is for making a line of #.
    {
    printf("#");
    Sleep(10);
    }

    printf("\n\n\n\t\t\t\t-----------------------WELCOME-------------------------\n\n\n\t\t\t-------------------TO EXECUTIVE EVENTS MANAGEMENT COMPANY------------------\n\n\n");
    printf("\n\t\t\t\tTHANK YOU FOR JOINING TO OUR EVENTS COMPANY\n\t");

    for(i=0;i<100;i++) //this loop is for making a line of #.
    {
    printf("#");
    Sleep(10);
    }

    printf("\n\n\tLOGIN MENU <<<EXPLORING THE WORLD OF CODING>>>\n\n\t<1> Login\t<2> Change Password\t<3> Signup\n\n\t<4> About us\t<5> Our contact\t\t<0> Exit\n\n\t:~ ");

    fflush(stdin);
    gotoxy(10,28);
    scanf("%d",&choice);
    system("cls");

    switch(choice)
    {
        case 1:
            fflush(stdin);
         b:     gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

            if((fx = fopen("PASSWORD.text","rb")) == NULL)
            {
                perror("fopen\n");
                exit(EXIT_FAILURE);
            }
            {
            gotoxy(22,16);
            printf("USERNAME: ");
            gotoxy(31,16);
            scanf("%s",username);
            gotoxy(22,18);
            printf("PASSWORD: ");
            gotoxy(31,18);
            scanf("%s",password);

            while(fread(&s,sizeof(s),1,fx)==1)
            {
                if(strcmp(username,s.username)==0)
                {
                    if(strcmp(password,s.password)==0)
                    {
                        gotoxy(22,20);
                        printf("<<<<<ACCESS ALLOWED>>>>> ..");
                        Sleep(2000);
                        system("cls");
                        menu();
                    }
                }
                system("cls");
    gotoxy(9,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

                Beep(610,300);
                gotoxy(22,16);
                printf("<<<<<ACCESS DENIED>>>>> ..");
                Sleep(2000);
                system("cls");
                goto b;
                }
            }
            fclose(fx);
            break;

        case 2:
            change();
            break;

        case 3:
            signup();
            break;

        case 4:
            system("cls");
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

            printf("\n\n\t\t___ABOUT US___\n\n\tWe are full service events management company dedicated to providing unique, creative and quality\n\tservice around any budget.\n\n\n\n\t\t___OUR MOTTO___\n\n\tOur customers needs and expectations are our first priority.\n");
            printf("\n\n\n\n\n\t>>>>>>>>>>PLEASE PRESS 0) BACK\n");
            getch();
            system("cls");
            goto a;
        break;

        case 5:
            system("cls");
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

            printf("\n\n\t\t___OUR CONTACTS___\n\n\t   Phone: +256787439888, +256753755295\n\n\t   Email: executiveevents@gmail.com\n\n\t   Address: SUN, Arapai, Soroti, Uganda\n\n\t   Website: www.executiveevents.com\n");
            printf("\n\n\n\n\n\t>>>>>>>>>>PLEASE PRESS 0) BACK\n");
            getch();
            system("cls");
            goto a;
        break;

        case 0:
            Exit();
        break;

        default:
            Beep(610,300);
            printf("\n\n\tINVALID CHOICE! PRESS THE SPACE-BAR TO GO BACK");
            getch();
            system("cls");
            goto a;
        break;
    }

    return 0;
}

void signup()
{
    time_t now;
    time(&now);
    FILE *fx;

    system("cls");
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    if((fx = fopen("PASSWORD.text","wb+"))==NULL)
    {
        perror("fopen\n");
        exit(EXIT_FAILURE);
    }
    {
        gotoxy(22,16);
        printf("USERNAME: ");
        gotoxy(31,16);
        scanf("%s",s.username);
        gotoxy(22,18);
        printf("PASSWORD: ");
        gotoxy(31,18);
        scanf("%s",s.password);
        fwrite(&s,sizeof(s),1,fx);
        fflush(stdin);
    }
    fclose(fx);
    gotoxy(23,22);
    printf("<<<<<<<ACCOUNT COMPLETED SUCCESSIFULLY>>>>>>>>");
    Sleep(1500);
    gotoxy(23,25);
    printf("<<<PRESS 0 TO CONTINUE>>>");
    getch();
    system("cls");
    main();
    }

void change()
{
    time_t now;
    time(&now);
    FILE *fx,*fn;
    char password[20];
    int result = 0;

    system("cls");

    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    if((fx = fopen("PASSWORD.text","rb"))==NULL)
    {
        perror("fopen\n");
        exit(EXIT_FAILURE);
    }

    if((fn = fopen("TEMP PASSWORD.text","wb"))==NULL)
    {
        perror("fopen\n");
        exit(EXIT_FAILURE);
    }

    gotoxy(22,18);
    printf("OLD PASSWORD: ");
    gotoxy(36,18);
    scanf("%s",password);

    while(fread(&s,sizeof(s),1,fx)==1)
    {
        if(strcmp(password,s.password)==0)
        {
            result = 1;
            gotoxy(22,20);
            printf("<<<<<INFORMATION MATCHED!>>>>> ..");
            Sleep(2000);

            gotoxy(22,22);
            printf("NEW PASSWORD: ");
            scanf("%s",s.password);

            gotoxy(22,24);
            printf("CONFIRM NEW PASSWORD: ");
            scanf("%s",password);

            fwrite(&s,sizeof(s),1,fn);
            fflush(stdin);
        }
    }
    fclose(fn);
    fclose(fx);

    if(result)
    {
        fn = fopen("TEMP PASSWORD.text","rb");
        fx = fopen("PASSWORD.text","wb");

        while(fread(&s, sizeof(s), 1, fn)==1)
        {
            fwrite(&s, sizeof(s), 1, fx);
        }
        fclose(fn);
        fclose(fx);

        system("cls");
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

        gotoxy(22,16);
        printf("<<<<<PASSWORD CHANGED SUCCESIFULLY!>>>>> ..");
        Sleep(2000);

        gotoxy(22,19);
        printf("<<<PRESS 0 TO CONTINUE>>>");
        getch();
        system("cls");
        main();
    }

    else
    system("cls");
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,34);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,36);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,38);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,40);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    gotoxy(22,18);
    printf("<<<<<<ACCESS DENIED!>>>>>");
    Sleep(2000);
    change();
  }


void Exit()
{
    time_t now;
    time(&now);

    printf("\a");
    system("cls");
    Sleep(500);

    Sleep(500);
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    gotoxy(15,10);
    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
    gotoxy(23,15);
    printf("****** THANK YOU FOR CHOOSING OUR SERVICE ******");
    gotoxy(15,20);
    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");

    Sleep(2600);
    system("cls");
    system("color 0F");
    exit(0);
}


void menu()
{
    time_t now;
    time(&now);
    int m;
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");
    gotoxy(30,5);
    printf("MAIN MENU\n\t\t  _______________________________________\n\n\t\t\t  < 1> *CHECK EVENT TYPES\n\n\t\t\t  < 2> *SERVICES AVAILABLE\n\t\t\t  < 3> *CHECK VENUE\n\t\t\t  < 4> *BOOKING\n\t\t\t  < 5> *CLIENTS' RECORDS\n\t\t\t  < 6> *STAFFS' RECORDS\n\t\t\t  < 7> *PAYMENTS/BILLS\n\t\t\t  < 8> *ADMIN\n\t\t\t  < 9> *PROMOTIONS\n\n\t\t\t  < 10> Exit\n\t\t\t  < 0> Restart\n\n\t\t\t  :~ ");
    gotoxy(28,22);
    scanf("%d",&m);

    gotoxy(8,30);
    printf("@@@@@@@ ALL RIGHTS RESERVED *executive events company@@@@@ %s",ctime(&now));
    switch(m)
    {
        case 1:
            system("cls");
            event_type();
        break;


        case 2:
            system("cls");

    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

            printf("\n\t>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\t\tSERVICES OFFERED\n\n\t>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
            printf("\n\t  a) SOUND SYSTEM\n\t  b) VEHICLE HIRE\n\t  c) TENTS\n\t  d) UTENSILS\n\t  e) FOOD AND DRINKS *+(ALL KINDS)\n\t  f) VIDEO COVERAGE\n");
            printf("\n\t>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n"); Sleep(1500);
            printf("\n\n\t<<<PRESS ANY KEY TO GO BACK>>>");
            getch();
            system("cls");
            menu();
        break;

        case 3: venue();
        break;

        case 4: booking();
        break;

        case 5: client();
        break;

        case 6: staff();
        break;

        case 7: payments();
        break;

        case 8: admin();
        break;

        case 9:
            system("cls");
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

            printf("\n\n\t\t\t**PROMOTION**");
            printf("\n\t***********************************************************************************");
            printf("\n\t THE PROMOTIONS AVAILABLE ARE AS FOLLOWS; \n\n\t -> If you book and make payments for marriage event type; chairs, plates and tents \n\t    will be provided at free cost.\n ");
            printf("\n\t -> For anniversary celebrations; transport will be provided at free cost.\n\n\t Thank you for choosing our service.\n");

            Sleep(1000);
            printf("\n\n\n\n\t <<<PRESS ANY KEY TO GO BACK>>>");
            getch();
            system("cls");
            menu();
        break;

        case 10:
            system("cls");
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

            Exit();
        break;

        case 0:
            system("cls");
            main();
        break;

        default:
            system("cls");
            Beep(610,300);
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");
            printf("\n\n\tInvalid choice!  press Space-bar key to try again");
            getch();
            system("cls");
            menu();
        break;
    }
}


void event_type()
{
    time_t now;
    time(&now);
    int e;
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    printf("\n\n\t*CHOOSE THE EVENT TYPE YOU WANT TO WANT CHECK\n\t_____________________________________________\n\n\t  <1> MARRIAGE\n\t  <2> FARMILY FUNCTION\n\t  <3> WEDDING ANNIVERSARY CELEBRATION\n\t  <4> BIRTHDAY PARTY\n\t <<0>> BACK\n\n\t  :~ ");
    fflush(stdin);
    scanf("%d",&e);

    switch(e)
    {
        case 1:
            system("cls");
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

            printf("\n\n\t\tMARRIAGE EVENT:\n\n\t\tcost:  UGX.9,000,000\n\n\t\tVenue: *It varies according to customer's interest*\n");
            printf("\n\n\t\t****** DISCOUNT IS AVAILABLE ******\n");
            printf("\n\n\n\t\t<<<PRESS ANY KEY TO GO BACK>>>\n");
            getch();
            system("cls");
            event_type();
        break;

        case 2:
            system("cls");
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");
            printf("\n\n\t\tFAMILY FUNCTION:\n\n\t\tcost:  UGX.7,000,000\n\n\t\tVenue: *It varies according to customer's interest*\n");
            printf("\n\n\n\t\t<<<PRESS ANY KEY TO GO BACK>>>\n");
            getch();
            system("cls");
            event_type();
        break;

        case 3:
            system("cls");
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

            printf("\n\n\t\tANNIVERSARY CELEBRATION:\n\n\t\tcost:  UGX.15,000,000\n\n\t\tVenue: *It varies according to customer's interest*\n");
            printf("\n\n\t\t****** DISCOUNT IS AVAILABLE ******\n");
            printf("\n\n\n\t\t<<<PRESS ANY KEY TO GO BACK>>>\n");
            getch();
            system("cls");
            event_type();
        break;

        case 4:
            system("cls");
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

            printf("\n\n\t\tBIRTHDAY PARTY\n\n\t\tcost:  UGX.2,500,000\n\n\t\tVenue: *It varies according to customer's interest*\n");
            printf("\n\n\n\t\t<<<PRESS ANY KEY TO GO BACK>>>\n");
            getch();
            system("cls");
            event_type();
        break;

        case 0:
            system("cls");
            menu();
        break;

        default:
            Beep(610,300);
            system("cls");
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

            printf("\n\n\tInvalid choice!  press Space-bar key to try again");
            getch();
            system("cls");
            event_type();
        break;
    }
}


void venue()
{
    system("cls");
    time_t now;
    time(&now);
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    printf("\n\tTHIS ARE SOME OF OUR RECOMMENDED VENUES:");

    printf("\n\n\t\t-------------------------------------------------------------");
    printf("\n\t\tVenue Name:     Executive Hotel");
    printf("\n\n\t\tVenue Address:  Arapai, Soroti city");
    printf("\n\n\t\tCapacity:       20,000 people");
    printf("\n\t\t-------------------------------------------------------------");

    printf("\n\n\t\tVenue Name:     Platinum Resort");
    printf("\n\n\t\tVenue Address:  Layibi, Gulu city");
    printf("\n\n\t\tCapacity:       1,000,000 people");
    printf("\n\t\t-------------------------------------------------------------");

    printf("\n\n\t\tVenue Name:     A-one Hotel");
    //scanf("%s",&name);
    printf("\n\n\t\tVenue Address:  Agulu division, Apac town, Apac municipality");
    //scanf("%s",&address);
    printf("\n\n\t\tCapacity:       10,000 people");
    //scanf("%d",&date);
    printf("\n\t\t-------------------------------------------------------------");

    printf("\n\n\n\t\n PRESS 0) BACK");
    getch();
    system("cls");
    menu();
}


void client()
{
    system("cls");
    time_t now;
    time(&now);

    int choice;
    gotoxy(9,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    printf("\n\n\tCLIENTS' INFORMATION\n\n\t  <1> CLIENTS' LIST\n\t  <2> ADD NEW CLIENT\n\t  <3> SEARCH CLIENT'S RECORD\n\t  <4> UPDATE CLIENT'S RECORD\n\n\t  <0> PREVIOUS\n\n\t  :~ ");
    gotoxy(12,14);
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            client_list();
            printf("\n\n\n\n\n\t*******PLEASE PRESS 0) BACK\n");
            getch();
            system("cls");
            client();
        break;

        case 2:
            add_client();
            printf("\n\n\n\tPLEASE PRESS 0) BACK (CLIENTS' INFORMATION)");
            getch();
            system("cls");
            client();
        break;

        case 3:
            search_client();
            printf("\n\n\n\n\n\t******* PRESS 0) BACK\n");
            getch();
            system("cls");
            client();
        break;

        case 4:
            update_cilent();
            printf("\n\n\n\t PRESS 0) BACK (CLIENTS' INFORMATION)");
            getch();
            system("cls");
            client();
        break;

        case 0:
            system("cls");
            menu();
        break;

        default:
            Beep(610,300);
            printf("\n\n\tInvalid choice!  press Space-bar key to try again");
            getch();
            system("cls");
            client();
        break;
    }
}


void add_client()
{
      time_t now;
    time(&now);
    system("cls");
    int i, n;
    FILE *f;
    gotoxy(9,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    if((f = fopen("clients.text","ab"))==NULL)
    {
        perror("fopen\n");
        exit(EXIT_FAILURE);
    }

    printf("\n\n\tEnter the number of clients you want to add: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)  //This loop is used to add clients records
    {
        fflush(stdin);

        printf("\n\n\tEnter the details of new client %d", i+1);
        printf("\n\n\t\tFull Names:  ");
        gets(s.name);

        printf("\n\t\tAddress(Place of residence):  ");
        gets(s.address);

        printf("\n\t\tMobile No.:  ");
        gets(s.number);

        printf("\n\t\tEmail:  ");
        gets(s.email);

        printf("\n\t\tEvent type:  ");
        gets(s.event);

        printf("\n\t\tSelected venue:  ");
        gets(s.venu);
        printf("\n\t\tAmount paid:  ");
        scanf("%f",&s.amount);

        fwrite(&s,sizeof(s),1,f);
        fflush(stdin);
    }

    fclose(f);

    printf("\n\n\t<1> SUBMIT.\n");
    getch();
    printf("\n\n\tPLEASE WAIT, SUBMITTING......");
    Sleep(2000);

    system("cls");
    printf("\n\n\tSubmission successful..");
}


void client_list()//This function is used to list all clients' records
{
      time_t now;
    time(&now);
    FILE *f;
    int i;
    gotoxy(9,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    if((f = fopen("clients.text","rb"))==NULL)
    {
        perror("fopen\n");
        exit(EXIT_FAILURE);
    }
    system("cls");
    gotoxy(9,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");
    printf("\n\n\t\t\t\t\t******** CLIENTS' LIST ********\n\n\t");

    for(i=0;i<149;i++) //this loop is for making a line of stars.
    {
    printf("*");
    Sleep(10);
    }

    printf("\n\t NAME\t\t     ADDRESS\t\tMOBILE NUMBER\t  EMAIL ADDDRESS\t  EVENT TYPE\t\t    SELECTED VENUE\t  AMOUNT PAID\n\t"); //Title for clients' record

    for(i=0;i<149;i++) //this loop is for making a line of stars.
    {
    printf("*");
    Sleep(10);
    }

    while(fread(&s,sizeof(s),1,f)==1) //this loop is for displaying clients' record.
    {
        printf("\n\t %-20s %-18s %-17s %-23s %-25s %-21s UGX.%12.2f\n\t", s.name, s.address, s.number, s.email, s.event, s.venu, s.amount);

        for(i=0;i<149;i++) //this loop is for making a dotted line.

    printf("*");


    }

    fclose(f);
}


void noofrec_client()
{
    FILE *f;
    f = fopen("clients.text","rb");

    fseek(f, 0, SEEK_END);
    int n = ftell(f)/sizeof(s);
    printf("\n\n\t\tNo. of clients' records = %d", n);

    fclose(f);
}


void search_client()
{
      time_t now;
    time(&now);
    FILE *f;
    int i;
    char nem[20];
    int result = 0;
    gotoxy(9,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");
    if((f = fopen("clients.text","rb"))==NULL)
    {
        perror("fopen\n");
        exit(EXIT_FAILURE);
    }

    system("cls");
    fflush(stdin);
    gotoxy(9,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    printf("\n\tEnter the name you want to search:  ");
    gets(nem);

    printf("\n\n\t");
    for(i=0;i<155;i++) //this loop is for making a line of stars.
    printf("*");

    printf("\n\t NAME\t\t     ADDRESS\t\tMOBILE NUMBER\t  EMAIL ADDDRESS\t  EVENT TYPE\t\t    SELECTED VENUE\t  AMOUNT PAID\n\t"); //Title for clients' record

    for(i=0;i<155;i++) //this loop is for making a line of stars.
        printf("*");

    while(fread(&s,sizeof(s),1,f)==1) //this loop is for displaying the searched client's record.
    {
        if(strcmp(nem,s.name) == 0)
        {
            result = 1;
            printf("\n\t %-20s %-18s %-17s %-23s %-25s %-21s UGX.%12.2f\n\t", s.name, s.address, s.number, s.email, s.event, s.venu, s.amount);

            for(i=0;i<155;i++) //this loop is for making a dotted line.
                printf("-");
        }
    }
    if(!result)
        printf("\n\tRECORD NOT FOUND!");

    fclose(f);
}


void update_cilent()
{
      time_t now;
    time(&now);
    FILE *f, *f1;

    char nem[20];
    int result = 0;
    gotoxy(9,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    if((f = fopen("clients.text","rb"))==NULL)
    {
        perror("fopen\n");
        exit(EXIT_FAILURE);
    }
    if((f1 = fopen("temp clients.text","wb"))==NULL)
    {
        perror("fopen\n");
        exit(EXIT_FAILURE);
    }

    system("cls");
    fflush(stdin);
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    printf("\n\tEnter the name of client you want to update:  ");
    gets(nem);

    while(fread(&s,sizeof(s),1,f)==1) //this loop is for displaying clients' record.
    {
        if(strcmp(nem,s.name) == 0)
        {
            result = 1;
            fflush(stdin);

            printf("\n\n\tENTER THE CLIENT'S NEW RECORD");
            printf("\n\n\t\tNew name: ");
            gets(s.name);

            printf("\n\t\tNew address(Place of residence): ");
            gets(s.address);

            printf("\n\t\tNew mobile No.: ");
            gets(s.number);

            printf("\n\t\tNew email: ");
            gets(s.email);

            printf("\n\t\tNew event type: ");
            gets(s.event);

            printf("\n\t\tNew selected venue: ");
            gets(s.venu);

            printf("\n\t\tNew amount paid:  ");
            scanf("%f",&s.amount);
        }
        fwrite(&s, sizeof(s), 1, f1);
        fflush(stdin);
    }

    fclose(f);
    fclose(f1);

    if(result)
    {
        f1 = fopen("temp clients.text","rb");
        f = fopen("clients.text","wb");

        while(fread(&s, sizeof(s), 1, f1)==1)
        {
            fwrite(&s, sizeof(s), 1, f);
        }

        fclose(f1);
        fclose(f);

        printf("\n\n\t<1> SUBMIT.\n");
        getch();
        printf("\n\n\tPLEASE, SUBMITTING.....");
        Sleep(2000);

        system("cls");
        printf("\n\n\tSUBMISSION SUCCESIFULLY..");

    }
    else
    {
        fflush(stdin);
        printf("\n\tRECORD NOT FOUND!");
    }
}


void delete_client()
{
      time_t now;
    time(&now);
    FILE *f, *f1;
    int i;
    char nem[20];
    int found = 0;
    gotoxy(9,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    if((f = fopen("clients.text","rb"))==NULL)
    {
        perror("fopen\n");
        exit(EXIT_FAILURE);
    }
    if((f1 = fopen("temp clients.text","wb"))==NULL)
    {
        perror("fopen\n");
        exit(EXIT_FAILURE);
    }

    system("cls");
    fflush(stdin);
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    printf("\n\tEnter the name of client you want to delete:  ");
    gets(nem);

    printf("\n\n\t");
    for(i=0;i<155;i++) //this loop is for making a line of stars.
    printf("*");

    printf("\n\t NAME\t\t     ADDRESS\t\tMOBILE NUMBER\t  EMAIL ADDDRESS\t  EVENT TYPE\t\t    SELECTED VENUE\t  AMOUNT PAID\n\t"); //Title for clients' record

    for(i=0;i<155;i++) //this loop is for making a line of stars.
        printf("*");

    while(fread(&s,sizeof(s),1,f)==1) //this loop is for reading, displaying and deleting client's record.
    {
        if(strcmp(nem,s.name) == 0)
        {
            found = 1;
            printf("\n\t %-20s %-18s %-17s %-23s %-25s %-21s UGX.%12.2f\n\t", s.name, s.address, s.number, s.email, s.event, s.venu, s.amount);

            for(i=0;i<155;i++) //this loop is for making a dotted line.
            printf("-");
        }
        else
            fwrite(&s, sizeof(s), 1, f1);
    }

    fclose(f);
    fclose(f1);

    if(found)
    {
        f1 = fopen("temp clients.text","rb");
        f = fopen("clients.text","wb");

        while(fread(&s, sizeof(s), 1, f1)==1)
        {
            fwrite(&s, sizeof(s), 1, f);
        }

        fclose(f1);
        fclose(f);

        printf("\n\n\n\t<1> DELETE THE ABOVE RECORD.\n");
        getch();
        printf("\n\n\tPLEASE WAIT, DELETING......");
        Sleep(1000);

        system("cls");
        printf("\n\n\tSUCCESIFULLY DELETED..");
    }
    else
    {
        system("cls");
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");
        fflush(stdin);
        printf("\n\n\tRECORD NOT FOUND!");
        Sleep(2000);
    }
}



void staff()
{
    time_t now;
    time(&now);
    int choose;

    system("cls");
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    printf("\n\n\tSTAFF INFORMATION\n\n\t  <1> VIEW STAFF LIST\n\t  <2> ADD STAFF\n\t  <3> STAFF PAYROLL\n\t  <4> UPDATE STAFF RECORD\n\n\t  <0> PREVIOUS\n\n\t  :~ ");
    gotoxy(12,14);
    scanf("%d", &choose);

    switch(choose)
    {
        case 1:
            staff_list();
            printf("\n\n\n\n\n\t*******please press 0) Back\n");
            getch();
            system("cls");
            staff();
        break;

        case 2:
            add_staff();
            printf("\n\n\n\tPress 0)Back (STAFF INFORMATION)");
            getch();
            system("cls");
            staff();
        break;

        case 3:
            staff_payroll();
            printf("\n\n\n\n\n\t*******please press 0) Back\n");
            getch();
            system("cls");
            staff();
        break;

        case 4:
            update_staff();
            printf("\n\n\n\tPress 0)Back (STAFF INFORMATION)");
            getch();
            system("cls");
            staff();
        break;

        case 0:
            system("cls");
            menu();
        break;

        default:
            Beep(610,300);
            printf("\n\n\tInvalid choice!  press Space-bar key to try again");
            getch();
            system("cls");
            staff();
        break;
    }
}



void staff_list()
{
      time_t now;
    time(&now);
    system("cls");
    int i;
    FILE *fs;
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    printf("\n\n\t\t\t\t********<<< TOP OFFICIALS >>>********\n\n\t\t\tCHIEF EXECUATIVE OFFICER(CEO): BONGO JOSHUA (2001600003)\n\t\t\tMANAGING DIRECTOR(MD): OMIA MOSES (2001600021)\n\t\t\tASSISTANT MD: NAHURIRA DIDAS (2001600020)\n\t\t\tEXECUTIVE SECRETARY: KISITU RASHID (2001600011)\n");
    printf("\n\n\t\t\t\t********<<< STAFF MEMBERS >>>********\n\n\t");

    if((fs = fopen("staff.text","rb"))==NULL)
    {
        perror("fopen\n");
        exit(EXIT_FAILURE);
    }

    for(i=0;i<120;i++)
    {
    printf("*");
    Sleep(10);
    }

    printf("\n\t STAFF ID \tFULL NAME\t\tADDRESS\t\t\tMOBILE NO.\t\tEMAIL ADDRESS\n\t");

    for(i=0;i<120;i++)
    {
    printf("*");
    Sleep(10);
    }

    while(fread(&s1,sizeof(s1),1,fs)==1)
    {
        printf("\n\t %-9d \t%-20s\t%-15s\t\t%-15s\t\t%-20s\n\t", s1.id, s1.name, s1.address, s1.number, s1.email);

        for(i=0;i<120;i++)

    printf("*");

    }

    fclose(fs);

}


void add_staff()
{
      time_t now;
    time(&now);
    system("cls");
    int i, n;
    FILE *fs;
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    if((fs = fopen("staff.text","ab"))==NULL)
    {
        perror("fopen\n");
        exit(EXIT_FAILURE);
    }

    printf("\n\n\tEnter the number of staffs you want to add: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)  //This loop is used to add clients records
    {
        fflush(stdin);

        printf("\n\n\tENTER THE DETAILS OF NEW STAFF %d", i+1);

        printf("\n\n\t\tStaff ID:  ");
        scanf("%d", &s1.id);

        fflush(stdin);
        printf("\n\t\tFull Name:  ");
        gets(s1.name);

        printf("\n\t\tAddress(Place of residence): ");
        gets(s1.address);

        printf("\n\t\tMobile No.: ");
        gets(s1.number);

        printf("\n\t\tEmail Address: ");
        gets(s1.email);

        fwrite(&s1,sizeof(s1),1,fs);
        fflush(stdin);
    }

    fclose(fs);

    printf("\n\n\t<1> SUBMIT.\n");
    getch();
    printf("\n\n\tplease wait, submittng......");
    Sleep(1000);

    system("cls");
    gotoxy(9,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    printf("\n\n\tSUBMISSION SUCCESIFUL..");
}


void pay_staff()
{
      time_t now;
    time(&now);
    system("cls");
    int i, n;
    FILE *fs;
    int a = percentofpaye*100, b = percentofnssf*100;
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

        if((fs = fopen("salary.text","ab+"))==NULL)
    {
        perror("fopen\n");
        exit(EXIT_FAILURE);
    }

    printf("\n\n\tEnter the number of staffs you want to pay: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)  //This loop is used to pay staffs
    {
        printf("\n\n\tENTER THE PAYMENT DETAILS OF THE STAFF MEMBER %d", i+1);
        printf("\n\n\t\tStaff ID:  ");
        scanf("%d",&s1.id);

        fflush(stdin);
        printf("\n\t\tFull Name:  ");
        gets(s1.name);

        printf("\n\t\tBasic Salary:  UGX. ");
        scanf("%d", &s1.basicpay);

        printf("\n\t\tAllowance:  UGX. ");
        scanf("%d", &s1.allowance);

        s1.grossalary = s1.basicpay + s1.allowance;

        s1.paye = percentofpaye * s1.basicpay;
        s1.nssf = percentofnssf * s1.basicpay;

        s1.netsalary = s1.grossalary - (s1.paye + s1.nssf);

        fwrite(&s1,sizeof(s1),1,fs);
        fflush(stdin);
    }

    fclose(fs);

    printf("\n\n\t\tPAYE = %d%% of BASIC SALARY\n\t\tNSSF = %d%% of BASIC SALARY", a, b);

    printf("\n\n\t<1> SUBMIT PAYMENT.\n");
    getch();
    printf("\n\n\tPLEASE WAIT, SUBMITTING......");
    Sleep(1000);

    system("cls");
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    printf("\n\n\tSUBMISSION SUCCESIFULL..");
}


void staff_payroll()
{
  time_t now;
    time(&now);
    system("cls");
    int i;
    FILE *fs;
    int a = percentofpaye*100, b = percentofnssf*100;
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    if((fs = fopen("salary.text","ab+"))==NULL)
    {
        perror("fopen\n");
        exit(EXIT_FAILURE);
    }

    printf("\n\n\t\t\t\t******** STAFF PAYROLL ********\n\n\t");

    for(i=0;i<120;i++)
    {
    printf("*");
    Sleep(10);
    }

    printf("\n\t ID \tNAME\t\t\tBASIC SALARY\t\tALLOWANCE\t\tGROSS SALARY\t\tNET SALARY\n\t");

    for(i=0;i<120;i++)
    {
    printf("*");
    Sleep(10);
    }

    while(fread(&s1,sizeof(s1),1,fs)==1)
    {
        printf("\n\t%-5d \t%-20s\tUGX.%8d\t\tUGX.%8d\t\tUGX.%8d\t\tUGX.%8d\n\t", s1.id, s1.name, s1.basicpay, s1.allowance, s1.grossalary, s1.netsalary);

        for(i=0;i<120;i++)

    printf("*");
    }
    fclose(fs);

    printf("\n\n\t\tPAYE = %d%% of BASIC SALARY\n\t\tNSSF = %d%% of BASIC SALARY", a, b);
}


void staff_salary()
{
      time_t now;
    time(&now);
    system("cls");
    int choice;
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    printf("\n\n\tSALARY INFORMATION\n\n\t  <1> PAY STAFF\n\t  <2> PAYMENT RECORDS\n\t  <0> PREVIOUS\n\n\t  :~ ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            pay_staff();
            printf("\n\n\n\t>>>>>>>PRESS 0) BACK (SALARY INFORMATION)");
            getch();
            system("cls");
            staff_salary();
        break;

        case 2:
            staff_payroll();
            printf("\n\n\n\n\n\t>>>>>>>>PLEASE PRESS 0) BACK\n");
            getch();
            system("cls");
            staff_salary();
        break;

        case 0:
            system("cls");
            menu();
        break;

        default:
            Beep(610,300);
            printf("\n\n\tINALID CHOICE! PRESS THE SPACE-BAR TO TRY AGAIN");
            getch();
            system("cls");
            staff_salary();
        break;
    }
}



void update_staff()
{
      time_t now;
    time(&now);
    FILE *fs, *fs1;

    int id;
    int found = 0;
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    if((fs = fopen("staff.text","rb"))==NULL)
    {
        perror("fopen\n");
        exit(EXIT_FAILURE);
    }
    if((fs1 = fopen("temp staff.text","wb"))==NULL)
    {
        perror("fopen\n");
        exit(EXIT_FAILURE);
    }

    system("cls");
    fflush(stdin);
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    printf("\n\tEnter the ID of the staff recoed you want to update:  ");
    scanf("%d", &id);

    while(fread(&s1,sizeof(s1),1,fs)==1) //this loop is for displaying clients' record.
    {
        if(id == s1.id)
        {
            found = 1;
            fflush(stdin);

            printf("\n\n\tENTER THE STAFF'S NEW RECORD");

            printf("\n\n\t\tNew Staff ID:  ");
            scanf("%d", &s1.id);

            fflush(stdin);
            printf("\n\t\tNew Full Name:  ");
            gets(s1.name);

            printf("\n\t\tNew Address(Place of residence): ");
            gets(s1.address);

            printf("\n\t\tNew Mobile No.: ");
            gets(s1.number);

            printf("\n\t\tNew Email Address: ");
            gets(s1.email);
        }
        fwrite(&s1, sizeof(s1), 1, fs1);
        fflush(stdin);
    }

    fclose(fs);
    fclose(fs1);

    if(found)
    {
        fs1 = fopen("temp staff.text","rb");
        fs = fopen("staff.text","wb");

        while(fread(&s1, sizeof(s1), 1, fs1)==1)
        {
            fwrite(&s1, sizeof(s1), 1, fs);
        }

        fclose(fs1);
        fclose(fs);

        printf("\n\n\t<1> SUBMIT.\n");
        getch();
        printf("\n\n\tPLEASE WAIT, SUBMITTING.....");
        Sleep(1000);

        system("cls");
        printf("\n\n\tSUBMISSION SUCCESIFUL..");

    }
    else
    {
        fflush(stdin);
        printf("\n\n\n\tRECORD NOT FOUND!");
    }
}


void update_payroll()
{
    time_t now;
    time(&now);
    FILE *fs, *fs1;
    int id;
    int found = 0;
    int a = percentofpaye*100, b = percentofnssf*100;
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    if((fs = fopen("salary.text","rb"))==NULL)
    {
        perror("fopen\n");
        exit(EXIT_FAILURE);
    }
    if((fs1 = fopen("temp staff.text","wb"))==NULL)
    {
        perror("fopen\n");
        exit(EXIT_FAILURE);
    }

    system("cls");
    fflush(stdin);
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    printf("\n\tEnter the ID of the staff record you want to update:  ");
    scanf("%d", &id);

    while(fread(&s1,sizeof(s1),1,fs)==1) //this loop is for displaying clients' record.
    {
        if(id == s1.id)
        {
            found = 1;
            fflush(stdin);

            printf("\n\n\tENTER THE NEW PAYMENT DETAILS OF THE STAFF MEMBER");
            printf("\n\n\t\tNew Staff ID:  ");
            scanf("%d",&s1.id);

            fflush(stdin);
            printf("\n\t\tNew Full Name:  ");
            gets(s1.name);

            printf("\n\t\tNew Basic Salary:  UGX. ");
            scanf("%d", &s1.basicpay);

            printf("\n\t\tNew Allowance:  UGX. ");
            scanf("%d", &s1.allowance);

            s1.grossalary = s1.basicpay + s1.allowance;

            s1.paye = percentofpaye * s1.basicpay;
            s1.nssf = percentofnssf * s1.basicpay;

            s1.netsalary = s1.grossalary - (s1.paye + s1.nssf);
        }
        fwrite(&s1, sizeof(s1), 1, fs1);
        fflush(stdin);
    }

    fclose(fs);
    fclose(fs1);

    if(found)
    {
        fs1 = fopen("temp staff.text","rb");
        fs = fopen("salary.text","wb");

        while(fread(&s1, sizeof(s1), 1, fs1)==1)
        {
            fwrite(&s1, sizeof(s1), 1, fs);
        }

        fclose(fs1);
        fclose(fs);

        printf("\n\n\t\tPAYE = %d%% of BASIC SALARY\n\t\tNSSF = %d%% of BASIC SALARY", a, b);

        printf("\n\n\t<1> SUBMIT.\n");
        getch();
        printf("\n\n\tPLEASE WAIT, SUBMITTING......");
        Sleep(1000);

        system("cls");
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

        printf("\n\n\tSUBMISSION SUCCESIFUL..");

    }
    else
    {
        fflush(stdin);
        printf("\n\tRECORD NOT FOUND!");
    }
}



void delete_staff()
{
      time_t now;
    time(&now);
    FILE *fs, *fs1;
    int i;
    int id;
    int found = 0;
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    if((fs = fopen("staff.text","rb"))==NULL)
    {
        perror("fopen\n");
        exit(EXIT_FAILURE);
    }
    if((fs1 = fopen("temp staff.text","wb"))==NULL)
    {
        perror("fopen\n");
        exit(EXIT_FAILURE);
    }

    system("cls");
    fflush(stdin);
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    printf("\n\tEnter the ID of the staff you want to delete:  ");
    scanf("%d", &id);

    printf("\n\n\t");
    for(i=0;i<120;i++)
        printf("*");

    printf("\n\t STAFF ID \tFULL NAME\t\tADDRESS\t\t\tMOBILE NO.\t\tEMAIL ADDRESS\n\t");

    for(i=0;i<120;i++)
        printf("*");

    while(fread(&s1,sizeof(s1),1,fs)==1) //this loop is for reading, displaying and deleting client's record.
    {
        if(id == s1.id)
        {
            found = 1;
            printf("\n\t %-9d \t%-20s\t%-15s\t\t%-15s\t\t%-20s\n\t", s1.id, s1.name, s1.address, s1.number, s1.email);

            for(i=0;i<120;i++)
                printf("-");
        }
        else
            fwrite(&s1, sizeof(s1), 1, fs1);
    }

    fclose(fs);
    fclose(fs1);

    if(found)
    {
        fs1 = fopen("temp staff.text","rb");
        fs = fopen("staff.text","wb");

        while(fread(&s1, sizeof(s1), 1, fs1)==1)
        {
            fwrite(&s1, sizeof(s1), 1, fs);
        }

        fclose(fs1);
        fclose(fs);

        printf("\n\n\n\t<1> DELETE THE ABOVE RECORD.\n");
        getch();
        printf("\n\n\tPLEASE WAIT, DELETING......");
        Sleep(1000);

        system("cls");
        printf("\n\n\tDELETE COMPLETE..");

    }
    else
        {
        fflush(stdin);
        printf("\n\tRECORD NOT FOUND!");
    }
}

void delete_payroll()
{
    time_t now;
    time(&now);
    FILE *fs, *fs1;
    int i, id, found = 0;

    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    if((fs = fopen("salary.text","rb"))==NULL)
    {
        perror("fopen\n");
        exit(EXIT_FAILURE);
    }
    if((fs1 = fopen("temp staff.text","wb"))==NULL)
    {
        perror("fopen\n");
        exit(EXIT_FAILURE);
    }

    system("cls");
    fflush(stdin);
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    printf("\n\tEnter the ID of the staff to delete payment record:  ");
    scanf("%d", &id);

    printf("\n\n\t");
    for(i=0;i<120;i++)
        printf("*");

    printf("\n\t ID \tNAME\t\t\tBASIC SALARY\t\tALLOWANCE\t\tGROSS SALARY\t\tNET SALARY\n\t");

    for(i=0;i<120;i++)
        printf("*");

    while(fread(&s1,sizeof(s1),1,fs)==1) //this loop is for reading, displaying and deleting client's record.
    {
        if(id == s1.id)
        {
            found = 1;
            printf("\n\t%-5d \t%-20s\tUGX.%8d\t\tUGX.%8d\t\tUGX.%8d\t\tUGX.%8d\n\t", s1.id, s1.name, s1.basicpay, s1.allowance, s1.grossalary, s1.netsalary);

            for(i=0;i<120;i++)
                printf("-");
        }
        else
            fwrite(&s1, sizeof(s1), 1, fs1);
    }

    fclose(fs);
    fclose(fs1);

    if(found)
    {
        fs1 = fopen("temp staff.text","rb");
        fs = fopen("salary.text","wb");

        while(fread(&s1, sizeof(s1), 1, fs1)==1)
        {
            fwrite(&s1, sizeof(s1), 1, fs);
        }

        fclose(fs1);
        fclose(fs);

        printf("\n\n\n\t<1> DELETE the above record.\n");
        getch();
        printf("\n\n\tPLEASE WAIT, DELETING......");
        Sleep(1000);

        system("cls");
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");
        printf("\n\n\t>>>>>>DELETE  COMPLETE..");
    }
    else
      {
        fflush(stdin);
        printf("\n\tRECORD NOT FOUND!");
    }
}


void noofrec_staff()
{
    FILE *fs;
    fs = fopen("staff.text","rb");

    fseek(fs, 0, SEEK_END);
    int n = ftell(fs)/sizeof(s1);
    printf("\n\n\t\tNo. of staffs' records = %d", n);

    fclose(fs);
}


void admin_staff()
{
    time_t now;
    time(&now);
    int choose;

    system("cls");
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    printf("\n\n\tSTAFFS' RECORDS\n\n\t  <1> VIEW STAFF LIST\n\t  <2> ADD STAFF\n\t  <3> STAFF PAYROLL\n\t  <4> PAY STAFF\n\t  <5> UPDATE STAFF LIST\n\t  <6> UPDATE STAFF PAYROLL\n\n\t  <7> DELETE STAFF RECORD\n\t  <8> DELETE STAFF PAYMENT\n\n\t  <0> PREVIOUS\n\n\t  :~ ");
    gotoxy(12,19);
    scanf("%d", &choose);

    switch(choose)
    {
        case 1:
            staff_list();
            printf("\n\n\n\n\n\t>>>>>>>>>>PRESS 0) BACK\n");
            getch();
            system("cls");
            admin_staff();
        break;

        case 2:
            add_staff();
            printf("\n\n\n\t>>>>>>>>>> PRESS 0) BACK(STAFFS' RECORDS)");
            getch();
            system("cls");
            admin_staff();
        break;

        case 3:
            staff_payroll();
            printf("\n\n\n\n\n\t>>>>>>>>>>PLEASE PRESS 0) BACK\n");
            getch();
            system("cls");
            admin_staff();
        break;

        case 4:
            pay_staff();
            printf("\n\n\n\t>>>>>>>>>>PLEASE PRESS 0) BACK(STAFFS' RECORDS)");
            getch();
            system("cls");
            admin_staff();
        break;

        case 5:
            update_staff();
            printf("\n\n\n\t>>>>>>>>>>PLEASE PRESS 0) BACK(STAFFS' RECORDS)");
            getch();
            system("cls");
            admin_staff();
        break;

        case 6:
            update_payroll();
            printf("\n\n\n\t>>>>>>>>>>PRESS 0) BACK(STAFFS' RECORDS)");
            getch();
            system("cls");
            admin_staff();
        break;

        case 7:
            delete_staff();
            printf("\n\n\n\t>>>>>>>>>>PRESS 0) BACK(STAFFS' RECORDS)");
            getch();
            system("cls");
            admin_staff();
        break;

        case 8:
            delete_payroll();
            printf("\n\n\n\t>>>>>>>>>>PRESS 0) BACK (STAFFS' RECORDS)");
            getch();
            system("cls");
            admin_staff();
        break;

        case 0:
            system("cls");
           admin2();
        break;

        default:
            system("cls");
            Beep(610,300);
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

            printf("\n\n\tInvalid choice!  press Space-bar key to try again");
            getch();
            system("cls");
            admin_staff();
        break;
    }
}

void admin_client()
{
    time_t now;
    time(&now);
    int choose;

    system("cls");
    gotoxy(2,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    printf("\n\n\tCLIENTS' RECORDS\n\n\t  <1> VIEW CLIENTS' LIST\n\t  <2> ADD CLIENT\n\t  <3> SEARCH CLIENT\n\t  <4> UPDATE CLIENT LIST\n\n\t  <5> DELETE CLIENT RECORD\n\n\t  <0> PREVIOUS\n\n\t  :~ ");
    gotoxy(12,16);
    scanf("%d", &choose);

    switch(choose)
    {
        case 1:
            client_list();
            printf("\n\n\n\n\n\t>>>>>>>>>>PLEASE PRESS 0) BACK\n");
            getch();
            system("cls");
            admin_client();
        break;

        case 2:
            add_client();
            printf("\n\n\n\t>>>>>>>>>>PLEASE PRESS 0) BACK (CLIENTS' RECORDS)");
            getch();
            system("cls");
            admin_client();
        break;

        case 3:
            search_client();
            printf("\n\n\n\n\n\t>>>>>>>>>>PLEASE PRESS 0) BACK\n");
            getch();
            system("cls");
            admin_client();
        break;

        case 4:
            update_cilent();
            printf("\n\n\n\t>>>>>>>>>>PRESS 0) BACK (CLIENTS' RECORDS)");
            getch();
            system("cls");
            admin_client();
        break;

        case 5:
            delete_client();
            printf("\n\n\n\t>>>>>>>>>>PRESS 0) BACK (CLIENTS' RECORDS)");
            getch();
            system("cls");
            admin_client();
        break;

        case 0:
            system("cls");
           admin2();
        break;

        default:
            system("cls");
            Beep(610,300);
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

            printf("\n\n\tINVALID CHOICE!  PRESS SPACE-BAR TO TRY AGAIN");
            getch();
            system("cls");
            admin_client();
        break;
    }
}

void admin2()
{
    time_t now;
    time(&now);
    int choose;

    system("cls");
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    printf("\n\n\tADMINISTRATOR ACCOUNT\n\n\t  <1> STAFFS' RECORDS\n\t  <2> CLIENTS' RECORDS\n\t  <3> NO. OF STAFFS\n\t  <4> NO. OF CLIENTS\n\n\t  <0> PREVIOUS\n\n\t  :~ ");
    scanf("%d", &choose);


        switch(choose)
            {
        case 1:
            system("cls");
            admin_staff();
        break;

        case 2:
            system("cls");
            admin_client();
        break;

        case 3:
            noofrec_staff();
            printf("\n\n\t\t>>>>>>>>>>PLEASE PRESS 0) BACK\n");
            getch();
            system("cls");
            admin2();
        break;

        case 4:
            noofrec_client();
            printf("\n\n\t\t>>>>>>>>>>PLEASE PRESS 0) BACK\n");
            getch();
            system("cls");
           admin2();
        break;

        case 0:
            system("cls");
            menu();
        break;

        default:
            Beep(610,300);
            printf("\n\n\tINVALID CHOICE!  PRESS SPACE-BAR TO TRY AGAIN");
            getch();
            system("cls");
          admin2();
        break;
    }

}

void admin()
{
    time_t now;
    time(&now);
    int choose;
    char username[20],password[20];
    FILE *fx;
    R:
    system("cls");
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    if((fx = fopen("PASSWORD.text","rb")) == NULL)
            {
                perror("fopen\n");
                exit(EXIT_FAILURE);
            }
            {
            gotoxy(9,9);
            printf("____________________SECURITY AVAILABLE_________________________");
            gotoxy(22,16);
            printf("USERNAME: ");
            gotoxy(31,16);
            scanf("%s",username);
            gotoxy(22,18);
            printf("PASSWORD: ");
            gotoxy(31,18);
            scanf("%s",password);

            while(fread(&s,sizeof(s),1,fx)==1)
            {
                if(strcmp(username,s.username)==0)
                    if(strcmp(password,s.password)==0)
                    {   Sleep(1000);
                        gotoxy(22,20);
                        printf("<<<<<ACCESS GRANTED>>>>> ..");
                        Sleep(1000);
                        gotoxy(22,23);
                        printf("<<<<<YOU ARE WELCOME BOSS TO YOUR SYSTEM>>>>> ..");
                        Sleep(2500);

                        system("cls");
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

                        printf("\n\n\tADMINISTRATOR ACCOUNT\n\n\t  <1> STAFFS' RECORDS\n\t  <2> CLIENTS' RECORDS\n\t  <3> NO. OF STAFFS\n\t  <4> NO. OF CLIENTS\n\n\t  <0> PREVIOUS\n\n\t  :~ ");
                        scanf("%d", &choose);

        switch(choose)
                {
        case 1:
            system("cls");
            admin_staff();
        break;

        case 2:
            system("cls");
            admin_client();
        break;

        case 3:
            noofrec_staff();
            printf("\n\n\t\t>>>>>>>>>>PLEASE PRESS 0) BACK\n");
            getch();
            system("cls");
            admin2();
        break;

        case 4:
            noofrec_client();
            printf("\n\n\t\t>>>>>>>>>>PLEASE PRESS 0) BACK\n");
            getch();
            system("cls");
            admin2();
        break;

        case 0:
            system("cls");
            menu();
        break;

        default:
            Beep(610,300);
            printf("\n\n\tINVALID CHOICE!  PRESS SPACE-BAR TO TRY AGAIN");
            getch();
            system("cls");
           admin2();
        break;
    }
                fclose(fx);
                }
                system("cls");
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

                Beep(610,300);
                gotoxy(22,16);
                printf("<<<<<ACCESS DENIED>>>>> ..");
                Sleep(2000);
                system("cls");
                goto R;
            }}
               fclose(fx);
}


void booking()
{
    time_t now;
    time(&now);

    system("cls");
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    printf("\n\n\tADD CLIENT INFORMATION TO BOOK FOR AN EVENT");
    Sleep(2500);
    add_client();

    printf("\n\n\n\t>>>>>>>>>>PRESS 0) BACK (MAIN MENU)");
    getch();
    system("cls");
    menu();
}


void payments()
{
    time_t now;
    time(&now);
    int choice, deposit, total, paid, acc;
    FILE *fp, *fp1, *fp2;

    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    if((fp = fopen("bills.text","rb"))==NULL)
    {
        perror("fopen\n");
        exit(EXIT_FAILURE);
    }
    if((fp1 = fopen("temp.text","wb"))==NULL)
    {
        perror("fopen\n");
        exit(EXIT_FAILURE);
    }

    system("cls");
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

    printf("\n\n\n\t\tPAYMENTS\n\t  ...................\n\n\t  <1> Deposit\n\n\t  <2> UMEME TOUCH PAY\n\n\t  <3> WATER BILLS\n\n\t  <4> ACCOUNT BALANCE\n\n\t  <0> PREVIOUS\n\n\t  :~ ");
     gotoxy(12,19);
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("\n\n\tEnter the amount you want to deposit\n\tUGX.");
            scanf("%d", &deposit);

            fread(&p, sizeof(p), 1, fp);
                total = deposit + p.deposit;
            fwrite(&p, sizeof(p), 1, fp1);
            fclose(fp1);
            fclose(fp);

            fp1 = fopen("temp.text","rb");
            fp = fopen("bills.text","wb");
            fread(&p, sizeof(p), 1, fp1);
                p.deposit = total;
            fwrite(&p, sizeof(p), 1, fp);
            fclose(fp);
            fclose(fp1);

            printf("\n\n\tYou Have Deposited UGX.%d , Your Total Account Balance is UGX.%d , today %s", deposit, p.deposit, ctime(&now));

            if((deposit - total)>0)
            printf("\n\n\tUGX.%d has been deducted because of the previous uncompleted bill payment", (deposit - total));
            printf("\n\n\n\n\t>>>>>>>>>>PLEASE PRESS 0) BACK\n\t");
            getch();
            system("cls");
            payments();
        break;

        case 2:
            system("cls");
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");

            fp2 = fopen("billrec.text","wb");

            printf("\n\n\tEnter UMEME A/C number\n\t");
            scanf("%d",&p.num);
            acc = p.num;

            printf("\n\tEnter the amount to pay\n\tUGX.");
            scanf("%f",&p.amount);
            paid = p.amount;

            fflush(stdin);
            fwrite(&p, sizeof(p), 1, fp2);
            fclose(fp2);

            fp = fopen("bills.text","rb");
            fp1 = fopen("temp.text","wb");
            fread(&p, sizeof(p), 1, fp);
                total = p.deposit - paid;
            fwrite(&p, sizeof(p), 1, fp1);
            fclose(fp1);
            fclose(fp);

            fp1 = fopen("temp.text","rb");
            fp = fopen("bills.text","wb");
            fread(&p, sizeof(p), 1, fp1);
                p.deposit = total;
            fwrite(&p, sizeof(p), 1, fp);
            fclose(fp);
            fclose(fp1);

            if(p.amount < p.deposit)
            {
                printf("\n\n\tTRANSACTION IN PROGRESS>>>>\n");
                Sleep(1800);
                printf("\n\n\tPayment of UGX.%d has been successfully made to A/C.%d today %s \n\tYour Account Balance is UGX.%d\n\n\tThank you for making payments with us", paid, acc, ctime(&now), p.deposit);
                printf("\n\n\n\n\t>>>>>>>>>>PLEASE PRESS 0) BACK\n\t");
                getch();
                system("cls");
                payments();
            }
            else
            {
                Beep(610,300);
                printf("\n\n\tTRANSACTION IN PROGRESS>>>>\n");
                Sleep(1800);
                printf("\n\n\tYou have insufficient balance in your account!\n\n\tPlease deposit and your remaining bill of UGX.%d will be paid automatically\n", (0 - total));
                printf("\n\n\n\t>>>>>>>>>>PLEASE PRESS 0) BACK\n\t");
                getch();
                system("cls");
                payments();
            }
        break;

        case 3:
            system("cls");
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");
            fp2 = fopen("billrec.text","wb");

            printf("\n\n\tEnter account number\n\t");
            scanf("%d",&p.num);
            acc = p.num;

            printf("\n\tEnter the amount to pay\n\tUGX.");
            scanf("%f",&p.amount);
            paid = p.amount;

            fflush(stdin);
            fwrite(&p, sizeof(p), 1, fp2);
            fclose(fp2);

            fp = fopen("bills.text","rb");
            fp1 = fopen("temp.text","wb");
            fread(&p, sizeof(p), 1, fp);
                total = p.deposit - paid;
            fwrite(&p, sizeof(p), 1, fp1);
            fclose(fp1);
            fclose(fp);

            fp1 = fopen("temp.text","rb");
            fp = fopen("bills.text","wb");
            fread(&p, sizeof(p), 1, fp1);
                p.deposit = total;
            fwrite(&p, sizeof(p), 1, fp);
            fflush(stdin);
            fclose(fp);
            fclose(fp1);

            if(p.amount < p.deposit)
            {
                printf("\n\n\tTRANSACTION IN PROGRESS>>>>\n");
                Sleep(1800);
                printf("\n\n\tPayment of UGX.%d has been successfully made to A/C.%d today %s \n\tYour Account Balance is UGX.%d\n\n\tThank you for making payments with us", paid, acc, ctime(&now), p.deposit);

                printf("\n\n\n\t>>>>>>>>>>PLEASE PRESS 0) BACK\n\t");
                getch();
                system("cls");
                payments();
            }
            else
            {
                system("cls");
    gotoxy(8,33);
    printf("@@@@@@@ ALL RIGHTS RESERVED *2021>>*executive events company@@@@@ %s",ctime(&now));
    gotoxy(8,35);
    printf("<<<<<<<<< OUR CONTACTS >>>>>>>> >>>>>>>>>>>>> >>>>>>>>>>>>>>> >>>>>>>>>>>>>>>>>>>> >>>");
    gotoxy(8,37);
    printf("Phone: +256787439888,\t\t\t\t\t\t  Email: executiveevents@gmail.com ");
    gotoxy(8,39);
    printf("+256753755295 \t\t\t\t\t\t\t  Address: SUN, Arapai,");
    gotoxy(8,41);
    printf("Website: www.executiveevents.com \t\t\t\t  Soroti, Uganda");
    gotoxy(8,2);
    printf("&&&&&&&& EXECUTIVE EVENTS MANAGEMENT COMPANY *@2021&&&&&&&&&&\n");
                Beep(610,300);

                printf("\n\n\tTRANSACTION IN PROGRESS>>>>\n");
                Sleep(1800);
                printf("\n\n\tYou have insufficient balance in your account!\n\n\tPlease deposit and your remaining bill of UGX.%d will be paid automatically\n", (0 - total));
                printf("\n\n\n\t>>>>>>>>>>PLEASE PRESS 0) BACK\n\t");
                getch();
                system("cls");
                payments();
            }
        break;

        case 4:
            fp = fopen("bills.text","rb");
            fread(&p, sizeof(p), 1, fp);
                total = p.deposit;
            fclose(fp);
            printf("\n\n\tYour Account Balance is UGX.%d", total);
            printf("\n\n\n\t>>>>>>>>>>PLEASE PRESS 0) BACK\n\t");
            getch();
            system("cls");
            payments();
        break;

        case 0:
            system("cls");
            menu();
        break;

        default:
            Beep(610,300);
            printf("\n\n\tINVALID CHOICE!  PRESS THE SPACE BAR TO TRY AGAIN");
            getch();
            system("cls");
            payments();
        break;
}

}
