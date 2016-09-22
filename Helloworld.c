

    main()
    {
    	int x=1;
    	
    	clrscr();
    	repeater(x);
    	getch();
    }
    repeater(int x)
    {
    	if(x<=5)
    	{
    		printf("\nHello World");
    		x++;
    		repeater(x);
    	}
    }

