#include <stdio.h>
//日期字符转数字 
//考虑闰年 大小月 
//进制不同
int* date(char* a){
    int date[4];
    date[0]=(char[0]-'0')*1000+(char[1]-'0')*100+(char[2]-'0')*10+(char[3]-'0');
    date[1]=(char[4]-'0')*10+(char[5]-'0');
    date[2]=(char[6]-'0')*10+(char[7]-'0');
    date[3]=0;
}

int days(char* a,char* b){//默认a<b
    int* a1=date(a);
    int* b1=date(b);
    if(a1[0]>b1[0]){
        swap(*a1,*b1);
    }else if(a1[0]==b1[0]){
        if(a1[1]>b1[1]){
          swap(*a1,*b1);
        }else if(a1[1]==b1[1]){
        if(a1[2]>b1[2]){
          swap(*a1,*b1);
        }
    }
    }

    int a1[]=date(a);
    int b1[]=date(b);
    int dates=0;

   if (a1[0] % 400 == 0 || (a1[0] % 4 == 0 && year % 100 != 0)) {
            a[3] = 1;
        }
    if (b1[0] % 400 == 0 || (b1[0] % 4 == 0 && year % 100 != 0)) {
            b[3] = 1;
        }
   

    //年份
    int flag1=a[3];
    while(a1[0]<b1[0]){
       if (a1[0]% 400 == 0 || (a1[0] % 4 == 0 && a1[0] % 100 != 0)) {
            a[3] = 1;
        }
        if(a[3]==1){
            dates+=366;
        }else{
            dates+=365;
        }
        a[0]++;
    }
    //月份
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while (a1[1]<b1[1]) {
            if (a1[1] == 2 && flag1 == 1) {
                dates+=1;
                flag1 = 0;
            }
           dates+= months[a1[1]++];
        }
    //天数
    dates+=b[2]-a[2];
    return dates;

}
void swap(int* a,int* b){
    int*temp =*a;
    *a=*b;
    *b=temp;
}























#define SIZE 12

int days(char *date) {
    int year, month, day, ret, flag; /* flag 用于记录是否是闰年 */
    int days_of_month[SIZE] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    year = (date[0] - '0')*1000 + (date[1] - '0')*100 + (date[2] - '0')*10 + date[3] - '0';
    month = (date[5] - '0')*10 + date[6] - '0';
    day = (date[8] - '0')*10 + date[9] - '0';
    
    ret = day;
    month--;
    while (year >= 1971) {
        flag = 0;
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
            flag = 1;
        }
        
        while (month > 0) {
            if (month == 2 && flag == 1) {
                ret += 1;
                flag = 0;
            }
            ret += days_of_month[--month];
        }
        year--;
        month = 12;
    }

    return ret;
}

int Dates(char * date1, char * date2){
    int days_1, days_2, ret;

    days_1 = days(date1);
    days_2 = days(date2);

    if (days_1 > days_2) {
        ret = days_1 - days_2;
    } else {
        ret = days_2 - days_1;
    }

    return ret;
}
