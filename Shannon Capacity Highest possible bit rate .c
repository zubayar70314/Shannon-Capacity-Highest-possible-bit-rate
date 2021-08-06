#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long int band_width;
    double s_power=0,n_power=0;
    int N;
    printf("Number of signal components: ");
    scanf("%d",&N);
    double s[100],n[100];
    printf("Signal Power    Noise Power \n");
    for(int i=0; i<N; i++)
    {
        scanf("%lf  %lf",&s[i],&n[i]);
        s_power=s_power+s[i];
        n_power=n_power+n[i];
    }
    double SN=s_power/n_power;
    printf(" %lf \n",SN);
    //SNR=10*log10(SN);
    //printf(" %lf \n",SNR);
    printf("Band Width: ");
    scanf("%llu",&band_width);
    double C=band_width*log2(1+SN);
    printf("\nC = %lf \n",C);
    printf("C = %.4lf \a\n",C/1000000);
    return 0;
}
