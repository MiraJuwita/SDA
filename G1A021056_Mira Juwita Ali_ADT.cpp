# include <stdio.h>
# include <conio.h>

int main()
{
    Trapesium t1;
    tr=Trapesium(6,4,5);
//ubahTrapesium(&t1,6, 5,7);
    printf("Sisi: %d",t1.s1);
    printf("\n");
    printf("Sisi: %d",t1.s2);
    printf("\n");
    printf("Tinggi: %d",t1.t);
    printf("\n");
    printf("Luas: %d",getLuas(t1));
    getch();
    return 0;
}