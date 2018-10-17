//P3.c
//Nome: Kamila Borba Ribeiro
//Matrícula: 11811EBI026

#include <stdio.h>

long long int eleva(int base, int expo)
{
  int result=1;
  for(;expo>0;expo--)
  {
    result*=base;
  }
  return result;
}

int main()
{
  int i,j=0,s;
  unsigned long long int num=0;
  char str[256];
  printf("Digite a string a ser transformada:\n");
  scanf("%s",str);
  for(s=0;str[s]!='\0';s++);
  for(;s>=0;s--)
  {
    if(str[s]>=48 && str[s]<=57)
	{
      num+=(str[s]-48)*(eleva(10,j));
      j++;
    }
  }
  printf("\nO resultado e: %lld",num);
}
