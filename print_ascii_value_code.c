int main()
{

    signed char ch = 0;
    //unsigned char ch = 0;

    int i=0;
    printf("ASCII Value \t ASCII Code\n");
  
    while(i<=255)
    {
        printf("%d\t\t%c\n", ch,ch);
        ++ch;
        ++i;
    }

    return 0;
}

