#include <stdio.h>
#include <string.h>

void main(){
	char string[51],sorted[51];
	unsigned char i, min, max, med, mod, min_ar, j, k, kurs;
	unsigned int kopa;
	float vid;
	printf("ievadiet simbolu rindu: \n");
	scanf("%s", &string);
	min = string[0];
	max = string[0];
	kopa = 0;
	for(i = 0;string[i] != '\0';i++){
		printf("simbola (%c) ascii vērtība:%d \n",string[i], string[i]);
		if(min >= string[i])min = string[i];
		if(max < string[i])max = string[i];
		kopa += string[i];
	}
	vid = (kopa/i);
	for(j=0;j<i;j++){
		for(k=0;k<i;k++){//sorting
			if(min_ar >= string[k]){
			min_ar = string[k];
			kurs = k;
			}
		}
	string[kurs]=127;
	sorted[j]=min_ar;
	min_ar = 127;
	printf("%d ",sorted[j]);
	}
	printf("\n");
	if((i%2) == 0){//pāra
		med = (sorted[i/2] + sorted[(i/2)+1])/2;
	}
	if((i%2) == 1){//nepāra
		med = sorted[(i/2)];
	}


	printf("rinda ir %d simbolus gara\n",i);
	printf("minimālā vērtība ir: %d \n", min);
	printf("maximālā vērtība ir: %d \n", max);
	printf("vidējā vērtība: %f \n",vid);
	printf("mediāna ir: %d\n",med);
	printf("",mod);
	printf("");
}
