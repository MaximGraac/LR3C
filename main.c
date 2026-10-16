#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <ctype.h>
// Task 1. 38
// Task 2. 45
// Task 3. 64
// Task 4. 101 Я не понял как это делать
// Task 5. 49
// Task 6. 27
// Task 7. 41
// Task 8. 97
// Task 9. 88
// Task 10. 20

int lr3task1(void) {
    unsigned short int m=1, d=1;
    printf("38) Enter date (day month)\n");
    if (scanf("%hu %hu", &d, &m) !=2) {
        printf("Invalid input!\n");
        while (getchar() != '\n');
        return lr3task1();
    }
    if (d < 1 || d>31 || m < 1 || m > 12) {
        printf("Invalid date\n"); //В задании не было ничего сказано про февраль
        return lr3task1();
    } else {
        printf("%hu, %hu\n", d, m);
    }
    return 0;
}
int lr3task2(void) {
    int cha=0;
    printf("45) Press any key (Numpad 0/0 to finish task)\n");
    while (cha!=48) {
        cha = _getch();
        if (isalpha((unsigned char)cha)) {
            printf("Pressed letter: %d (%c)\n", cha, cha);
        }
        else if (cha>=49 && cha<=57) {
            printf("Pressed number: %d (%c)\n", cha, cha);
        }
    }
    return 0;
}
int lr3task3(void) {
    double x=0, y=0, z=0, ans1=0, ans2=0, sinval=0, ans3=0, ansf=0, minv=0, maxv=0;
    printf("64) Enter X, Y, Z\n");
    if (scanf("%lf %lf %lf", &x, &y, &z)!=3) {
        printf("Invalid input!\n");
        while (getchar() != '\n');
        return lr3task3();
    }
    //max
        if (x>=y && x>=z) {
            maxv = x;
        } else if (y>=x && y>=z) {
            maxv = y;
        } else {
            maxv = z;
        }
    //min
        if (x<=y && x<=z) {
            minv = x;
        } else if (y<=x && y<=z) {
            minv = y;
        } else {
            minv = z;
        }
    if (minv == 0) {
        printf("No resolves\n");
        return 0;
    }
    ans1 = pow(maxv, 2)-pow(2, x)*minv;
    ans2 = maxv/minv;
    sinval = sin(2*x);
    ans3 = sinval+ans2;
    if (ans3 == 0) {
        printf("No resolves\n");
        return 0;
    } else {
        ansf = ans1/ans3;
        printf("64) u=%.2f\n", ansf);
    }
    return 0;
}
int lr3task5(void) {
    double a=0, b=0, c=0, d=0, q=0;
    printf("49) Enter A, B, C (only positive)\n");
    if (scanf("%lf %lf %lf", &a, &b, &c)!=3) {
        printf("Invalid input!\n");
        while (getchar() != '\n');
        return lr3task5();
    }
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Invalid input!\n");
        return lr3task5();
    } else {
        // Арифметическая
        if (b - a == c - b) {
            d = b - a;
            printf("Arithmetic progression\n");
            printf("d = %.2f\n", d);
        } else {
            printf("Not a arithmetic progression\n");
        }
        // Геометрическая
        if (b * b == a * c) {
            q = b / a;
            printf("Geometric progression\n");
            printf("q = %.2f\n", q);
        } else {
            printf("Not a geometric progression\n");
        }
        return 0;
    }
}
int lr3task6(void) {
    double a=0, b=0, maxv=0, minv=0;
    printf("27) Enter a, b (Not equal to each one)\n");
    if (scanf("%lf %lf", &a, &b)!=2) {
        printf("Invalid input!\n");
        while (getchar() != '\n');
        return lr3task6();
    }
     if (a==b) {
         printf("a is equal to b\n");
         printf("ERROR\n");
         return lr3task6();
    }
    minv = (a+b)/2;
    maxv = 2*(a*b);
    if (a<b) {
        a=minv;
        b=maxv;
    } else {
        a=maxv;
        b=minv;
    }
    printf("a=%g; b=%g\n", a, b);
    return 0;
}
int lr3task7(void) {
    double m=0, n=0;
    printf("41) Enter m and n (only positive)\n");
    if (scanf("%lf %lf", &m, &n)!=2 || m<=0 || n<=0) {
        printf("Invalid input!\n");
        while (getchar() != '\n');
        return lr3task7();
    }
    if (m==n) {
        printf("Packets m and n is equal, nothing to compare\n");
        return 0;
    }
    if (m>n) {
        printf("Packet m is greater than n\n");
        printf("Weight of packet m = %.2f kg\n", m);
        return 0;
    } else {
        printf("Packet n is greater than m\n");
        printf("Weight of packet n = %.2f kg\n", n);
        return 0;
    }
}
int lr3task8(void) {
    double t=0, ph=0;
    printf("97) Enter t\n");
    if (scanf("%lf", &t)!=1) {
        printf("Invalid input!\n");
        while (getchar() != '\n');
        return lr3task8();
    }
    if (t<0 || t>=60) {
        printf("t must be between 0; 60\n");
        return lr3task8();
    }
    ph=fmod(t, 5);
    if (ph<3) {
        printf("Green light\n");
    }
    else {
        printf("Red light\n");
    }
    return 0;
}
int lr3task9(void) {
    double a=0, b=0, c=0;
    printf("88) Enter a, b, c (only positive)\n");
    if (scanf("%lf %lf %lf", &a, &b, &c)!=3 || a<=0 || b<=0 || c<=0) {
        printf("Invalid input!\n");
        while (getchar() != '\n');
        return lr3task9();
    }
    if (c<a+b && b<c+a && a<b+c) {
        printf("Triangle exists with these sides\n");
        return 0;
    } else {
        printf("Triangle not exists\n");
        return 0;
    }

}
int lr3task10(void) {
    int x=0, d1=0, d2=0, d3=0;
    printf("20) Enter x\n");
    if (scanf("%d", &x)!=1) {
        printf("Invalid input!\n");
        while (getchar() != '\n');
        return lr3task10();
    }
    x=abs(x);
    if (x<100 || x>999) {
        printf("x must be 3-digit\n");
        return lr3task10();
    }
    d1=x/100;
    d2=x/10%10;
    d3=x%10;
    if (d1==d2 && d2==d3) {
        printf("a) All digits is same\n");
    } else {
        printf("a) All digits are not same\n");
    }
    if (d1==d2 || d2==d3 || d1==d3) {
        printf("b) Identical digits are present\n");
    } else {
        printf("b) Identical digits are not present\n");
    }
    return 0;
}
int main(void) {
    lr3task1();
    lr3task2();
    lr3task3();
    lr3task5();
    lr3task6();
    lr3task7();
    lr3task8();
    lr3task9();
    lr3task10();
    return 0;
}
