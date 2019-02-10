#include <iostream>

using namespace std;

int main(){
	int user, counter=0;
	int navigation;
	
	while (navigation!=1){
		navigation=0;
	system("cls");
	cout<<"+++++++++++++++++++++++++++++++++\n";
	cout<<"+                               +\n";
	cout<<"+  Introduction to Programming  +\n";
	cout<<"+ List of Laboratory Activities +\n";
	cout<<"+                               +\n";
	cout<<"+++++++++++++++++++++++++++++++++\n\n";
	
	cout<<"[1] Laboratory 1\n"; 
	cout<<"[2] Laboratory 2\n";	
	cout<<"[3] Laboratory 3\n";
	cout<<"[4] Laboratory 4\n";
	cout<<"[5] Laboratory 5\n\n";
	
	cout<<"Number of Visited Programs: "<<counter<<"\n\n";
	cout<<"Select a Laboratory Exercise: ";
	cin>>user;
	
	
	switch(user){
		

	case 1:
			
			while(navigation!=2){
				
			system("cls");
			cout<<" ==============================\n";	
			cout<<" |||                        |||\n";
			cout<<" ||| Laboratory 1 Exercises |||\n";
			cout<<" |||                        |||\n";
			cout<<" ==============================\n\n";	
		
			cout<<"Select From the Following Laboratory Subtopic \n\n";
		
			cout<<"[1] Laboratory 1.1\n"; 
			cout<<"[2] Laboratory 1.2\n";
			cout<<"[3] Laboratory 1.3\n\n";
		
			cout<<"Number of Visited Programs: "<<counter<<"\n\n";
			int user1;	
			cout<<"Enter Laboratory 1 Exercise Subtopic: ";
			cin>>user1;	
	
			switch(user1){
				
			case 1: 
				counter++;
				cout<<"\nLaboratory 1.1 Exercise: Celcius to Fahrenheit Conversion\n";
				
				{
				
					float a;
					cout<<"\nInput Celsius: ";
					cin>>a;
		
					cout<<"The Fahrenheit is "<<a*9/5+32<<endl<<endl;
					
				}
				
				cout<<"=================================\n\n";
				cout<<"The program ended succesfully!\n";
				cout<<"What do you want to do next?\n\n";
				cout<<"\t[1] Return to Laboratory 1 Exercises\n";
				cout<<"\t[2] Go to All Exercises\n\n";
				cout<<"\tEnter Command: ";
				cin>>navigation;
				break;
	
				
			case 2:
			 	counter++;
				cout<<"\nLaboratory 1.2 Exercise: Fahrenheit to Celcius Conversion\n";
				
				{
				float b;
				cout<<"\nInput Fahrenheit: ";
				cin>>b;
	
				cout<<"The Celsius is "<<(b-32)*5/9<<endl<<endl;
				}
				
				cout<<"=================================\n\n";
				cout<<"The program ended succesfully!\n";
				cout<<"What do you want to do next?\n\n";
				cout<<"\t[1] Return to Laboratory 1 Exercises\n";
				cout<<"\t[2] Go to All Exercises\n\n";
				cout<<"\tEnter Command: ";
				cin>>navigation;
				break;
						
			case 3:
			 	counter++;
				cout<<"\nLaboratory 1.3 Exercise: Area of Square\n";
				
				{
				float c;
					cout<<"\nInput Side Value: ";
					cin>>c;
	
				cout<<"The area of the square is "<<c*c<<endl<<endl;
				}
				
				cout<<"=================================\n\n";
				cout<<"The program ended succesfully!\n";
				cout<<"What do you want to do next?\n\n";
				cout<<"\t[1] Return to Laboratory 1 Exercises\n";
				cout<<"\t[2] Go to All Exercises\n\n";
				cout<<"\tEnter Command: ";
				cin>>navigation;
				break;
				
			default:
				cout<<"\n\n*********************\n";
				cout<<"* INVALID EXERCISE! *\n";
				cout<<"*********************\n\n";
				
				cout<<"What do you want to do next?\n\n";
				cout<<"\t[1] Return to Laboratory 1 Exercises\n";
				cout<<"\t[2] Go to All Exercises\n\n";
				cout<<"\tEnter Command: ";
				cin>>navigation;
				break;
				
			}
			}
			
			break;
			
	case 2: 
			while(navigation!=2){
			system("cls");
			cout<<" ==============================\n";	
			cout<<" |||                        |||\n";
			cout<<" ||| Laboratory 2 Exercises |||\n";
			cout<<" |||                        |||\n";
			cout<<" ==============================\n\n";	
		
			cout<<"Select From the Following Laboratory Subtopic \n\n";
		
			cout<<"[1] Laboratory 2.1\n"; 
			cout<<"[2] Laboratory 2.2\n";
			cout<<"[3] Laboratory 2.3\n\n";
			int user2;
		
			cout<<"Number of Visited Programs: "<<counter<<"\n\n";
	
			cout<<"Enter Laboratory 2 Exercise Subtopic: ";
			cin>>user2;	
	
			switch(user2){
				case 1:
				counter++;
				cout<<"\nLaboratory 2.1 Exercise: Selecting a Beverage\n\n";
				
				{
					int beverage;
					
					cout<<"Select From the Following Beverage\n";
					cout<<"----------------------------------\n\n";
					cout<<"[1] Coke\n";
					cout<<"[2] Water\n";
					cout<<"[3] Sprite\n";
					cout<<"[4] Royal\n";
					cout<<"[5] Pepsi\n";
					cout<<endl;
					cout<<"Enter Your Beverage Choice: ";
					cin>>beverage;
					cout<<endl;
					
						switch(beverage){
							case 1:
								cout<<"You've chosen Coke!";
								break;
							case 2: 
								cout<<"You've chosen Water!";
								break;
							case 3:
								cout<<"You've chosen Sprite!";
								break;
							case 4:
								cout<<"You've chosen Royal!";
								break;
							case 5:
								cout<<"You've chosen Pepsi!";
								break;
							default:
								cout<<"Invalid choice!";
								break;
								}
				}
				
				cout<<endl<<endl;
				cout<<"=================================\n\n";
				cout<<"The program ended succesfully!\n";
				cout<<"What do you want to do next?\n\n";
				cout<<"\t[1] Return to Laboratory 2 Exercises\n";
				cout<<"\t[2] Go to All Exercises\n\n";
				cout<<"\tEnter Command: ";
				cin>>navigation;
				break;
				
				case 2:
				counter++;
				cout<<"\nLaboratory 2.2 Exercise: What is your Horoscope?\n\n";
				
				{
					int horoscope;
					cout<<"Select From the Following Horoscope\n";
					cout<<"-----------------------------------\n\n";
					cout<<"[1] Aries\n";
					cout<<"[2] Taurus\n";
					cout<<"[3] Gemini\n";
					cout<<"[4] Cancer\n";
					cout<<"[5] Leo\n";
					cout<<"[6] Virgo\n";
					cout<<"[7] Libra\n";
					cout<<"[8] Scorpio\n";
					cout<<"[9] Sagittarius\n";
					cout<<"[10] Capricorn\n";
					cout<<"[11] Aquarius\n";
					cout<<"[12] Pisces\n";
					cout<<"\n\n\tPlease enter the designated number for your Zodiac Sign: ";
					cin>>horoscope;
					cout<<endl<<endl;
					
					if(horoscope==1){
						cout<<"Aries\n\n";
						cout<<"Spread those social butterfly wings of yours, Aries. As the moon transits through your garrulous and gregarious third house until afternoon, you need to get out and about. Drop in and try a new fitness class, organize a pizza lunch with coworkers, or check out a newly opened neighborhood café as your remote office. Just make sure you don’t pin yourself down with evening plans. Before the workday ends, la luna will have shifted into Cancer, putting you in a cozy, domestic groove for two days. Solitary time will recharge you, so settle down with a cup of tea and a great book. Lucky Color: Green Lucky Number:12 ";
					}
					if(horoscope==2){
						cout<<"Taurus\n\n";
						cout<<"Today finds you in “get ‘er done” mode, thanks to the moon lingering in your practical second house until early afternoon. Dive into those backlogged tasks, pay pending bills, or get your filing system in order. Don’t underestimate the power of simplicity. Scaling back can make you feel worlds lighter. Comb your closet for outdated and ill-fitting items, and bag ‘em up for donation. With all this extra space, you’ve got cosmic clearance to treat yourself to a new versatile piece for your wardrobe. Lucky Color: Red Lucky Number:10";
					}
					if(horoscope==3){
						cout<<"Gemini\n\n";
						cout<<"It’s all about you this morning, Gemini, as the moon hovers in your sign until early afternoon. Considering the busy week you’re heading into, allow yourself some much-needed unstructured flow time. Put your spontaneous side at the wheel and see where your bliss takes you. This afternoon, the moon moves into your industrious second house helping you get back to the grind. These luxury-loving moonbeams are also perfect for a high-end evening out. Take a bit of extra time glamming up, then snag a table at that raved-about restaurant or check out a gallery opening in an up-and-coming district. Lucky Color: Blue Lucky Number:11";
					}
					if(horoscope==4){
						cout<<"Cancer\n\n";
						cout<<"Y-a-a-a-w-n! The moon nestles into your sleepy twelfth house until early afternoon, making it hard to get into Monday mode. Clear your A.M. schedule of obligations or see if you could do a work from home morning and lounge in yoga pants until lunchtime. Your tanks will quickly refuel by the afternoon as the moon floats on to Cancer for two and a half days. Dive back into the activities you've been putting off. Tonight, say “Yes!” to the first intriguing invite that comes your way. Spontaneity will lead to amazing adventures. Lucky Color: Brown Lucky Number:9";
					}
					if(horoscope==5){
						cout<<"Leo\n\n";
						cout<<"The week starts off on a social note, thanks to the moon hovering in your gregarious eleventh house until early afternoon. Rally friends together for a coffee, organize a brainstorming session, catch up on calls. Don’t make any rowdy P.M. plans, though, because by early afternoon la luna nestles into your sleepy twelfth house, calling for rest and rejuvenation. Devote the next two days to tying up loose ends and handling behind the scenes work. Tonight, snuggle up with your sweetie and Netflix, or take a long, hot soak and tuck in early. Lucky Color: Indigo Lucky Number:8";
					}
					if(horoscope==6){
						cout<<"Virgo\n\n";
						cout<<"All work and no play? That's your M.O. until early afternoon today, thanks to the moon hovering in your responsible tenth house. Be it a DIY project, organizing your office or tweaking an upcoming presentation, you can make major headway—or even cross the finish line. Enjoy this surge of productivity! As the tenth house also governs the men in your world, squeeze in an hour or two with one of your favorite fellas. When the moon moves into your eleventh house of group activity this afternoon, you’ll be ready to get the good times rolling with your fun-loving friends. There will always be things to check off on your to-do list, so set it aside for the evening and let your hair down with some karaoke or a trivia night challenge. Lucky Color: Violet Lucky Number:7";
					}
					if(horoscope==7){
						cout<<"Libra\n\n";
						cout<<"The wide world is calling your name, Libra! With the moon traveling through your adventurous ninth house until early afternoon, your indie spirit takes the helm. You’ll be happiest unencumbered by other people’s plans, so don’t tie yourself down to anything set in stone. An intriguing last-minute invite could land in your lap, or you might simply want to see where the wind takes you and work remotely from a new cafe for the day. A quick road trip could also work wonders for your mood and outlook on life if your schedule allows for playing some hooky. Come the afternoon, the moon slides into your dutiful tenth house, drawing out your responsible side. This will give you the drive you need to follow through on any previously scheduled obligations and catch up on pending work matters for the next two and a half days. Lucky Color: White Lucky Number:6";
					}
					if(horoscope==8){
						cout<<"Scorpio\n\n";
						cout<<"Privacy please! With the moon lingering in your secretive eight house early today, you'd be wise to shut out the public and give a project your intense focus. Or, you could hang the Do Not Disturb sign and linger in bed with a sexy plus-one for just a few extra hours. Come afternoon, the moon shifts into your adventurous ninth house, enticing you out of your cave and into the wide world. During this two-plus day cycle, you'll feel daring and optimistic—and that makes it easier to be proactive around any challenges that might have spawned despair over the weekend. As the ninth house rules travel, a mini-escape could be just what you need to lift your spirits. How about dinner and drinks with a friend in a different part of town? Lucky Color: Black Lucky Number:5";
					}
					if(horoscope==9){
						cout<<"Sagittarius\n\n";
						cout<<"Rein in your indie spirit today, Archer. With the moon transiting the partnership zones of your chart, your closest connections take center stage. One person in particular has been biding their time, waiting for an opening in your busy schedule. Offer your undivided attention, and show ‘em that they can still claim the top spot in your life. Not only will they feel appreciated, but you'll bolster your bond for the times when you're off globe-trotting or otherwise distracted! Already have an invite on the books tonight? See if you can snag a second ticket so you and your plus-one can enjoy it together. Lucky Color: Yellow Lucky Number:4";
					}
					if(horoscope==10){
						cout<<"Capricorn\n\n";
						cout<<"Hello, clean and green living! With the moon hovering in your self-care sector until this afternoon, start the day off with a healthy breakfast (acai bowl, anyone) and some intentional movement. Don’t underestimate the rejuvenating powers of a morning bike ride or a head-clearing walk to the office. Streamline your workspace before you dive in to your daily tasks—you'll be far more productive during this busy week. Come afternoon, the moon moves into your relationship house, helping you find synergies at every turn. Would that project move along faster if you brought in a partner? It's worth exploring! This romantic energy sets the scene for a special evening. Clock out at a decent hour and meet a date for some inspired conversation. Lucky Color: Orange Lucky Number:3";
					}
					if(horoscope==11){
						cout<<"Aquarius\n\n";
						cout<<"Work, play or…how about a bit of both, Aquarius? With the moon lingering in your festive fifth house until this afternoon, you’re in the mood to keep the fun from the weekend alive. Rally your peeps together for an upbeat morning activity, whether you're moving the Monday meeting to the nearest donut shop or lingering over breakfast with bae. This afternoon, as the moon shifts into your sixth house of self-care for two and a half days, you might eschew the sugary snacks for a nourishing treat from the smoothie bar. As the sixth house also rules organization, you’ll be eager to streamline and systematize. Download a life-hacking app and give your calendar a review. What extraneous obligations could you wiggle out of in the name of inner peace? Lucky Color: Pink Lucky Number:2";
					}
					if(horoscope==12){
						cout<<"Pisces\n\n";
						cout<<"The stars set the stage for a cozy start to the week, thanks to the moon lingering in your fourth house of “home sweet home” until this afternoon. You’ve got cosmic clearance to putter about Chez Pisces or lounge with your favorite family members for a bit of a late-start Monday. This afternoon, la luna shifts into your celebratory sector, so swap those Lulus for Louboutins. Earlier in the day, you might have invited the squad to yours for a home-cooked meal, but caution: cabin fever could ensue before the appetizers have been inhaled. Switch to a more glamorous plan, like Monday night margaritas or a high-powered networking event. Lucky Color: Red Lucky Number:1";
					}
				}
					
				cout<<endl<<endl;
				cout<<"=================================\n\n";
				cout<<"The program ended succesfully!\n";
				cout<<"What do you want to do next?\n\n";
				cout<<"\t[1] Return to Laboratory 2 Exercises\n";
				cout<<"\t[2] Go to All Exercises\n\n";
				cout<<"\tEnter Command: ";
				cin>>navigation;
				break;
				
				case 3:
				counter++;
				cout<<"\nLaboratory 2.3 Exercise: Monthly Sales\n\n";
				
				{
					int m;
					cout<<"Enter the Monthly Sales: ";
					cin>>m;
					
					if(m>=50000){
						cout<<"The Income is $"<<575+(m*0.16);
					}else if(m<50000 && m>=40000){
						cout<<"The Income is $"<<550+(m*0.14);
					}else if(m<40000 && m>=30000){
						cout<<"The Income is $"<<525+(m*0.12);
					}else if(m<30000 && m>=20000){
						cout<<"The Income is $"<<500+(m*0.9);
					}else if(m<20000 && m>=10000){
						cout<<"The Income is $"<<450+(m*0.5);
					}else if(m<10000){
						cout<<"The Income is $"<<400+(m*0.3);
					}
				}
				
				cout<<endl<<endl;
				cout<<"=================================\n\n";
				cout<<"The program ended succesfully!\n";
				cout<<"What do you want to do next?\n\n";
				cout<<"\t[1] Return to Laboratory 2 Exercises\n";
				cout<<"\t[2] Go to All Exercises\n\n";
				cout<<"\tEnter Command: ";
				cin>>navigation;
				break;
				
				default:
				cout<<"\n\n*********************\n";
				cout<<"* INVALID EXERCISE! *\n";
				cout<<"*********************\n\n";
				
				cout<<"What do you want to do next?\n\n";
				cout<<"\t[1] Return to Laboratory 2 Exercises\n";
				cout<<"\t[2] Go to All Exercises\n\n";
				cout<<"\tEnter Command: ";
				cin>>navigation;
				break;
				}
				
		}
			break;
		
		case 3:
			while(navigation!=2){
			system("cls");
			cout<<" ==============================\n";	
			cout<<" |||                        |||\n";
			cout<<" ||| Laboratory 3 Exercises |||\n";
			cout<<" |||                        |||\n";
			cout<<" ==============================\n\n";	
		
			cout<<"Select From the Following Laboratory Subtopic \n\n";
		
			cout<<"[1] Laboratory 3.1\n"; 
			cout<<"[3] Laboratory 3.2\n\n";
			int user3;
		
			cout<<"Number of Visited Programs: "<<counter<<"\n\n";
	
			cout<<"Enter Laboratory 3 Exercise Subtopic: ";
			cin>>user3;	
			
			switch(user3){
				case 1:
				counter++;
				cout<<"\nLaboratory 3.1 Exercise: For Loop Summation Iterations. \n\n";
				
				{
					int x, sum, y;
					sum=0;
					cout<<"\tEnter an Iteration: ";
					cin>>y;
					cout<<endl;
					
					for(int i=0; i<y; i++){
						cout<<"Enter an Integer: ";
						cin>>x;
						sum=sum+x;
					}
					
						 
					cout<<"\n\n\tThe Summation is "<<sum<<"!";
				}
			
				cout<<endl<<endl;
				cout<<"=================================\n\n";
				cout<<"The program ended succesfully!\n";
				cout<<"What do you want to do next?\n\n";
				cout<<"\t[1] Return to Laboratory 3 Exercises\n";
				cout<<"\t[2] Go to All Exercises\n\n";
				cout<<"\tEnter Command: ";
				cin>>navigation;
				break;
				
				case 2:
					
				counter++;
				cout<<"\nLaboratory 3.2 Exercise: For Loop Average Iterations. \n\n";
				
				{
					float x1, y1, add=0;
					cout<<"\tEnter an Iteration: ";
					cin>>y1;
					cout<<endl;
					
					for(int loop=0; loop<y1; loop++){
						cout<<"Enter an Integer: ";
						cin>>x1;
						add=add+x1;
					}
					
						 
					cout<<"\n\n\tThe Average is "<<add/y1<<"!";
				}
				
				cout<<endl<<endl;
				cout<<"=================================\n\n";
				cout<<"The program ended succesfully!\n";
				cout<<"What do you want to do next?\n\n";
				cout<<"\t[1] Return to Laboratory 3 Exercises\n";
				cout<<"\t[2] Go to All Exercises\n\n";
				cout<<"\tEnter Command: ";
				cin>>navigation;
				break;
				
				default:
				cout<<"\n\n*********************\n";
				cout<<"* INVALID EXERCISE! *\n";
				cout<<"*********************\n\n";
				
				cout<<"What do you want to do next?\n\n";
				cout<<"\t[1] Return to Laboratory 3 Exercises\n";
				cout<<"\t[2] Go to All Exercises\n\n";
				cout<<"\tEnter Command: ";
				cin>>navigation;
				break;
					
					}
				}
			break;
			
		case 4:
			while(navigation!=2){
			system("cls");
			cout<<" ==============================\n";	
			cout<<" |||                        |||\n";
			cout<<" ||| Laboratory 4 Exercises |||\n";
			cout<<" |||                        |||\n";
			cout<<" ==============================\n\n";	
		
			cout<<"Select From the Following Laboratory Subtopic \n\n";
		
			cout<<"[1] Laboratory 4.1\n"; 
			cout<<"[1] Laboratory 4.2\n";
			cout<<"[3] Laboratory 4.3\n\n";
			int user4;
		
			cout<<"Number of Visited Programs: "<<counter<<"\n\n";
	
			cout<<"Enter Laboratory 4 Exercise Subtopic: ";
			cin>>user4;	
			
			switch(user4){
				case 1:
				counter++;
				cout<<"\nLaboratory 4.1 Exercise: For Loop With Asterisk Part 1 *. \n\n";
				
				{
					int limit=1, in;
		
					cout<<"Input Desired Number of Asterisk:";
					cin>>in;
					cout<<"\nOutput:"<<endl;
					for(int rows=in; rows>=limit; rows--){
						for(int cols=rows; cols>=1; cols--){
							cout<<"*";
						}
						cout<<endl;
					}
				}
				
				cout<<endl<<endl;
				cout<<"=================================\n\n";
				cout<<"The program ended succesfully!\n";
				cout<<"What do you want to do next?\n\n";
				cout<<"\t[1] Return to Laboratory 4 Exercises\n";
				cout<<"\t[2] Go to All Exercises\n\n";
				cout<<"\tEnter Command: ";
				cin>>navigation;
				break;
				
				case 2: 
				counter++;
				cout<<"\nLaboratory 4.2 Exercise: For Loop With Asterisk Part 2*. \n\n";
			
				{
					int limit=6;
		
					for(int rows=1; rows<=limit; rows++){
						for(int cols=1; cols<=limit; cols++){
							if(rows==1 || rows==6){
								if(cols==3 || cols==4){
									cout<<"*";
								}else{
									cout<<" ";
								}
							
							}
							if(rows==2 || rows==5){
								if(cols==2 || cols==5){
									cout<<"*";
								}else{
									cout<<" ";
								}
							
							}
							if(rows==3 || rows==4){
								if(cols==1 || cols==6){
									cout<<"*";
								}else{
									cout<<" ";
								}
							
							}
						}
					cout<<endl;
					}
				}
				
				cout<<endl<<endl;
				cout<<"=================================\n\n";
				cout<<"The program ended succesfully!\n";
				cout<<"What do you want to do next?\n\n";
				cout<<"\t[1] Return to Laboratory 4 Exercises\n";
				cout<<"\t[2] Go to All Exercises\n\n";
				cout<<"\tEnter Command: ";
				cin>>navigation;
				break;
				
				case 3:
				counter++;
				cout<<"\nLaboratory 4.3 Exercise: Finding The Even Number In a Given Input *. \n\n";
				
				{
					int limit;

					cout<<"Input the Limit: ";
					cin>>limit;
					for (int tens=0; tens<limit; tens+=10){
					for (int mult=1; mult<=8; mult*=2){
					if(tens+mult <= limit){
					cout<<tens+mult<<" ";
					} else {
					cout<<" ";
					}
					}
					}
				}
				
				cout<<endl<<endl;
				cout<<"=================================\n\n";
				cout<<"The program ended succesfully!\n";
				cout<<"What do you want to do next?\n\n";
				cout<<"\t[1] Return to Laboratory 4 Exercises\n";
				cout<<"\t[2] Go to All Exercises\n\n";
				cout<<"\tEnter Command: ";
				cin>>navigation;
				break;
				
				default:
				cout<<"\n\n*********************\n";
				cout<<"* INVALID EXERCISE! *\n";
				cout<<"*********************\n\n";
				
				cout<<"What do you want to do next?\n\n";
				cout<<"\t[1] Return to Laboratory 4 Exercises\n";
				cout<<"\t[2] Go to All Exercises\n\n";
				cout<<"\tEnter Command: ";
				cin>>navigation;
				break;
				
					}
				}
			break;
			
		case 5:
			while(navigation!=2){
			system("cls");
			cout<<" ==============================\n";	
			cout<<" |||                        |||\n";
			cout<<" ||| Laboratory 5 Exercises |||\n";
			cout<<" |||                        |||\n";
			cout<<" ==============================\n\n";	
		
			cout<<"Select From the Following Laboratory Subtopic \n\n";
		
			cout<<"[1] Laboratory 5.1\n"; 
			cout<<"[1] Laboratory 5.2\n";
			cout<<"[3] Laboratory 5.3\n\n";
			int user5;
		
			cout<<"Number of Visited Programs: "<<counter<<"\n\n";
	
			cout<<"Enter Laboratory 5 Exercise Subtopic: ";
			cin>>user5;	
			
			switch(user5){
				case 1: 
				counter++;
				cout<<"\nLaboratory 5.1 Exercise: Reversing the Array Elements *. \n\n";
				
				{
					int numbers[10];
					for(int ctr=0; ctr<=9; ctr++){
						cout<<"Enter Value for Index ["<<ctr<<"]: ";
						cin>>numbers[ctr];
					
					}
					cout<<"\n\tThe Reversed Array is: "<<endl;
					for(int ctr=9; ctr>=0; ctr--){
						cout<<"\t"<<numbers[ctr]<<endl;
					}
				}
				
				cout<<endl<<endl;
				cout<<"=================================\n\n";
				cout<<"The program ended succesfully!\n";
				cout<<"What do you want to do next?\n\n";
				cout<<"\t[1] Return to Laboratory 5 Exercises\n";
				cout<<"\t[2] Go to All Exercises\n\n";
				cout<<"\tEnter Command: ";
				cin>>navigation;
				break;
				
				case 2:
				counter++;
				cout<<"\nLaboratory 5.2 Exercise: Searching the Elements Inside the Array *. \n\n";

				{

					int numbers[10];
	
					for(int ctr=0; ctr<10; ctr++){
						cout<<"Enter Value for Index ["<<ctr<<"]: ";
						cin>>numbers[ctr];
					}
					
					cout<<endl;
					int search;
						cout<<"Search for: ";
						cin>>search;
					cout<<endl;
					
					if(numbers[0] == search){
						cout<<"The number "<<numbers[0]<<" can be found in the array."<<endl;
					}
					else if(numbers[1] == search){
						cout<<"The number "<<numbers[1]<<" can be found in the array."<<endl;
					}
					else if(numbers[2] == search){
						cout<<"The number "<<numbers[2]<<" can be found in the array."<<endl;
					}
					else if(numbers[3] == search){
						cout<<"The number "<<numbers[3]<<" can be found in the array."<<endl;
					}
					else if(numbers[4] == search){
						cout<<"The number "<<numbers[4]<<" can be found in the array."<<endl;
					}
					else if(numbers[5] == search){
						cout<<"The number "<<numbers[5]<<" can be found in the array."<<endl;
					}
					else if(numbers[6] == search){
						cout<<"The number "<<numbers[6]<<" can be found in the array."<<endl;
					}
					else if(numbers[7] == search){
						cout<<"The number "<<numbers[7]<<" can be found in the array."<<endl;
					}
					else if(numbers[8] == search){
						cout<<"The number "<<numbers[8]<<" can be found in the array."<<endl;
					}
					else if(numbers[9] == search){
						cout<<"The number "<<numbers[9]<<" can be found in the array."<<endl;
					}
					else{ 
						cout<<"The number is not found inside the array.";
					}
					
				}
				
				cout<<endl<<endl;
				cout<<"=================================\n\n";
				cout<<"The program ended succesfully!\n";
				cout<<"What do you want to do next?\n\n";
				cout<<"\t[1] Return to Laboratory 5 Exercises\n";
				cout<<"\t[2] Go to All Exercises\n\n";
				cout<<"\tEnter Command: ";
				cin>>navigation;
				break;
				
				case 3:
				counter++;
				cout<<"\nLaboratory 5.3 Exercise: Identifying the Highest and Lowest Number Inside the Array *. \n\n";
				
				{
					int numbers[10];
					int highNumber=numbers[1];
					int lowNumber=numbers[0];
					
					for(int ctr=0; ctr<10; ctr++){
						cout<<"Enter Value for Index ["<<ctr<<"]: ";
						cin>>numbers[ctr];
					}
					
					
					for(int ctr=0; ctr<10; ctr++){
						if(numbers[ctr] > highNumber){
						highNumber = numbers[ctr];
						}
						if(numbers[ctr] < lowNumber){
						lowNumber = numbers[ctr];
						}
					}
					
					cout<<endl;
					cout<<"\tThe highest value is: "<<highNumber<<endl;
					cout<<"\tThe lowest value is: "<<lowNumber<<endl;	
				}	
				
				cout<<endl<<endl;
				cout<<"=================================\n\n";
				cout<<"The program ended succesfully!\n";
				cout<<"What do you want to do next?\n\n";
				cout<<"\t[1] Return to Laboratory 5 Exercises\n";
				cout<<"\t[2] Go to All Exercises\n\n";
				cout<<"\tEnter Command: ";
				cin>>navigation;
				break;
				
				default:
				cout<<"\n\n*********************\n";
				cout<<"* INVALID EXERCISE! *\n";
				cout<<"*********************\n\n";
				
				cout<<"What do you want to do next?\n\n";
				cout<<"\t[1] Return to Laboratory 5 Exercises\n";
				cout<<"\t[2] Go to All Exercises\n\n";
				cout<<"\tEnter Command: ";
				cin>>navigation;
				break;
				
					}
				}
			break;
			
			default: 
				cout<<"\t>>>>>>>>>>>>>>>>>>>>>>>>>\n";
				cout<<"\t>>                     >>\n";
				cout<<"\t>>      EXERCISE       >>\n";
				cout<<"\t>>       DO NOT        >>\n";
				cout<<"\t>>      EXIST!!!       >>\n";
				cout<<"\t>>                     >>\n";
				cout<<"\t>>>>>>>>>>>>>>>>>>>>>>>>>\n\n";
				
				
				cout<<"Please Return to the List of Exercise\n\n";
				cout<<"\t[2] Go to All Exercises\n\n";
				cout<<"\tEnter Command: ";
				cin>>navigation;
				break;
				
			
	}

}
	
	return 0;
}

