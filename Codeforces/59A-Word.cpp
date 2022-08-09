#include<bits/stdc++.h>
using namespace std;

int main(){
	int i;
	int upper = 0, lower = 0;
	char ch[100], *p;
	gets(ch);
	
	for(i=0; ch[i]!=0; i++){
	    if(ch[i]>='A' && ch[i]<='Z') upper++;
	    else if(ch[i]>='a' && ch[i]<='z') lower++;
	}
	if(upper > lower){
	    for (p = ch; *p != '\0'; ++p) *p = toupper(*p);
	    printf("%s",ch);
	}
	else{
	    for (p = ch; *p != '\0'; ++p) *p = tolower(*p);
	    printf("%s",ch);
	}
	
	return 0;
}