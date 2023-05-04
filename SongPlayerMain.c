
#include <stdio.h>
#include <windows.h>
#include <MMsystem.h>
int main () {
	int moodchoice, langchoice, songchoice,n;
	printf ("\n \t \t \t WELCOME TO JYCE MUSIC PLAYER \t \t \t \n");
	printf ("\n \t Which Language do you prefer listening to Music in? \n \t 1. Tamil \n \t 2. English \n \t 3. Other Languages \n \t \t Enter the number corresponding to your Preferred Language: ");
	scanf ("%d", &langchoice);
	if (langchoice==1 || langchoice==2 || langchoice==3)
	{
	printf ("\n \t What is your Mood right now? \n \t 1. Happy \n \t 2. Vibe \n \t 3. Love \n \t 4. Motivated \n \t 5. Sad \n \t \t Enter the number corresponding to your Current Mood: ");
	scanf ("%d", &moodchoice);
	if (moodchoice==1 || moodchoice==2 || moodchoice==3 || moodchoice==4 || moodchoice==5)
	{
	//Tamil Songs
	if (langchoice==1 && moodchoice==1)
	{
		//Happy
		printf ("\n \t Which song do you want to listen to? \n \t 1. Kakka Kathai by Vaisagh \n \t 2. Karuthavanalam Galeejam by Anirudh Ravichander \n \t 3. Ullalla by Anirudh Ravichander \n \t 4. Yethi Yethi by Harris Jayaraj \n \t 5. Yello Pullelo by Masala Coffee \n \t \t Enter the number corresponding to your choosen song: ");
		scanf ("%d", &songchoice);
	}
	else if (langchoice==1 && moodchoice==2)
	{
		//Vibe
		printf ("\n \t Which song do you want to listen to? \n \t 1. Mallipoo by A R Rahman \n \t 2. Sirikalam Parakalam by Masala Coffee \n \t 3. Pistha by Rajesh Murugaesan \n \t 4. Mental Manathil by A R Rahman \n \t 5. Machi Open The Bottle by Yuvan Shankar Raja \n \t \t Enter the number corresponding to your choosen song: ");
		scanf ("%d", &songchoice);
	}
	else if (langchoice==1 && moodchoice==3)
	{
		//Love
		printf ("\n \t Which song do you want to listen to? \n \t 1. Nee Kavithaigala by Pradeep Kumar \n \t 2. Aval by Pradeep Singh Saran \n \t 3. Oh Penne by Vishal Dadlani & Anirudh Ravichandher \n \t 4. Manjai Veyil by Harris Jayaraj \n \t 5. Kaadhalada by Shashaa Tirupati & Pradeep Kumar \n \t \t Enter the number corresponding to your choosen song: ");
		scanf ("%d", &songchoice);
	}
	else if (langchoice==1 && moodchoice ==4)
	{
		//Motivated
		printf ("\n \t Which song do you want to listen to? \n \t 1. Polladha Ulagam by G V Prakash \n \t 2. Ethir Neechal by Anirudh Ravichander \n \t 3. Thani Oruvan by Hip Hop Tamizh \n \t 4. Surviva by Anirudh Ravichander \n \t 5. Karma Theme(U Turn) by Anirudh Ravichander \n \t \t Enter the number corresponding to your choosen song: ");
		scanf ("%d", &songchoice);
	}
	else if (langchoice==1 && moodchoice ==5)
	{
		//Sad
		printf ("\n \t Which song do you want to listen to? \n \t 1. Po Urave by Sid Sriram \n \t 2. Yamma Yamma by Harris Jayaraj \n \t 3. Kanave Nee Naan by Masala Coffee \n \t 4. New York Nagaram by A R Rahman \n \t 5. Marappadhilai Nenje by Leon James \n \t \t Enter the number corresponding to your choosen song: ");
		scanf ("%d", &songchoice);
	}
	//English Songs
	else if (langchoice==2 && moodchoice==1)
	{
		//Happy
		printf ("\n \t Which song do you want to listen to? \n \t 1. Golden Hour by JKVE \n \t 2. Dynamite by BTS \n \t 3. 2002 by Anne Marie \n \t 4. I Like Me Better by Lauv \n \t 5. What Makes You Beautiful? by One Direction \n \t \t Enter the number corresponding to your choosen song: ");
		scanf ("%d", &songchoice);
	}
	else if (langchoice==2 && moodchoice==2)
	{
		//Vibe
		printf ("\n \t Which song do you want to listen to? \n \t 1. On the Floor by Jennifer Lopez \n \t 2. Levitating by Dua Lipa \n \t 3. PS5 by Salem Islese & Tomorrow by Together \n \t 4. House of Memories by Panic! At The Disco \n \t 5. MONEY by LISA \n \t \t Enter the number corresponding to your choosen song: ");
		scanf ("%d", &songchoice);
	}
	else if (langchoice==2 && moodchoice==3)
	{
		//Love
		printf ("\n \t Which song do you want to listen to? \n \t 1. Perfect by Ed Sheeran \n \t 2. All of Me by John Legend \n \t 3. Double Take by Dhruv \n \t 4. Love Me Like You Do by Ellie Glouding \n \t 5. Until I Found You by Stephen Sanchez \n \t \t Enter the number corresponding to your choosen song: ");
		scanf ("%d", &songchoice);
	}
	else if (langchoice==2 && moodchoice ==4)
	{
		//Motivated
		printf ("\n \t Which song do you want to listen to? \n \t 1. Believer by Imagine Dragons \n \t 2. Warriors by Imagine Dragons \n \t 3. On My Way by Alan Walker & Sabrina Carpenter \n \t 4. Play With Fire by Sam Tinnez \n \t 5. Scars to Your Beautiful by Alessia Cara \n \t \t Enter the number corresponding to your choosen song: ");
		scanf ("%d", &songchoice);
	}
	else if (langchoice==2 && moodchoice ==5)
	{
		//Sad
		printf ("\n \t Which song do you want to listen to? \n \t 1. Glimpse of Us by Joji \n \t 2. SNAP by Rosa Linn \n \t 3. Another Love by Tom Odell \n \t 4. Love In the Dark by Adele \n \t 5. Let Me Down Slowly by Alec Benjamin \n \t \t Enter the number corresponding to your choosen song: ");
		scanf ("%d", &songchoice);
	}
	//Other Language Songs
	else if (langchoice==3 && moodchoice==1)
	{
		//Happy
		printf ("\n \t Which song do you want to listen to? \n \t 1. Sweet Heart by Amit Trivedi \n \t 2. Love Scenario by iKON \n \t 3. Shine by Pentagon \n \t 4. Blueberry Eyes by Max & Suga \n \t 5. Cat & Dog by Tomorrow by Together \n \t \t Enter the number corresponding to your choosen song: ");
		scanf ("%d", &songchoice);
	}
	else if (langchoice==3 && moodchoice==2)
	{
		//Vibe
		printf ("\n \t Which song do you want to listen to? \n \t 1. Pasoori by Ali Sethi & Shae Gill \n \t 2. Cheers by Seventeen \n \t 3. Muqabala by Yash Narvekar \n \t 4. Chicken Noodle Soup by J Hope & Becky G \n \t 5. Vachinde by ShakthiKanth Karthick \n \t \t Enter the number corresponding to your choosen song: ");
		scanf ("%d", &songchoice);
	}
	else if (langchoice==3 && moodchoice==3)
	{
		//Love
		printf ("\n \t Which song do you want to listen to? \n \t 1. Maate Vinaduga by Sid Sriram \n \t 2. Rock With You by Seventeen \n \t 3. Kesariya by Pritam, Arjit Singh & Amitabh Bhattacharya \n \t 4. Shayad by Pritam & Arjit Singh \n \t 5. Darshana by Hesham Abdul Wahab \n \t \t Enter the number corresponding to your choosen song: ");
		scanf ("%d", &songchoice);
	}
	else if (langchoice==3 && moodchoice ==4)
	{
		//Motivated
		printf ("\n \t Which song do you want to listen to? \n \t 1. Dheera Dheera by Ravi Basrur \n \t 2. Bella Ciao by Manu Pilas \n \t 3. Start Over by Gaho \n \t 4. Maria by Hwasa \n \t 5. HIP by Mamamoo \n \t \t Enter the number corresponding to your choosen song: ");
		scanf ("%d", &songchoice);
	}
	else if (langchoice==3 && moodchoice ==5)
	{
		//Sad
		printf ("\n \t Which song do you want to listen to? \n \t 1. Blue and Grey by BTS \n \t 2. Tum Hi Ho by Arjit Singh \n \t 3. Ansi Bala Vida by Indila \n \t 4. Don't Wanna Cry by Seventeen \n \t 5. Shinunoga E-Wa by Fujii Kaze \n \t \t Enter the number corresponding to your choosen song: ");
		scanf ("%d", &songchoice);
	}
	//Playing Songs
	if (songchoice==1 || songchoice==2 || songchoice==3 || songchoice==4 || songchoice==5)
	{
	//Tamil Happy Songs
while (langchoice==1 && moodchoice==1)
{
	if (songchoice==1)
	{
		printf ("\n \t \t PLAYING KAKKA KATHAI BY VAISAGH \n");
		PlaySound(TEXT("D:\\Music - CS\\kakkakathai.wav"), NULL, SND_ASYNC);
		printf ("\n \t \t Enter 1 to stop the music \n \t               0 to change the music \n \t \t Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
		PlaySound(TEXT("D:\\Music - CS\\kakkakathai.wav"), NULL, SND_SYNC);
}
	else if (songchoice==2)
		{
	printf ("\n \t PLAYING KARUTHAVANALAM GALEEJAM FROM VELAIKARAN BY ANIRUDH RAVICHANDHER");
	PlaySound(TEXT("D:\\Music - CS\\karuthavanalamgaleejam.wav"), NULL, SND_ASYNC);
	printf ("\n \t \t \t     Enter 1 to stop the music \n \t                           0 to change the music \n \t \t \t     Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\karuthavanalamgaleejam.wav"), NULL, SND_SYNC);
}
else if (songchoice==3)
		{
	printf ("\n \t PLAYING ULLALA FROM PETTAI BY ANIRUDH RAVICHANDER");
	PlaySound(TEXT("D:\\Music - CS\\ullalla.wav"), NULL, SND_ASYNC);
	printf ("\n \t \t Enter 1 to stop the music \n \t               0 to change the music \n \t \t Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\ullalla.wav"), NULL, SND_SYNC);
	}
	else if (songchoice==4)
		{
	printf ("\n \t PLAYING YETHI YETHI FROM VARANAM AAYIRAM BY HARRIS JAYARAJ");
	PlaySound(TEXT("D:\\Music - CS\\yethiyethi.wav"), NULL, SND_ASYNC);
	printf ("\n \t \t \t Enter 1 to stop the music \n \t                       0 to change the music \n \t \t \t Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\yethiyethi.wav"), NULL, SND_SYNC);
}
	else if (songchoice==5)
		{
	printf ("\n \t PLAYING YELLO PULLELO FROM KANNUM KANNUM KOLLAIYADITHAL BY MASALA COFFEE");
	PlaySound(TEXT("D:\\Music - CS\\yellopullelo.wav"), NULL, SND_ASYNC);
	printf ("\n \t \t \t \t Enter 1 to stop the music \n \t                               0 to change the music \n \t \t \t \t Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\yellopullelo.wav"), NULL, SND_SYNC);
}
}
//Tamil Vibe Songs
while (langchoice==1 && moodchoice==2)
{
	if (songchoice==1)
	{
		printf ("\n \t PLAYING MALLIPOO FROM VENDHU THANITHATHU KAADU BY A R RAHMAN");
		PlaySound(TEXT("D:\\Music - CS\\mallipoo.wav"), NULL, SND_ASYNC);
		printf ("\n \t \t \t Enter 1 to stop the music \n \t                       0 to change the music \n \t \t \t Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
		PlaySound(TEXT("D:\\Music - CS\\mallipoo.wav"), NULL, SND_SYNC);
}
	else if (songchoice==2)
		{
	printf ("\n \t PLAYING SIRIKALAM PARAKALAM FROM KANNUM KANNUM KOLLAIYADITHAL BY MASALA COFFEE");
	PlaySound(TEXT("D:\\Music - CS\\sirikalamparakalam.wav"), NULL, SND_ASYNC);
	printf ("\n \t \t \t \t Enter 1 to stop the music \n \t                               0 to change the music \n \t \t \t \t Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\sirikalamparakalam.wav"), NULL, SND_SYNC);
}
else if (songchoice==3)
		{
	printf ("\n \t PLAYING PISTHA FROM NERAM BY RAJESH MURUGAESAN");
	PlaySound(TEXT("D:\\Music - CS\\pistha.wav"), NULL, SND_ASYNC);
	printf ("\n \t \t Enter 1 to stop the music \n \t               0 to change the music \n \t \t Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\pistha.wav"), NULL, SND_SYNC);
	}
	else if (songchoice==4)
		{
	printf ("\n \t PLAYING MENTAL MANADHIL FROM OK KANMANI FROM A R RAHMAN");
	PlaySound(TEXT("D:\\Music - CS\\mentalmanathil.wav"), NULL, SND_ASYNC);
	printf ("\n \t \t \t Enter 1 to stop the music \n \t                       0 to change the music \n \t \t \t Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\mentalmanathil.wav"), NULL, SND_SYNC);
}
	else if (songchoice==5)
		{
	printf ("\n \t PLAYING MACHI OPEN THE BOTTLE FROM MANKANTHA BY YUVAN SHANKAR RAJA");
	PlaySound(TEXT("D:\\Music - CS\\machiopenthebottle.wav"), NULL, SND_ASYNC);
	printf ("\n \t \t \t   Enter 1 to stop the music \n \t                         0 to change the music \n \t \t \t   Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\machiopenthebottle.wav"), NULL, SND_SYNC);
}
}
//Tamil Love Songs
while (langchoice==1 && moodchoice==3)
{
	if (songchoice==1)
	{
		printf ("\n \t PLAYING NEE KAVITHAIGALA FROM MARAGADHA NAANAYAM BY PRADEEP KUMAR");
		PlaySound(TEXT("D:\\Music - CS\\neekavithaigala.wav"), NULL, SND_ASYNC);
		printf ("\n \t \t \t   Enter 1 to stop the music \n \t \t \t         0 to change the music \n \t \t \t   Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
		PlaySound(TEXT("D:\\Music - CS\\neekavithaigala.wav"), NULL, SND_SYNC);
}
	else if (songchoice==2)
		{
	printf ("\n \t PLAYING AVAL FROM MANITHAN BY PRADEEP SINGH SARAN");
	PlaySound(TEXT("D:\\Music - CS\\aval.wav"), NULL, SND_ASYNC);
	printf ("\n \t \t    Enter 1 to stop the music \n \t                  0 to change the music \n \t \t    Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\aval.wav"), NULL, SND_SYNC);
}
else if (songchoice==3)
		{
	printf ("\n \t PLAYING OH PENNE FROM VANAKAM CHENNAI BY VISHAL DADLANI & ANIRUDH RAVICHANDER");
	PlaySound(TEXT("D:\\Music - CS\\ohpenne.wav"), NULL, SND_ASYNC);
		printf ("\n \t \t \t \t   Enter 1 to stop the music \n \t \t                         0 to change the music \n \t \t \t \t   Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\ohpenne.wav"), NULL, SND_SYNC);
	}
	else if (songchoice==4)
		{
	printf ("\n \t PLAYING MANJAI VEYIL FROM VETTAIYAADU VILAYAADU BY HARRIS JAYARAJ");
	PlaySound(TEXT("D:\\Music - CS\\manjaiveyil.wav"), NULL, SND_ASYNC);
		printf ("\n \t \t \t  Enter 1 to stop the music \n \t                        0 to change the music \n \t \t \t  Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\manjaiveyil.wav"), NULL, SND_SYNC);
}
	else if (songchoice==5)
		{
	printf ("\n \t PLAYING KAADHALADA FROM VIVEGAM BY SHASHAA TIRUPATI & PRADEEP KUMAR");
	PlaySound(TEXT("D:\\Music - CS\\kaadhalada.wav"), NULL, SND_ASYNC);
		printf ("\n \t \t \t     Enter 1 to stop the music \n \t                           0 to change the music \n \t \t \t     Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\kaadhalada.wav"), NULL, SND_SYNC);
}
}
//Tamil Motivated Songs
while (langchoice==1 && moodchoice==4)
{
	if (songchoice==1)
	{
		printf ("\n \t PLAYING POLLADHA ULAGAM FROM MAARAN BY G V PRAKASH KUMAR");
		PlaySound(TEXT("D:\\Music - CS\\polladhaulagam.wav"), NULL, SND_ASYNC);
		printf ("\n \t \t    Enter 1 to stop the music \n \t                  0 to change the music \n \t \t    Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\polladhaulagam.wav"), NULL, SND_SYNC);
}
	else if (songchoice==2)
		{
	printf ("\n \t PLAYING ETHIR NEECHAL FROM ETHIR NEECHAL BY ANIRUDH RAVICHANDER");
	PlaySound(TEXT("D:\\Music - CS\\ethirneechal.wav"), NULL, SND_ASYNC);
	printf ("\n \t \t \t     Enter 1 to stop the music \n \t                           0 to change the music \n \t \t \t     Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\ethirneechal.wav"), NULL, SND_SYNC);
}
else if (songchoice==3)
		{
	printf ("\n \t PLAYING THANI ORUVAN FROM THANI ORUVAN BY HIP HOP TAMIZHA");
	PlaySound(TEXT("D:\\Music - CS\\thanioruvan.wav"), NULL, SND_ASYNC);
	printf ("\n \t \t \t Enter 1 to stop the music \n \t                       0 to change the music \n \t \t \t Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\thanioruvan.wav"), NULL, SND_SYNC);
	}
	else if (songchoice==4)
		{
	printf ("\n \t PLAYING SURVIVA FROM VIVEGAM BY ANIRUDH RAVICHANDER");
	PlaySound(TEXT("D:\\Music - CS\\surviva.wav"), NULL, SND_ASYNC);
	printf ("\n \t \t      Enter 1 to stop the music \n \t                    0 to change the music \n \t \t      Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\surviva.wav"), NULL, SND_SYNC);
}
	else if (songchoice==5)
		{
	printf ("\n \t PLAYING KARMA THEME FROM U TURN BY ANIRUDH RAVICHANDER");
	PlaySound(TEXT("D:\\Music - CS\\karmatheme.wav"), NULL, SND_ASYNC);
	printf ("\n \t \t \t Enter 1 to stop the music \n \t                       0 to change the music \n \t \t \t Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\karmatheme.wav"), NULL, SND_SYNC);
}
}
//Tamil Sad Songs
while (langchoice==1 && moodchoice==5)
{
	if (songchoice==1)
	{
		printf ("\n \t PLAYING PO URAVE FROM KAATRIN MOZHI BY SID SRIRAM");
		PlaySound(TEXT("D:\\Music - CS\\pourave.wav"), NULL, SND_ASYNC);
		printf ("\n \t \t    Enter 1 to stop the music \n \t                  0 to change the music \n \t \t    Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
		PlaySound(TEXT("D:\\Music - CS\\pourave.wav"), NULL, SND_SYNC);
}
	else if (songchoice==2)
		{
	printf ("\n \t PLAYING YAMMA YAMMA FROM 7AM ARIVU BY HARRIS JAYARAJ");
	PlaySound(TEXT("D:\\Music - CS\\yammayamma.wav"), NULL, SND_ASYNC);
	printf ("\n \t \t    Enter 1 to stop the music \n \t                  0 to change the music \n \t \t    Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\yammayamma.wav"), NULL, SND_SYNC);
}
else if (songchoice==3)
		{
	printf ("\n \t PLAYING KANAVE NEE NAAN FROM KANNUM KANNUM KOLLAIYADETHAL BY MASALA COFFEE");
	PlaySound(TEXT("D:\\Music - CS\\kanaveneenaan.wav"), NULL, SND_ASYNC);
	printf ("\n \t \t \t     Enter 1 to stop the music \n \t                           0 to change the music \n \t \t \t     Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\kanaveneenaan.wav"), NULL, SND_SYNC);
	}
	else if (songchoice==4)
		{
	printf ("\n \t PLAYING NEW YORK NAGARAM FROM SILLUNU KAADHAL BY A R RAHMAN");
	PlaySound(TEXT("D:\\Music - CS\\newyorknagaram.wav"), NULL, SND_ASYNC);
	printf ("\n \t \t \t Enter 1 to stop the music \n \t                       0 to change the music \n \t \t \t Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\newyorknagaram.wav"), NULL, SND_SYNC);
}
	else if (songchoice==5)
		{
	printf ("\n \t PLAYING MARAPPADHILAI NENJE FROM OH MY KADAVULEY BY LEON JAMES");
	PlaySound(TEXT("D:\\Music - CS\\marappadhilainenje.wav"), NULL, SND_ASYNC);
	printf ("\n \t \t \t Enter 1 to stop the music \n \t                       0 to change the music \n \t \t \t Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\marappadhilainenje.wav"), NULL, SND_SYNC);
}
}
//English Happy Songs
while (langchoice==2 && moodchoice==1)
{
	if (songchoice==1)
	{
		printf ("\n \t  PLAYING GOLDEN HOUR BY JKVE");
		PlaySound(TEXT("D:\\Music - CS\\goldenhour.wav"), NULL, SND_ASYNC);
		printf ("\n \t   Enter 1 to stop the music \n \t         0 to change the music \n \t   Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
		PlaySound(TEXT("D:\\Music - CS\\goldenhour.wav"), NULL, SND_SYNC);
}
	else if (songchoice==2)
		{
	printf ("\n \t   PLAYING DYNAMITE BY BTS");
	PlaySound(TEXT("D:\\Music - CS\\dynamite.wav"), NULL, SND_ASYNC);
	printf ("\n \t  Enter 1 to stop the music \n \t        0 to change the music \n \t  Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\dynamite.wav"), NULL, SND_SYNC);
}
else if (songchoice==3)
		{
	printf ("\n \t  PLAYING 2002 BY ANNE MARIE");
	PlaySound(TEXT("D:\\Music - CS\\2002.wav"), NULL, SND_ASYNC);
	printf ("\n \t  Enter 1 to stop the music \n \t        0 to change the music \n \t  Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\2002.wav"), NULL, SND_SYNC);
	}
	else if (songchoice==4)
		{
	printf ("\n \t  PLAYING I LIKE ME BETTER BY LAUV");
	PlaySound(TEXT("D:\\Music - CS\\ilikemebetter.wav"), NULL, SND_ASYNC);
	printf ("\n \t     Enter 1 to stop the music \n \t           0 to change the music \n \t     Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\ilikemebetter.wav"), NULL, SND_SYNC);
}
	else if (songchoice==5)
		{
	printf ("\n \t  PLAYING WHAT MAKES YOU BEAUTIFUL BY ONE DIRECTION");
	PlaySound(TEXT("D:\\Music - CS\\whatmakesyoubeautiful.wav"), NULL, SND_ASYNC);
	printf ("\n \t \t    Enter 1 to stop the music \n \t                  0 to change the music \n \t \t    Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\whatmakesyoubeautiful.wav"), NULL, SND_SYNC);
}
}
//English Vibe Songs
while (langchoice==2 && moodchoice==2)
{
	if (songchoice==1)
	{
		printf ("\n \t  PLAYING ON THE FLOOR BY JENNIFER LOPEZ");
		PlaySound(TEXT("D:\\Music - CS\\onthefloor.wav"), NULL, SND_ASYNC);
		printf ("\n \t       Enter 1 to stop the music \n \t             0 to change the music \n \t       Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
		PlaySound(TEXT("D:\\Music - CS\\onthefloor.wav"), NULL, SND_SYNC);
}
	else if (songchoice==2)
		{
	printf ("\n \t  PLAYING LEVITATING BY DUA LIPA");
	PlaySound(TEXT("D:\\Music - CS\\levitating.wav"), NULL, SND_ASYNC);
	printf ("\n \t    Enter 1 to stop the music \n \t          0 to change the music \n \t    Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\levitating.wav"), NULL, SND_SYNC);
}
else if (songchoice==3)
		{
	printf ("\n \t  PLAYING PS5 BY SALEM ISLESE & TOMORROW BY TOGETHER");
	PlaySound(TEXT("D:\\Music - CS\\ps5.wav"), NULL, SND_ASYNC);
	printf ("\n \t \t    Enter 1 to stop the music \n \t                  0 to change the music \n \t \t    Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\ps5.wav"), NULL, SND_SYNC);
	}
	else if (songchoice==4)
		{
	printf ("\n \t  PLAYING HOUSE OF MEMORIES BY PANIC! AT THE DISCO");
	PlaySound(TEXT("D:\\Music - CS\\houseofmemories.wav"), NULL, SND_ASYNC);
	printf ("\n \t \t    Enter 1 to stop the music \n \t                  0 to change the music \n \t \t    Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\houseofmemories.wav"), NULL, SND_SYNC);
}
	else if (songchoice==5)
		{
	printf ("\n \t\tPLAYING MONEY BY LISA");
	PlaySound(TEXT("D:\\Music - CS\\money.wav"), NULL, SND_ASYNC);
	printf ("\n \t      Enter 1 to stop the music \n \t            0 to change the music \n \t      Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\money.wav"), NULL, SND_SYNC);
}
}
//English Love Songs
while (langchoice==2 && moodchoice==3)
{ 
	if (songchoice==1)
	{
		printf ("\n \t  PLAYING PERFECT BY ED SHEERAN");
		PlaySound(TEXT("D:\\Music - CS\\perfect.wav"), NULL, SND_ASYNC);
		printf ("\n \t    Enter 1 to stop the music \n \t          0 to change the music \n \t    Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
		PlaySound(TEXT("D:\\Music - CS\\perfect.wav"), NULL, SND_SYNC);
}
	else if (songchoice==2)
		{
	printf ("\n \t PLAYING ALL OF ME BY JOHN LEGEND");
	PlaySound(TEXT("D:\\Music - CS\\allofme.wav"), NULL, SND_ASYNC);
	printf ("\n \t    Enter 1 to stop the music \n \t          0 to change the music \n \t    Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\allofme.wav"), NULL, SND_SYNC);
}
else if (songchoice==3)
		{
	printf ("\n \t  PLAYING DOUBLE TAKE BY DHRUV");
	PlaySound(TEXT("D:\\Music - CS\\doubletake.wav"), NULL, SND_ASYNC);
	printf ("\n \t    Enter 1 to stop the music \n \t          0 to change the music \n \t    Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\doubletake.wav"), NULL, SND_SYNC);
	}
	else if (songchoice==4)
		{
	printf ("\n \t PLAYING LOVE ME LIKE YOU DO BY ELLIE GLOUDING");
	PlaySound(TEXT("D:\\Music - CS\\lovemelikeyoudo.wav"), NULL, SND_ASYNC);
	printf ("\n \t          Enter 1 to stop the music \n \t                0 to change the music \n \t          Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\lovemelikeyoudo.wav"), NULL, SND_SYNC);
}
	else if (songchoice==5)
		{
	printf ("\n \tPLAYING UNTIL I FOUND YOU BY STEPHEN SANCHEZ");
	PlaySound(TEXT("D:\\Music - CS\\untilifoundyou.wav"), NULL, SND_ASYNC);
	printf ("\n \t        Enter 1 to stop the music \n \t              0 to change the music \n \t        Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\untilifoundyou.wav"), NULL, SND_SYNC);
}
}
//English Motivated Songs
while (langchoice==2 && moodchoice==4)
{
	if (songchoice==1)
	{
		printf ("\n \t PLAYING BELIEVER BY IMAGINE DRAGONS");
		PlaySound(TEXT("D:\\Music - CS\\believer.wav"), NULL, SND_ASYNC);
		printf ("\n \t      Enter 1 to stop the music \n \t            0 to change the music \n \t      Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
		PlaySound(TEXT("D:\\Music - CS\\believer.wav"), NULL, SND_SYNC);
}
	else if (songchoice==2)
		{
	printf ("\n \t PLAYING WARRIORS BY IMAGINE DRAGONS");
	PlaySound(TEXT("D:\\Music - CS\\warriors.wav"), NULL, SND_ASYNC);
	printf ("\n \t      Enter 1 to stop the music \n \t            0 to change the music \n \t      Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\warriors.wav"), NULL, SND_SYNC);
}
else if (songchoice==3)
		{
	printf ("\n \t  PLAYING ON MY WAY BY ALAN WALKER & SABRINA CARPENTER");
	PlaySound(TEXT("D:\\Music - CS\\onmyway.wav"), NULL, SND_ASYNC);
	printf ("\n \t \t     Enter 1 to stop the music \n \t                   0 to change the music \n \t \t     Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\onmyway.wav"), NULL, SND_SYNC);
	}
	else if (songchoice==4)
		{
	printf ("\n \t PLAYING PLAY WITH FIRE BY SAM TINNEZ");
	PlaySound(TEXT("D:\\Music - CS\\playwithfire.wav"), NULL, SND_ASYNC);
	printf ("\n \t      Enter 1 to stop the music \n \t            0 to change the music \n \t      Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\playwithfire.wav"), NULL, SND_SYNC);
}
	else if (songchoice==5)
		{
	printf ("\n \t PLAYING SCARS TO YOUR BEAUTIFUL BY ALESSIA CARA");
	PlaySound(TEXT("D:\\Music - CS\\scarstoyourbeautiful.wav"), NULL, SND_ASYNC);
	printf ("\n \t          Enter 1 to stop the music \n \t                0 to change the music \n \t          Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\scarstoyourbeautiful.wav"), NULL, SND_SYNC);
}
}
//English Sad Songs
while (langchoice==2 && moodchoice==5)
{
	if (songchoice==1)
	{
		printf ("\n \t  PLAYING GLIMPSE OF US BY JOJI");
		PlaySound(TEXT("D:\\Music - CS\\glimpseofus.wav"), NULL, SND_ASYNC);
		printf ("\n \t    Enter 1 to stop the music \n \t          0 to change the music \n \t    Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
		PlaySound(TEXT("D:\\Music - CS\\glimpseofus.wav"), NULL, SND_SYNC);
}
	else if (songchoice==2)
		{
	printf ("\n \t    PLAYING SNAP BY ROSA LINN");
	PlaySound(TEXT("D:\\Music - CS\\snap.wav"), NULL, SND_ASYNC);
	printf ("\n \t    Enter 1 to stop the music \n \t          0 to change the music \n \t    Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\snap.wav"), NULL, SND_SYNC);
}
else if (songchoice==3)
		{
	printf ("\n \t PLAYING ANOTHER LOVE BY TOM ODELL");
	PlaySound(TEXT("D:\\Music - CS\\anotherlove.wav"), NULL, SND_ASYNC);
	printf ("\n \t    Enter 1 to stop the music \n \t          0 to change the music \n \t    Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\anotherlove.wav"), NULL, SND_SYNC);
	}
	else if (songchoice==4)
		{
	printf ("\n \t PLAYING LOVE IN THE DARK BY ADELE");
	PlaySound(TEXT("D:\\Music - CS\\loveinthedark.wav"), NULL, SND_ASYNC);
	printf ("\n \t     Enter 1 to stop the music \n \t           0 to change the music \n \t     Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\loveinthedark.wav"), NULL, SND_SYNC);
}
	else if (songchoice==5)
		{
	printf ("\n \t  PLAYING LET ME DOWN SLOWLY BY ALEC BENJAMIN");
	PlaySound(TEXT("D:\\Music - CS\\letmedownslowly.wav"), NULL, SND_ASYNC);
	printf ("\n \t          Enter 1 to stop the music \n \t                0 to change the music \n \t          Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\letmedownslowly.wav"), NULL, SND_SYNC);
}
}
//Other Language Happy Songs
while (langchoice==3 && moodchoice==1)
{
	if (songchoice==1)
	{
		printf ("\n \tPLAYING SWEET HEART FROM KEDARNATH BY AMIT TRIVEDI");
		PlaySound(TEXT("D:\\Music - CS\\sweetheart.wav"), NULL, SND_ASYNC);
		printf ("\n \t          Enter 1 to stop the music \n \t                0 to change the music \n \t          Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
		PlaySound(TEXT("D:\\Music - CS\\sweetheart.wav"), NULL, SND_SYNC);
}
	else if (songchoice==2)
		{
	printf ("\n \t   PLAYING LOVE SCENARIO BY IKON");
	PlaySound(TEXT("D:\\Music - CS\\lovescenario.wav"), NULL, SND_ASYNC);
	printf ("\n \t    Enter 1 to stop the music \n \t          0 to change the music \n \t    Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\lovescenario.wav"), NULL, SND_SYNC);
}
else if (songchoice==3)
		{
	printf ("\n \t     PLAYING SHINE BY PENTAGON");
	PlaySound(TEXT("D:\\Music - CS\\shine.wav"), NULL, SND_ASYNC);
	printf ("\n \t     Enter 1 to stop the music \n \t           0 to change the music \n \t     Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\shine.wav"), NULL, SND_SYNC);
	}
	else if (songchoice==4)
		{
	printf ("\n \t PLAYING BLUEBERRY EYES BY MAX & SUGA");
	PlaySound(TEXT("D:\\Music - CS\\blueberryeyes.wav"), NULL, SND_ASYNC);
	printf ("\n \t      Enter 1 to stop the music \n \t            0 to change the music \n \t      Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\blueberryeyes.wav"), NULL, SND_SYNC);
}
	else if (songchoice==5)
		{
	printf ("\n \t  PLAYING CAT & DOG BY TOMORROW BY TOGETHER");
	PlaySound(TEXT("D:\\Music - CS\\catdog.wav"), NULL, SND_ASYNC);
	printf ("\n \t          Enter 1 to stop the music \n \t                0 to change the music \n \t          Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\catdog.wav"), NULL, SND_SYNC);
}
}
//Other Language Vibe Songs
while (langchoice==3 && moodchoice==2)
{
	if (songchoice==1)
	{
		printf ("\n \t PLAYING PASOORI BY SHAE GILL & ALI SETHI");
		PlaySound(TEXT("D:\\Music - CS\\pasoori.wav"), NULL, SND_ASYNC);
		printf ("\n \t      Enter 1 to stop the music \n \t            0 to change the music \n \t      Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
		PlaySound(TEXT("D:\\Music - CS\\pasoori.wav"), NULL, SND_SYNC);
}
	else if (songchoice==2)
		{
	printf ("\n \t   PLAYING CHEERS BY SEVENTEEN");
	PlaySound(TEXT("D:\\Music - CS\\cheers.wav"), NULL, SND_ASYNC);
	printf ("\n \t    Enter 1 to stop the music \n \t          0 to change the music \n \t    Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\cheers.wav"), NULL, SND_SYNC);
}
else if (songchoice==3)
		{
	printf ("\n \t PLAYING MUQABALA FROM STREET DANCER 3D BY YASH NARVEKAR");
	PlaySound(TEXT("D:\\Music - CS\\muqabla.wav"), NULL, SND_ASYNC);
	printf ("\n \t \t     Enter 1 to stop the music \n \t                   0 to change the music \n \t \t     Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\muqabla.wav"), NULL, SND_SYNC);
	}
	else if (songchoice==4)
		{
	printf ("\n \t PLAYING CHICKEN NOODLE SOUP BY J HOPE & BECKY G");
	PlaySound(TEXT("D:\\Music - CS\\chickennoodlesoup.wav"), NULL, SND_ASYNC);
	printf ("\n \t          Enter 1 to stop the music \n \t                0 to change the music \n \t          Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\chickennoodlesoup.wav"), NULL, SND_SYNC);
}
	else if (songchoice==5)
		{
	printf ("\n \t PLAYING VACHINDE FROM FIDAA BY SHAKTHIKANTH KARTHICK");
	PlaySound(TEXT("D:\\Music - CS\\vachinde.wav"), NULL, SND_ASYNC);
	printf ("\n \t            Enter 1 to stop the music \n \t                  0 to change the music \n \t            Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\vachinde.wav"), NULL, SND_SYNC);
}
}
//Other Language Love Songs
while (langchoice==3 && moodchoice==3)
{
	if (songchoice==1)
	{
		printf ("\n \t PLAYING MAATE VINADUGA FROM TAXIWALA BY SID SRIRAM");
		PlaySound(TEXT("D:\\Music - CS\\maatevinadhuga.wav"), NULL, SND_ASYNC);
		printf ("\n \t            Enter 1 to stop the music \n \t                  0 to change the music \n \t            Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
		PlaySound(TEXT("D:\\Music - CS\\maatevinadhuga.wav"), NULL, SND_SYNC);
}
	else if (songchoice==2)
		{
	printf ("\n \tPLAYING ROCK WTIH YOU BY SEVENTEEN");
	PlaySound(TEXT("D:\\Music - CS\\rockwithyou.wav"), NULL, SND_ASYNC);
	printf ("\n \t    Enter 1 to stop the music \n \t          0 to change the music \n \t    Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\rockwithyou.wav"), NULL, SND_SYNC);
}
else if (songchoice==3)
		{
	printf ("\n \tPLAYING KESARIYA FROM BRAHMASTRA BY PRITAM, ARJIT SINGH & AMITABH BHATTACHARYA");
	PlaySound(TEXT("D:\\Music - CS\\kesariya.wav"), NULL, SND_ASYNC);
	printf ("\n \t \t \t        Enter 1 to stop the music \n \t                              0 to change the music \n \t \t \t        Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\kesariya.wav"), NULL, SND_SYNC);
	}
	else if (songchoice==4)
		{
	printf ("\n \tPLAYING SHAYAD FROM LOVE AAJ KAL BY PRITAM & ARJIT SINGH");
	PlaySound(TEXT("D:\\Music - CS\\shayad.wav"), NULL, SND_ASYNC);
	printf ("\n \t            Enter 1 to stop the music \n \t                  0 to change the music \n \t            Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\shayad.wav"), NULL, SND_SYNC);
}
	else if (songchoice==5)
		{
	printf ("\n \t PLAYING DARSHANA FROM HRIDAYAM BY DARSHANA RAJENDRAN & HESHAM ABDUL WAHAB");
	PlaySound(TEXT("D:\\Music - CS\\darshana.wav"), NULL, SND_ASYNC);
	printf ("\n \t \t \t       Enter 1 to stop the music \n \t                             0 to change the music \n \t \t \t       Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\darshana.wav"), NULL, SND_SYNC);
}
}
//Other Language Motivated Songs
while (langchoice==3 && moodchoice==4)
{
	if (songchoice==1)
	{
		printf ("\n \t PLAYING DHEERA DHEERA FROM KGF BY RAVI BASRUR");
		PlaySound(TEXT("D:\\Music - CS\\dheeradheera.wav"), NULL, SND_ASYNC);
		printf ("\n \t          Enter 1 to stop the music \n \t                0 to change the music \n \t          Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
		PlaySound(TEXT("D:\\Music - CS\\dheeradheera.wav"), NULL, SND_SYNC);
}
	else if (songchoice==2)
		{
	printf ("\n \t PLAYING BELLA CIAO FROM MONEY HEIST BY MANU PILAS");
	PlaySound(TEXT("D:\\Music - CS\\bellaciao.wav"), NULL, SND_ASYNC);
	printf ("\n \t            Enter 1 to stop the music \n \t                  0 to change the music \n \t            Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\bellaciao.wav"), NULL, SND_SYNC);
}
else if (songchoice==3)
		{
	printf ("\n \t PLAYING START OVER FROM ITAEWON CLASS BY GAHO");
	PlaySound(TEXT("D:\\Music - CS\\startover.wav"), NULL, SND_ASYNC);
	printf ("\n \t          Enter 1 to stop the music \n \t                0 to change the music \n \t          Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\startover.wav"), NULL, SND_SYNC);
	}
	else if (songchoice==4)
		{
	printf ("\n \t      PLAYING MARIA BY HWASA");
	PlaySound(TEXT("D:\\Music - CS\\maria.wav"), NULL, SND_ASYNC);
	printf ("\n \t    Enter 1 to stop the music \n \t          0 to change the music \n \t    Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\maria.wav"), NULL, SND_SYNC);
}
	else if (songchoice==5)
		{
	printf ("\n \t      PLAYING HIP BY MAMAMOO");
	PlaySound(TEXT("D:\\Music - CS\\hip.wav"), NULL, SND_ASYNC);
	printf ("\n \t    Enter 1 to stop the music \n \t          0 to change the music \n \t    Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\hip.wav"), NULL, SND_SYNC);
}
}
//Other Language Sad Songs
while (langchoice==3 && moodchoice==5)
{
	if (songchoice==1)
	{
		printf ("\n \t   PLAYING BLUE AND GREY BY BTS");
		PlaySound(TEXT("D:\\Music - CS\\blueandgrey.wav"), NULL, SND_ASYNC);
		printf ("\n \t    Enter 1 to stop the music \n \t          0 to change the music \n \t    Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
		PlaySound(TEXT("D:\\Music - CS\\blueandgrey.wav"), NULL, SND_SYNC);
}
	else if (songchoice==2)
		{
	printf ("\n \t PLAYING TUM HI HO FROM AASHIQUI 2 BY ARJIT SINGH");
	PlaySound(TEXT("D:\\Music - CS\\tumhiho.wav"), NULL, SND_ASYNC);
	printf ("\n \t          Enter 1 to stop the music \n \t                0 to change the music \n \t          Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\tumhiho.wav"), NULL, SND_SYNC);
}
else if (songchoice==3)
		{
	printf ("\n \t PLAYING ANSI BALA VIDA BY INDILA BY INDILA");
	PlaySound(TEXT("D:\\Music - CS\\Ainsi bas la vida.wav"), NULL, SND_ASYNC);
	printf ("\n \t        Enter 1 to stop the music \n \t              0 to change the music \n \t        Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\Ainsi bas la vida.wav"), NULL, SND_SYNC);
	}
	else if (songchoice==4)
		{
	printf ("\n \t PLAYING DON'T WANNA CRY BY SEVENTEEN");
	PlaySound(TEXT("D:\\Music - CS\\dontwannacry.wav"), NULL, SND_ASYNC);
	printf ("\n \t      Enter 1 to stop the music \n \t            0 to change the music \n \t      Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\dontwannacry.wav"), NULL, SND_SYNC);
}
	else if (songchoice==5)
		{
	printf ("\n \t  PLAYING SHINUNOGA E-WA BY FUJII KAZE");
	PlaySound(TEXT("D:\\Music - CS\\shinuoga.wav"), NULL, SND_ASYNC);
	printf ("\n \t       Enter 1 to stop the music \n \t             0 to change the music \n \t       Enter your choice: ");
		scanf ("%d", &n);
		if (n==1)
		{
			exit(0);
		}
		else if (n==0)
		{
			main();
		}
	PlaySound(TEXT("D:\\Music - CS\\shinuoga.wav"), NULL, SND_SYNC);
}
}
}
else
{
	printf ("\n \t      Enter a number from one to five\n");
	main();
}
}
else 
{
	printf ("\n \t      Enter a number from one to five\n");
	main();
}
}
else 
{
	printf ("\n \t      Enter a number from one to three\n");
	main();
}
return 0;
}
