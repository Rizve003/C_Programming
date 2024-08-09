/*----------------------------------Temperature Converter----------------------------------*/

#include <stdio.h>

int main()
{

    float temp, cal_c, cal_f, cal_k;
    char act;
    printf("***Temperature Converter***\n");
    printf("Convert to -> 'c' for Celcius & 'f' for Fahrenheit");
    printf("\nEnter Temperature & Symbol: ");
    scanf("%f %c", &temp, &act);

    if (act == 'c')
    {
        if (temp >= 0 || temp < 0)
            cal_c = (temp - 32) * 5 / 9;
        cal_k = cal_c + 273.15;
        printf("%0.3f C\n%0.3f K", cal_c, cal_k);
    }

    else if (act == 'f')
    {
        if (temp >= 0 || temp < 0)
            cal_f = (temp * 9 / 5) + 32;
        cal_k = temp + 273.15;
        printf("%0.3f F\n%0.3f K", cal_f, cal_k);
    }

    return 0;
}

/*-------------------------------------------- Unit Converter--------------------------------------------*/

#include <stdio.h>

int main()
{

    int x;
    double k, i, c, p, in;

label:
    printf("\n*****-----Unit Converter-----*****");
    printf("\n\n(1) Kilometers to miles\n(2) Inches to foots\n(3) Centimeters to inches\n");
    printf("(4) Pounds to kilograms\n(5) Inches to meters\n(6) Exit\n");

    printf("Enter the unit convertion number(1-5): ");
    scanf("%d", &x);

    switch (x)
    {
    case (1):
        printf("\n\n***Kilometers to miles***\n\n Enter the number you want to convert: ");
        scanf("%lf", &k);
        printf("\nYour converted value is: %0.7lf mile", k * 0.6212712);
        break;

    case (2):
        printf("\n\n***Inches to foots***\n\n Enter the number you want to convert: ");
        scanf("%lf", &i);
        printf("\nYour converted value is: %0.8lf foot", i * 0.08333333);
        break;

    case (3):
        printf("\n\n***Centimeters to inches***\n\n Enter the number you want to convert: ");
        scanf("%lf", &c);
        printf("\nYour converted value is: %0.7lf inch", c * 0.3937008);
        break;

    case (4):
        printf("\n\n***Pounds to kilograms***\n\n Enter the number you want to convert: ");
        scanf("%lf", &p);
        printf("\nYour converted value is: %0.8lf kg", p * 0.4535924);
        break;

    case (5):
        printf("\n\n***Inches to meters***\n\n Enter the number you want to convert: ");
        scanf("%lf", &in);
        printf("\nYour converted value is: %0.4lf meter", in * 0.0254);
        break;

    case (6):
        return 0;

    default:
        printf("Enter a valid number");
    }

    goto label;

    return 0;
}

/*---------------------------------------------Calculator_0----------------------------------------------------*/

#include <stdio.h>

int main()
{

    long long int a, b;
    int choice;

    printf("\n****Calculator_0****\n\n");
    printf("1.Addition(+)\n2.Subtraction(-)\n3.Multiplication(*)\n4.Division(/)\n");
    printf("\nEnter any choice(1-4): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\nEnter two number: ");
        scanf("%lld %lld", &a, &b);
        printf("\n%lld + %lld = %lld\n", a, b, a + b);
        break;

    case 2:
        printf("\nEnter two number: ");
        scanf("%lld %lld", &a, &b);
        printf("\n%lld - %lld = %lld\n", a, b, a - b);
        break;

    case 3:
        printf("\nEnter two number: ");
        scanf("%lld %lld", &a, &b);
        printf("\n%lld * %lld = %lld\n", a, b, a * b);
        break;

    case 4:
        printf("\nEnter two number: ");
        scanf("%lld %lld", &a, &b);
        printf("\n%lld / %lld = %lld\n", a, b, a / b);
        break;

    default:

        printf("\nEnter a valid choice!");

        break;
    }
}

/*----------------------------------------------------Calculator_1--------------------------------------------------------*/

#include <stdio.h>

int main()
{
    int a, b;
    char oprtr;
    printf("\n******Calculator_1******\n\n");
    printf("Enter---> ");
    scanf("%d %c %d", &a, &oprtr, &b);

    if (oprtr == '+')
    {
        printf("\n%d + %d = %d\n\n", a, b, a + b);
    }
    else if (oprtr == '-')
    {
        printf("\n%d - %d = %d\n\n", a, b, a - b);
    }
    else if (oprtr == 'x')
    {
        printf("\n%d x %d = %d\n\n", a, b, a * b);
    }

    else if (oprtr == '/')
    {
        printf("\n%d / %d = %d\n\n", a, b, a / b);
    }

    else if (oprtr == '%')
    {
        printf("\n%d %% %d = %d\n\n", a, b, a % b);
    }

    return 0;
}

/*---------------------------------------------Leap Year Checker--------------------------------------------*/

#include <stdio.h>

int main()
{
    int year;
    printf("\n******Leap Year Checker******\n\n");
    printf("\nEnter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("\n%d is a leap year...!\n\n", year);
    }
    else
    {
        printf("\n%d is not a leap year...!\n\n", year);
    }

    return 0;
}


/*--------------------------------------Alphaber Or Number Or Special char--------------------------------------*/

#include <stdio.h>

int main()
{
    char ch;
    printf("\n*****-----Check Alphabet Or Number Or Special Char-----*****\n");
    printf("\nEnter Anything You Want ---> ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("\n%c is a upercase alphabet!\n\n", ch);

        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            printf("%c is a vowel!\n\n", ch);
        }
        else
        {
            printf("%c is a Consonant\n\n");
        }
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("\n%c is a lowercase alphabet!\n\n", ch);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            printf("%c is a vowel!\n\n", ch);
        }
        else
        {
            printf("%c is a Consonant\n\n");
        }
    }

    else if (ch >= '0' && ch <= '9')
    {
        printf("\n%c is a number\n\n", ch);
    }
    else
    {
        printf("\n%c is a special character!\n\n", ch);
    }

    return 0;
}



/*-------------------------------------------------------------End------------------------------------------------*/
