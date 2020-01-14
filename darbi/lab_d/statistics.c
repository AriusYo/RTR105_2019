#include <stdio.h>
#include <string.h>

void main(){
        char string[51];
	int countarray[256];
        unsigned char i, min, max, med, mod=0, min_ar, j, k, l, kurs;
        unsigned int kopa;
        float vid;
        printf("ievadiet simbolu rindu: \n");
        scanf("%s", &string[0]);
        min = string[0];
        max = string[0];
        kopa = 0;

        for(i = 0;string[i] != '\0';i++){
                //printf("simbola (%c) ascii vērtība:%d \n",string[i], string[i]);
                if(min >= string[i])min = string[i];
                if(max < string[i])max = string[i];
                kopa += string[i];
        }
        vid = (kopa/i);

	for(k=0;k<255;k++){
		countarray[k] = 0;
	}
	for(k=0;k != i;k++){
		countarray[string[k]]++;
	}
	l = 0;
	for(k=0;k<255;k++){
		for(j=0;j<countarray[k];j++){
			string[l] = k;
			l++;
		}
	}
	j = 0;
	for(k=0;k<255;k++){
		if(countarray[k]>=mod){
			if(countarray[k]>mod){
				j=0;
			}
			mod = countarray[k];
			countarray[j]=k;
			j++;
		}
	}

        printf("\n");
        if((i%2) == 0){//pāra
                med = (string[i/2] + string[(i/2)+1])/2;
        }
        if((i%2) == 1){//nepāra
                med = string[(i/2)];
        }
        printf("rinda ir %d simbolus gara\n",i);
        printf("minimālā vērtība ir: %d \n", min);
        printf("maximālā vērtība ir: %d \n", max);
        printf("vidējā vērtība: %f \n",vid);
        printf("mediāna ir: %d\n",med);//vidējais elements
	printf("Moda(s) ir: ");
        for(k=0;k<j;k++){//visbiežākais
		printf("%d ", countarray[k]);
	}
        printf("\n");
	for(j=0;j<2;j++){
		if(j==0) for(k=0;k<i;k++){
			printf(" %c  ", string[k]);
		}
		if(j==1) for(k=0;k<i;k++){
			printf("%3.d ", string[k]);
		}
		printf("\n");
	}
}

