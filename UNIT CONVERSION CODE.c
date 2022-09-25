#include<stdio.h>

int main()
{int choice, km, pound, inch, cm;
printf("1 for kms to miles\n 2 for pounds to kgs\n 3 for inchs to foot\n 4 for cms to inches\n 5 for inches to foot\n");
label:
printf("enter the value of choice: ");
scanf("%d", &choice);
switch(choice)
{
case 1:
printf("enter the value in KM:");
scanf("%d",&km);
printf("the value of %d in miles will be %.4f miles\n", km, 0.6214*km);
break;
case 2:
printf("ENTER the value in pound:");
scanf("%d", &pound);
printf("the value of %d in kgs will be %.4f.kgs", pound, 0.454*pound);
break;
case 3:
printf("ENTER the value in inch:");
scanf("%d", &inch);
printf("the value of %d in meter will be %.4f.meter",inch, 0.0254*inch);
break;
case 4:
printf("ENTER the value in cms:");
scanf("%d", &cm);
printf("the value of %d in inches will be %.4f.inches", cm, 0.394*cm);
break;
case 5:
printf("Enter the value in inches:");
scanf("%d", &inch);
printf("the value of %d in foot will be %.4f. foot", inch, 0.0833*inch);
break;
case 6:{
return 0;
}
default: printf("Enter a valid choices\n");
goto label;

}
}