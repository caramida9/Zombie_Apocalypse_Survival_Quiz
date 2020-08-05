//Begin zombie apocalypse survival quiz
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
void functie(char a[1000])
{
	unsigned int i,k=0,spatiu;
	while(k<strlen(a))
	{
		for(i=k;i<k+80;i++)
		{
			if (i==strlen(a))
				break;
			if(a[i]==' ')
				spatiu=i;

		}
		while(k!=spatiu)
		{
			if (k==strlen(a))
				return;
			cout<<a[k];
			k++;
		}
		if (i==strlen(a))
		{
			while (k!=strlen(a))
			{
				cout<<a[k];
				k++;
			}
			return;
		}
		k++;
		cout<<endl;
	}
	return;
}
int main()
{
	char a[605];
	int n,phy,men,exp,emo;
	double phyrat, menrat, exprat, emorat, average;
	phy=men=exp=emo=0;
	functie("Welcome to the Ultimate 100 questions Zombie Apocalypse Survival Quiz.Here we are going to test your chances of survival during a zombie apocalypse based on your responses.The questions of this quiz are made after more traditional, grounded model of zombies, like those mentioned in the book 'Zombie Survival Guide' or 'World War Z'.For all intensive purposes this is not a T-virus, or Rage virus.Don't forget that this quiz is purely hypothetical and made for your entertainment.It's important to answer the questions honestly, as a false sense of confidence is just as deadly as the zombies themselves.");
	cout<<endl;
	functie("Type OK to begin");
	cout<<endl;
	cin>>a;
	functie("1. What gender you are? (You are going to use numbers to answer each question)");
	cout<<endl;
	cout<<endl;
	functie("1.1. Male");
	cout<<endl;
	functie("1.2. Female");
	cout<<endl;
	functie("1.3. Other");
	cout<<endl;
	cin>>n;
	if(n==1)
	{
		cout<<endl;
		functie("Men are stronger than women.LOL, Just kidding...");
	}
	if(n==2)
	{
		cout<<endl;
		functie("Women are stronger than men.LOL, Just kidding...");
	}
	if(n==3)
	{
		cout<<endl;
		functie("Okay weirdo, just get to the next question");
	}
	cout<<endl;
	cout<<endl;
	functie("2. How old are you ?");
	cout<<endl;
	cout<<endl;
	functie("2.1. Younger than 18.");
	cout<<endl;
	functie("2.2. Between 18 and 30.");
	cout<<endl;
	functie("2.3. Between 30 and 40.");
	cout<<endl;
	functie("2.4. Between 40 and 50.");
	cout<<endl;
	functie("2.5 Older than 50.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("The question here is simple.The younger one is, the more agile and stronger he is but he will lack sufficient life experience.");
	if(n==2)
		functie("The question here is simple.The younger one is, the more agile and stronger he is but he will lack sufficient life experience.In my opinion this is the best age.");
	if(n==3)
		functie("Being between 30 and 40 presents no significant advantage.The argument here is agility vs life-experience.");
	if(n==4)
		functie("The question here is simple.The older one is, the more experience he has from the school of life, however he will lose the strength and agility that he once had in the past, unless he keeps training.");
	if(n==5)
		functie("The question here is simple.The older one is, the more experience he has from the school of life, however he will lose the strength and agility that he once had in the past.");
	cout<<endl;
	cout<<endl;
	functie("3. How tall are you?");
	cout<<endl;
	cout<<endl;
	functie("3.1. Less than 4 feet.(120 centimeters)");
	cout<<endl;
	functie("3.2. Between 4 and 5 feet.(120-150 centimeters)");
	cout<<endl;
	functie("3.3. Between 5 and 6 feet.(150-180 centimeters)");
	cout<<endl;
	functie("3.4. Between 6 and 7 feet.(180-210 centimeters)");
	cout<<endl;
	functie("3.5. Over 7 feet.(210 centimeters)");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("Being smaller than 4 feet will be a significant detriment during an outbreak.Although it would be fairly easy to hide, you will not be able to reach the head of the zombies without a fire arm or a spear like weapon.");
		phy=phy+1;
	}
	if(n==2)
	{
		functie("Being between 4 and 5 feet is slightly disadvantageos when fighting zombies but will help you with hiding and agility.");
		phy=phy+2;
	}
	if(n==3)
	{
		functie("Being between 5 and 6 feet poseds no significant advantage.The argument here is offence vs defence or spotting ve being spotted.");
		phy=phy+3;
	}
	if(n==4)
	{
		functie("Being between 6 and 7 feet is probably the best height.You have a good phisical stature while you will still maintain some agility and hiding ability.");
		phy=phy+4;
	}
	if(n==5)
	{
		functie("Being taller than 7 feet is a disadvantage.Although you will seem a formidable obstacle for most zombies, being that tall hinders your agility and your ability to hide properly.");
		phy=phy+2;
	}
	cout<<endl;
	cout<<endl;
	functie("3. How would you describe your overval fitness?");
	cout<<endl;
	cout<<endl;
	functie("3.1. Skin and bones");
	cout<<endl;
	functie("3.2. Slim");
	cout<<endl;
	functie("3.3. Normal/Average");
	cout<<endl;
	functie("3.4. Chubby");
	cout<<endl;
	functie("3.5. Obesse");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("Being skin and bones is quite disadvantageos.Although you have good agility and hiding abilities, you probably don't have much strength and you certanly don't have fats that could keep you alive in case you don't have food.");
		phy=phy+1;
	}
	if(n==2)
	{
		functie("Being slim is a good fitness, you have good agility and hiding abilities, and also you have more strength and fats that will help you over time.");
		phy=phy+2;
	}
	if(n==3)
	{
		functie("Being avereage doesn't have any significant advantage or disadvantage.You still maintain a good agility while you have a good amount of fats and muscles that will help you to survive.");
		phy=phy+3;
	}
	if(n==4)
	{
		functie("Being chubby is slightly disadvantageous.You do have a lot of fats which will certanly help you to resist hunger for a longer time, but it will hinder your agility and hiding skill.");
		phy=phy+2;
	}
	if(n==5)
	{
		functie("Being obesse is a pretty bad choice during an outbreak.While you do have lots of fats to help you resist hunger, those fats will have an big negative impact on your agility and hiding skills, nevermind that you can die from a heart-failure due to huge amounts of fat.Go and do some workout man.");
		phy=phy+1;
	}
	cout<<endl;
	cout<<endl;
	functie("4. How long is your hair?");
	cout<<endl;
	cout<<endl;
	functie("4.1. Bald/shaved");
	cout<<endl;
	functie("4.2. Short/cropped");
	cout<<endl;
	functie("4.3. Above my shoulders");
	cout<<endl;
	functie("4.4. At the level of my shoulders");
	cout<<endl;
	functie("4.5. Long, below my shoulders");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("Having a bald/shaved hair is the best during an outbreak, as the zombies will have no hair to grab and pull you towards them.");
		exp=exp+3;
	}
	if(n==2)
	{
		functie("Having a short/cropped hair is the second best.The zombies don't have much more to grab on, but they still have a little so it is recommanded it to cut it.");
		exp=exp+2;
		emo=emo+1;
	}
	if(n==3)
	{
		functie("The longer one's hair is the more danger he puts himself in.Having a longer hair will make it easier for zombies to grab it and pull you towards them.Also many people having a long hair ussually have an emotional attachment to it that prevents them to cut it.Still it's never late to have it cut.");
		exp=exp+1;
		emo=emo+2;
	}
	if(n==4)
	{
		functie("The longer one's hair is the more danger he puts himself in.Having a longer hair will make it easier for zombies to grab it and pull you towards them.Also many people having a long hair ussually have an emotional attachment to it that prevents them to cut it.Still it's never late to have it cut.");
		emo=emo+3;
	}
	if(n==5)
	{
		functie("The longer one's hair is the more danger he puts himself in.Having a longer hair will make it easier for zombies to grab it and pull you towards them.Also many people having a long hair ussually have an emotional attachment to it that prevents them to cut it.Still it's never late to have it cut.");
		emo=emo+4;
	}
	cout<<endl;
	cout<<endl;
	functie("5. How often do you work out?(not necessarly intense work out)");
	cout<<endl;
	cout<<endl;
	functie("5.1. I work out everyday.");
	cout<<endl;
	functie("5.2. I work out several times a week.");
	cout<<endl;
	functie("5.3. I work out several times a month.");
	cout<<endl;
	functie("5.4. I work out less than once per mounth.");
	cout<<endl;
	functie("5.5. Work out?! I am a couch potato...");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("The answer here is simple and logical.The more one works out the more fit and prepared he will be for a zombie outbreak.");
		phy=phy+4;
	}
	if(n==2)
	{
		functie("The answer here is simple and logical.The more one works out the more fit and prepared he will be for a zombie outbreak.");
		phy=phy+3;
	}
	if(n==3)
	{
		functie("The answer here is simple and logical.The more one works out the more fit and prepared he will be for a zombie outbreak.");
		phy=phy+2;
	}
	if(n==4)
	{
		functie("The answer here is simple and logical.The more one works out the more fit and prepared he will be for a zombie outbreak.");
		phy=phy+1;
	}
	if(n==5)
		functie("The answer here is simple and logical.The more one works out the more fit and prepared he will be for a zombie outbreak.Not working out at all may have bad consequences.You should get off your couch.");
	cout<<endl;
	cout<<endl;
	functie("6. How fast can you run during an emrgency, on short distances(100-200 meters)?");
	cout<<endl;
	cout<<endl;
	functie("6.1. Very fast.About 40 km/h.I'm olimpic.");
	cout<<endl;
	functie("6.2. Average fast.Between 30-40 km/h.");
	cout<<endl;
	functie("6.3. I can run pretty fast (30 km/h), but I will be extremly drained afterwards.");
	cout<<endl;
	functie("6.4. What does it matter, since I'm faster than the last one in the group.");
	cout<<endl;
	functie("6.5. I'm not fast at all.I can barely run...");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("This is a straight foward question.The faster one can run the easier it will be for him to outrun a zombie horde.");
		phy=phy+4;
	}
	if(n==2)
	{
		functie("This is a straight foward question.The faster one can run the easier it will be for him to outrun a zombie horde.");
		phy=phy+3;
	}
	if(n==3)
	{
		functie("This is a straight foward question.The faster one can run the easier it will be for him to outrun a zombie horde.Getting tired fast after a run is not pretty good but at least you will get a small distance advantage from your initial run.");
		phy=phy+2;
	}
	if(n==4)
	{
		functie("This answer gives you a false sense of confidence.You might say that you are faster than the last of the group, but you will never now when you are going to be that one until is too late.");
		phy=phy+1;
	}
	if(n==5)
		functie("Not being able to run fast enough will be a severe detriment if you are going to be pursued by a zombie horde which is very likely.Don't be sure that the zombies won't run because we can't know what kind of zombies will be.");
	cout<<endl;
	cout<<endl;
	functie("7. How much can you jog(run at a normal speed) without stopping during an emrgency situation?");
	cout<<endl;
	cout<<endl;
	functie("7.1. Less than a mile.(1.6 km).");
	cout<<endl;
	functie("7.2. Between 1-3 miles.");
	cout<<endl;
	functie("7.3. Between 3-6 miles.");
	cout<<endl;
	functie("7.4. Between 6-10 miles.");
	cout<<endl;
	functie("7.5. Between 10-15 miles.");
	cout<<endl;
	functie("7.6. Between 15-20 miles.");
	cout<<endl;
	functie("7.7. Over 20 miles(My name is Marathon).");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("The answer here is cut and dry.The longer can one run without stopping the better he will be of during a zombie outbreak.");
	if(n==2)
	{
		functie("The answer here is cut and dry.The longer can one run without stopping the better he will be of during a zombie outbreak.");
		phy=phy+1;
	}
	if(n==3)
	{
		functie("The answer here is cut and dry.The longer can one run without stopping the better he will be of during a zombie outbreak.");
		phy=phy+2;
	}
	if(n==4)
	{
		functie("The answer here is cut and dry.The longer can one run without stopping the better he will be of during a zombie outbreak.");
		phy=phy+3;
	}
	if(n==5)
	{
		functie("The answer here is cut and dry.The longer can one run without stopping the better he will be of during a zombie outbreak.");
		phy=phy+4;
	}
	if(n==6)
	{
		functie("The answer here is cut and dry.The longer can one run without stopping the better he will be of during a zombie outbreak.");
		phy=phy+5;
	}
	if(n==7)
	{
		functie("The answer here is cut and dry.The longer can one run without stopping the better he will be of during a zombie outbreak.You really are a freak man...");
		phy=phy+6;
	}
	cout<<endl;
	cout<<endl;
	functie("8. How often do you get sick(including the common cold)?");
	cout<<endl;
	cout<<endl;
	functie("8.1. Less than once per year(I'm a health machine).");
	cout<<endl;
	functie("8.2. Between 1-3 times a year.");
	cout<<endl;
	functie("8.3. Between 3-6 times a year.");
	cout<<endl;
	functie("8.4. Between 6-10 times a year.");
	cout<<endl;
	functie("8.5. Between 10-15 times a year.");
	cout<<endl;
	functie("8.6. Between 15-20 times a year.(I forgot my pills)");
	cout<<endl;
	functie("8.7. Over 20 times a year.*cough**cough*");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("The answer here is cut and dry.The less one get's sick the more healthy he will be, and have better immunity system to survive the apocalypse.");
		phy=phy+6;
	}
	if(n==2)
	{
		functie("The answer here is cut and dry.The less one get's sick the more healthy he will be, and have better immunity system to survive the apocalypse.");
		phy=phy+5;
	}
	if(n==3)
	{
		functie("The answer here is cut and dry.The less one get's sick the more healthy he will be, and have better immunity system to survive the apocalypse.");
		phy=phy+4;
	}
	if(n==4)
	{
		functie("The answer here is cut and dry.The less one get's sick the more healthy he will be, and have better immunity system to survive the apocalypse.");
		phy=phy+3;
	}
	if(n==5)
	{
		functie("The answer here is cut and dry.The less one get's sick the more healthy he will be, and have better immunity system to survive the apocalypse.");
		phy=phy+2;
	}
	if(n==6)
	{
		functie("The answer here is cut and dry.The less one get's sick the more healthy he will be, and have better immunity system to survive the apocalypse.");
		phy=phy+1;
	}
	if(n==7)
		functie("The answer here is cut and dry.The less one get's sick the more healthy he will be, and have better immunity system to survive the apocalypse.");
	cout<<endl;
	cout<<endl;
	functie("9. What can you tell my about your hygiene standards?");
	cout<<endl;
	cout<<endl;
	functie("9.1. I wash my hands and brush my teeth 3 times a day.");
	cout<<endl;
	functie("9.2. I wash my hands and brush my teeth about once per day.");
	cout<<endl;
	functie("9.3. I just take a shower once per day.");
	cout<<endl;
	functie("9.4. I just take a bath once per week.");
	cout<<endl;
	functie("9.5. WHAT?! SOAP BAD!!");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("The answer here is also quite simple.The better hygiene standards one has the cleaner and healthier he will be, and the chances that he will catch any disease will be reduced.However keep in mind that during an zombie outbreak you will have limited time and supply for this kind of stuff.");
		phy=phy+4;
	}
	if(n==2)
	{
		functie("The answer here is also quite simple.The better hygiene standards one has the cleaner and healthier he will be, and the chances that he will catch any disease will be reduced.However keep in mind that during an zombie outbreak you will have limited time and supply for this kind of stuff.");
		phy=phy+3;
	}
	if(n==3)
	{
		functie("The answer here is also quite simple.The better hygiene standards one has the cleaner and healthier he will be, and the chances that he will catch any disease will be reduced.However keep in mind that during an zombie outbreak you will have limited time and supply for this kind of stuff.");
		phy=phy+2;
	}
	if(n==4)
	{
		functie("The answer here is also quite simple.The better hygiene standards one has the cleaner and healthier he will be, and the chances that he will catch any disease will be reduced.However keep in mind that during an zombie outbreak you will have limited time and supply for this kind of stuff.");
		phy=phy+1;
	}
	if(n==5)
		functie("The answer here is also quite simple.The better hygiene standards one has the cleaner and healthier he will be, and the chances that he will catch any disease will be reduced.However keep in mind that during an zombie outbreak you will have limited time and supply for this kind of stuff.But seriously you should clean your ass man...");
	cout<<endl;
	cout<<endl;
	functie("10. How often do you get into physical fights (and win)?");
	cout<<endl;
	cout<<endl;
	functie("10.1. About once per week.I just can't get along with people...");
	cout<<endl;
	functie("10.2. About once per month.");
	cout<<endl;
	functie("10.3. About once per year");
	cout<<endl;
	functie("10.4. I got in a few fights in my entire life.");
	cout<<endl;
	functie("10.5. I'm a pacifist.I didn't and I will never raise my hand against another fella.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("As badass and uneducational as it might sound, a person who gets into physical fights(and wins) often will have better combat experience, but it also means that he can't get along with other people, which can be dangerous during an outbreak.");
		phy=phy+4;
	}
	if(n==2)
	{
		functie("As badass and uneducational as it might sound, a person who gets into physical fights(and wins) often will have better combat experience, but it also means that he can't get along with other people, which can be dangerous during an outbreak.");
		phy=phy+3;
		emo=emo+1;
	}
	if(n==3)
	{
		functie("As badass and uneducational as it might sound, a person who gets into physical fights(and wins) often will have better combat experience, but it also means that he can't get along with other people, which can be dangerous during an outbreak.");
		phy=phy+2;
		emo=emo+2;
	}
	if(n==4)
	{
		functie("As badass and uneducational as it might sound, a person who gets into physical fights(and wins) often will have better combat experience, but it also means that he can't get along with other people, which can be dangerous during an outbreak.");
		emo=emo+3;
		phy=phy+1;
	}
	if(n==5)
	{
		functie("As badass and uneducational as it might sound, a person who gets into physical fights(and wins) often will have better combat experience, but it also means that he can't get along with other people, which can be dangerous during an outbreak.");
		emo=emo+4;
	}
	cout<<endl;
	cout<<endl;
	functie("11. In which of the following do you have the most formal training?");
	cout<<endl;
	cout<<endl;
	functie("11.1. Martial Arts (ex Karate, Taekwondo)");
	cout<<endl;
	functie("11.2. Self-Defense/Combatives (ex Krav Magra, Combat Training)");
	cout<<endl;
	functie("11.3. Combat Sport (ex boxing, arena fighting)");
	cout<<endl;
	functie("11.4. None of above.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("The discipline and strict training of many martial arts will both strengthen your body and focus your mind. The experience you gain from martial arts training would aid you more than that of combat sports in close combat with the undead.");
		phy=phy+3;
		men=men+2;
	}
	if(n==2)
	{
		functie("Combat training, such as Krav Magra, will give you knowledge of how to quickly and effectively disable or kill your opponent. Legitimate self-defense classes and combative training will improve your chances the most in close combat with the undead.");
		phy=phy+2;
		men=men+2;
	}
	if(n==3)
	{
		functie("Combat sports, such as boxing and arena fighting, could help to prepare you for close combat with the undead. The strength and mental training will give you a needed edge.");
		phy=phy+2;
		men=men+1;
	}
	if(n==4)
		functie("Without any formal training in hand-to-hand combat, you survival in close combat with zombies is severely reduced. Barfights and aggitated brawling won't prepare you for a zombie outbreak either.");
	cout<<endl;
	cout<<endl;
	functie("12. What other sports do you practice(or have you practiced until recently)?");
	cout<<endl;
	cout<<endl;
	functie("12.1. Team sports (ex Football, Basketball, Baseball etc.)");
	cout<<endl;
	functie("12.2 Individual sports (ex Swimming, Tennis, Atlethism etc.)");
	cout<<endl;
	functie("12.3. Mind sports(ex chess, advanced strategy video games etc)");
	cout<<endl;
	functie("12.4. I've practiced a lot of sports of all kind.");
	cout<<endl;
	functie("12.5. Uhm... Sports???");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("Team sports like Football or Basketball, will not only increase your overvall physical rating, but it will also teach you what team-work means, and who to interact with other people properly.");
		phy=phy+3;
		emo=emo+3;
	}
	if(n==2)
	{
		functie("Individual sports like swimming or tennis, will defenetly increase all your physical aptitudes, and therefore your chances of survival however you will lack interaction with other team meates, which could have helped you.");
		phy=phy+3;
	}
	if(n==3)
	{
		functie("Although usually underestimated mind sports are very beneficial.It will not help you face off a zombie directly, but the logics, and problem solving skills you will gain will help you adapt to different kinds of situations, and will also give you the ability to creat advanced survival strategies... however you will lack any physical training.");
		men=men+3;
	}
	if(n==4)
	{
		functie("If you have practiced more than one kind of sports and still practising, might mean you are a sports addicted.You don't have a lot of free time, but the physical, mental, and social interactions rating will recieve a huge boost from your activities.Still remember that surviving is a little bit different from sports.");
		phy=phy+3;
		men=men+3;
		emo=emo+3;
	}
	if(n==5)
		functie("Never practicing any kind of sports will have a huge detriment on your chances of survival during an outbreak.");
	cout<<endl;
	cout<<endl;
	functie("13. Have you ever served one of the following?");
	cout<<endl;
	cout<<endl;
	functie("13.1. Armed forces");
	cout<<endl;
	functie("13.2. Police forces");
	cout<<endl;
	functie("13.3. Both");
	cout<<endl;
	functie("13.4. Neither");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("Having served the armed forces is a great advantage due to the availablity and quality of equipment, survival and combat training, and affiliation with trained personnel.Be careful however as you may be required to quell outbreaks into their later stages if in active duty.");
		phy=phy+2;
		men=men+2;
	}
	if(n==2)
	{
		functie("Serving or having served in a police department provides you with training and other benefits. If you're currently part of a police force, you'll also have access to guns and other equipment that others won't. However, you may be required to quell an outbreak in its initial stages.");
		phy=phy+1;
		men=men+1;
	}
	if(n==3)
	{
		functie("Having served in both combines the knowledge and training of two well-equipped occupations. Your wealth of knowledge and experience would be indispensible. This is obviously the best answer.");
		phy=phy+3;
		men=men+3;
	}
	if(n==4)
		functie("Having never served in the Armed Forces or a Polic Force deprives you of experience, training, equipment, and other perks that would significantly improve your odds of survival. Needless to say, this is the worst answer.");
	cout<<endl;
	cout<<endl;
	functie("14. Do you know how to light a fire?");
	cout<<endl;
	cout<<endl;
	functie("14.1. Yes, I know several improvised ways to make a fire.");
	cout<<endl;
	functie("14.2. Yes, but I would need a lighter and/or matches to do it.");
	cout<<endl;
	functie("14.3. No, but I know the theory.");
	cout<<endl;
	functie("14.4. What?! Fire Bad!!");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("Knowing more than just one improvised way to make a fire will be extremly beneficial when you will need to survive away from your home, without any tool that we use today.");
		men=men+3;
	}
	if(n==2)
	{
		functie("Knowing the basic way to light a fire will be usefull when you will need to survive away from home, as lighters and matches are a very encountered commodity.However sometimes you might not have access to it which could prove problematic.");
		men=men+2;
	}
	if(n==3)
	{
		functie("Knowing the theory of how to make a fire is usefull, but you will require some practical experience before going out in the wild.");
		men=men+1;
	}
	if(n==4)
		functie("Not knowing anything about fires will be a significant detriment to your chances of survival in the wilderness.Micro-waves and cooking-pans are not the only way to cook food.");
	cout<<endl;
	cout<<endl;
	functie("15. Answer this one honestly.How would you rate your physical attractivness(or sex appeal)?");
	cout<<endl;
	cout<<endl;
	functie("15.1. I can see people starring at me everwhere I go.");
	cout<<endl;
	functie("15.2. Well I'm not a sculpture, but I am pretty sexy.");
	cout<<endl;
	functie("15.3. Normal/Average");
	cout<<endl;
	functie("15.4. I'm not the best.");
	cout<<endl;
	functie("15.5. I don't like to walk during daylight.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("The middle 3 answer are the best.The extreme might prove problematic when dealing with other survivors.Being very attractive will help you make easy friendships, or simply seduce others into helping you, but happen you to meet an unfriendly group of survivors, and you will be transformed into their sex toy.Being very unnattractive will prevent that problem, but it will be more difficult to tie friendships and get help.");
	if(n==2)
	{
		functie("The middle 3 answer are the best.The extreme might prove problematic when dealing with other survivors.Being very attractive will help you make easy friendships, or simply seduce others into helping you, but happen you to meet an unfriendly group of survivors, and you will be transformed into their sex toy.Being very unnattractive will prevent that problem, but it will be more difficult to tie friendships and get help.");
		men=men+1;
	}
	if(n==3)
	{
		functie("The middle 3 answer are the best.The extreme might prove problematic when dealing with other survivors.Being very attractive will help you make easy friendships, or simply seduce others into helping you, but happen you to meet an unfriendly group of survivors, and you will be transformed into their sex toy.Being very unnattractive will prevent that problem, but it will be more difficult to tie friendships and get help.");
		men=men+1;
	}
	if(n==4)
	{
		functie("The middle 3 answer are the best.The extreme might prove problematic when dealing with other survivors.Being very attractive will help you make easy friendships, or simply seduce others into helping you, but happen you to meet an unfriendly group of survivors, and you will be transformed into their sex toy.Being very unnattractive will prevent that problem, but it will be more difficult to tie friendships and get help.");
		men=men+1;
	}
	if(n==5)
		functie("The middle 3 answer are the best.The extreme might prove problematic when dealing with other survivors.Being very attractive will help you make easy friendships, or simply seduce others into helping you, but happen you to meet an unfriendly group of survivors, and you will be transformed into their sex toy.Being very unnattractive will prevent that problem, but it will be more difficult to tie friendships and get help.");
	cout<<endl;
	cout<<endl;
	functie("16. How easy do you wake up( or how deep is your sleep)?");
	cout<<endl;
	cout<<endl;
	functie("16.1. My alarm clock has a baseball bat installed.");
	cout<<endl;
	functie("16.2. A few nudges will wake me up.");
	cout<<endl;
	functie("16.3. Calling my name/ or an normal alarm clock is enough to wake me up.");
	cout<<endl;
	functie("16.4. Small noises distrupt my sleep.");
	cout<<endl;
	functie("16.5. I wake up several times at night.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("Although sleeping habits might change during an outbreak,a person who wakes up so dificult will receive more enough energy from resting but it will risk being grabed by zombies while asleep.");
		exp=exp+1;
	}
	if(n==2)
	{
		functie("Although sleeping habits might change during an outbreak,a person with a deep sleep will receive proper energy from sleeping but it could be snatched upon by zombies while sleeping.");
		exp=exp+2;
	}
	if(n==3)
	{
		functie("Although sleeping habits might change during an outbreak,a person who isn't sleeping neither to deep nor to slightly, will reveive enough rest from sleeping while it will be difficult to be snatched upon by zombies.");
		exp=exp+3;
	}
	if(n==4)
	{
		functie("Although sleeping habits might change during an outbreak,a person who is easily disturbed will not risk a surprise attack while sleeping but will suffer from insufficient resting");
		exp=exp+2;
	}
	if(n==5)
	{
		functie("Although sleeping habits might change during an outbreak,a person who wakes up several times at night will be aware and will not risk a surprise attack while sleeping, but he will defenetly suffer from extreme fatigue that can take him down after a while...");
		exp=exp+1;
	}
	cout<<endl;
	cout<<endl;
	functie("17. How good you are at cooking?");
	cout<<endl;
	cout<<endl;
	functie("17.1. I'm am very experienced.I have cooked on my own many times.");
	cout<<endl;
	functie("17.2. I have some experience.I cooked and watch someone cooking several times.");
	cout<<endl;
	functie("17.3. Uhm... Does sandwitches and milk with cereals count?");
	cout<<endl;
	functie("17.4. What does it matter since I have a wife/mom/sister ... ?");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("Being very experience at cooking will be very advantageous during an outbreak.Cooking food is essential to make sure it's healthly and to get as much nutriments as possible from it.Also your skill will make you more appreciated in your group.");
		men=men+3;
	}
	if(n==2)
	{
		functie("Having some experience in cooking will help you cook your food and keep you somewhat healthier, but still you will need a little bit more practice since cooking food is essential to make sure it's healthly and to get as much nutriments as possible from it.");
		men=men+2;
	}
	if(n==3)
	{
		functie("Knowing only the basic cooking might help you survive the day to day life, but during an otbreak, if you find yourself outsinde with limited supplies not knowing how to cook will hinder your survival chances.");
		men=men+1;
	}
	if(n==4)
		functie("Maybe you do have a woman now, but that mustn't be taken as a guarantee.Not knowing anything about cooking will significantly hinder your survival chance, and you might get an awful indigestion by eating uncooked food.");
	cout<<endl;
	cout<<endl;
	functie("18. How much experience do you have in firearms?");
	cout<<endl;
	cout<<endl;
	functie("18.1. Mama says the pistol is the devil's hand.");
	cout<<endl;
	functie("18.2. I don't have any experience.");
	cout<<endl;
	functie("18.3. Only from video-games/tv documentaries.");
	cout<<endl;
	functie("18.4. I fired a gun several times.");
	cout<<endl;
	functie("18.5. I have been formally trained in their use.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("This is, obviously, the worst answer possible. Without using guns, it would be extremely hard to kill zombies or renegades while remaining relatively safe. Hunting game would also prove difficult without firearms.");
		emo=emo+1;
	}
	if(n==2)
	{
		functie("Not having experience with firearms is detrimental to your survival. However, firearms are relatively easy to operate nowadays, but without experience the effectiveness of their use and their maintenace would suffer.");
		men=men+1;
	}
	if(n==3)
	{
		functie("Although not 'murder simulators,' as some say, realistic video games provide the player with the weapon's name, caliber, firing rate, and other technical details.The same goes with tv documentaries. Even so, it's no substitute for real experience; the effectiveness of the firearm's use and maintenace would suffer.");
		men=men+2;
	}
	if(n==4)
	{
		functie("Firing a gun several times gives the user experience with firearms, though not necessesarily making them knowledgable. They will, however, have had to manually aim and fire a gun and deal with its recoil, perhaps learning about loading and maintaining the weapon.");
		men=men+3;
	}
	if(n==5)
	{
		functie("Formal education and training in firearms is best. The user would learn to operate and maintain weapons effectively. Training imparts knowledge on using and maintaining weapons in general, making trainees more readily able to learn and master unfamiliar weapons.");
		men=men+4;
	}
	cout<<endl;
	cout<<endl;
	functie("19. In case of emergency, which one of the following could you treat?");
	cout<<endl;
	cout<<endl;
	functie("19.1. None, blood is gross.");
	cout<<endl;
	functie("19.2. A cut or scrape.");
	cout<<endl;
	functie("19.3. A boken bone.");
	cout<<endl;
	functie("19.4. A severe laceration/gunshot wound.");
	cout<<endl;
	functie("19.5. At least two of above.");
	cout<<endl;
	functie("19.6. All of above.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("This question gauges your knowledge of first aid and medicine. Those who are able to treat themselves and others will fare much better than those who cannot.");
	if(n==2)
	{
		functie("This question gauges your knowledge of first aid and medicine. Those who are able to treat themselves and others will fare much better than those who cannot.");
		men=men+1;
	}
	if(n==3)
	{
		functie("This question gauges your knowledge of first aid and medicine. Those who are able to treat themselves and others will fare much better than those who cannot.");
		men=men+2;
	}
	if(n==4)
	{
		functie("This question gauges your knowledge of first aid and medicine. Those who are able to treat themselves and others will fare much better than those who cannot.");
		men=men+2;
	}
	if(n==5)
	{
		functie("This question gauges your knowledge of first aid and medicine. Those who are able to treat themselves and others will fare much better than those who cannot.");
		men=men+3;
	}
	if(n==6)
	{
		functie("This question gauges your knowledge of first aid and medicine. Those who are able to treat themselves and others will fare much better than those who cannot.");
		men=men+4;
	}
	cout<<endl;
	cout<<endl;
	functie("20. Would you be willing to use sex in order to obtain supplies,weapons,help etc. regardless of gender and/or sex appeal?");
	cout<<endl;
	cout<<endl;
	functie("20.1. Yes");
	cout<<endl;
	functie("20.2. No");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("This question isn't weighted heavily either way. However, bargaining for needed supplies with the free commodity of sex isn't a bad decision if you know what you're getting into(be carefull to suspect people as this is an easy way to get a STD). To put it bluntly, using sex as currency is economically advantagous.");
		men=men+1;
	}
	if(n==2)
		functie("This question isn't weighted heavily either way. However, bargaining for needed supplies with the free commodity of sex isn't a bad decision if you know what you're getting into(be carefull to suspect people as this is an easy way to get a STD). To put it bluntly, using sex as currency is economically advantagous.");
	cout<<endl;
	cout<<endl;
	functie("21. How much educational and schooling experience do you have?");
	cout<<endl;
	cout<<endl;
	functie("21.1. Only primary school.");
	cout<<endl;
	functie("21.2. High school/GED ");
	cout<<endl;
	functie("21.3. Two year degree ");
	cout<<endl;
	functie("21.4. Four year degree ");
	cout<<endl;
	functie("21.5. Master's degree ");
	cout<<endl;
	functie("21.6. I only learn from the school of life.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		men=men+1;
		functie("This is a purely diagnostic question. The more schooling someone has, the more knowledge they have likely absorbed. Such knowledge could prove useful both in daily survival and the rebuilding of civilization.");
	}
	if(n==2)
	{
		functie("This is a purely diagnostic question. The more schooling someone has, the more knowledge they have likely absorbed. Such knowledge could prove useful both in daily survival and the rebuilding of civilization.");
		men=men+2;
	}
	if(n==3)
	{
		functie("This is a purely diagnostic question. The more schooling someone has, the more knowledge they have likely absorbed. Such knowledge could prove useful both in daily survival and the rebuilding of civilization.");
		men=men+3;
	}
	if(n==4)
	{
		functie("This is a purely diagnostic question. The more schooling someone has, the more knowledge they have likely absorbed. Such knowledge could prove useful both in daily survival and the rebuilding of civilization.");
		men=men+4;
	}
	if(n==5)
	{
		functie("This is a purely diagnostic question. The more schooling someone has, the more knowledge they have likely absorbed. Such knowledge could prove useful both in daily survival and the rebuilding of civilization.");
		men=men+5;
	}
	if(n==6)
		functie("This is a fancy way of saying that you don't haven't really passed to school.Indeed the school of life is important but without any schooling you are missing much knowledge and education. Such knowledge could have proven useful both in daily survival and the rebuilding of civilization.");
	cout<<endl;
	cout<<endl;
	functie("22. Where do you live?");
	cout<<endl;
	cout<<endl;
	functie("22.1. A major city");
	cout<<endl;
	functie("22.2. A small town/suburbs");
	cout<<endl;
	functie("22.3. A rural community");
	cout<<endl;
	functie("22.4. The backcountry");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("Living in a major city is the worst situation. Anarchy would break out quickly and the cramped conditions in major cities facilitates the spread of zombies. Industrial accidents and fires will also be a serious issue. If you live in a major city and an outbreak occurs, leave.");
	if(n==2)
		functie("Living in a small town or suburb is acceptable, but it is recommended that you leave the area if any sizeable group of zombies arrives.");
	if(n==3)
		functie("Living in a rural community puts you in a favorable situation. Supplies may be an issue, but distance from urban centers and small population help to offset this disadvantage.");
	if(n==4)
		functie("Living in an area where the closest neighbor is miles away really decreases your odds of encountering zombies, but supplies are going to become a serious issue if you aren't self-sufficient.");
	cout<<endl;
	cout<<endl;
	functie("23. When you watch a scary(horror) movie, you...");
	cout<<endl;
	cout<<endl;
	functie("23.1. Sit quetly and watch.");
	cout<<endl;
	functie("23.2. Laugh or try to scare other people.");
	cout<<endl;
	functie("23.3. Get startled and jump.");
	cout<<endl;
	functie("23.4. Grab other people in fear or scream.");
	cout<<endl;
	functie("23.5. Leave the lights on afterwards.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("The first and second answer demonstrate a better chance of coping with the horrors of an outbreak.The third and fifth proves a somewhat resistence to scary things, while the forth answer is the worst.");
		men=men+2;
	}
	if(n==2)
	{
		functie("The first and second answer demonstrate a better chance of coping with the horrors of an outbreak.The third and fifth proves a somewhat resistence to scary things, while the forth answer is the worst.");
		men=men+2;
	}
	if(n==3)
	{
		functie("The first and second answer demonstrate a better chance of coping with the horrors of an outbreak.The third and fifth proves a somewhat resistence to scary things, while the forth answer is the worst.");
		men=men+1;
	}
	if(n==4)
		functie("The first and second answer demonstrate a better chance of coping with the horrors of an outbreak.The third and fifth proves a somewhat resistence to scary things, while the forth answer is the worst.");
	if(n==5)
	{
		functie("The first and second answer demonstrate a better chance of coping with the horrors of an outbreak.The third and fifth proves a somewhat resistence to scary things, while the forth answer is the worst.");
		men=men+1;
	}
	cout<<endl;
	cout<<endl;
	functie("24. What did you do last time when the electricity went out(or what would you do in such case)?");
	cout<<endl;
	cout<<endl;
	functie("24.1. I played on the cellphone/PSP .");
	cout<<endl;
	functie("24.2. I went outside.");
	cout<<endl;
	functie("24.3. I read a book/did some workout.");
	cout<<endl;
	functie("24.4. I slept. ");
	cout<<endl;
	functie("24.5. I went insane.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("Maybe you want to fool me, but you are only fooling yourself.In case of a small electrical black-out, this is an viable option, but in case of a long term one, you will remain out of batteries.This proves that you are quite addicted to technology.");
		men=men+1;
	}
	if(n==2)
	{
		functie("This is the second best answer.Going outsinde means that you find yourself something usefull to do despite electrical blackout.Still during an outbreak going outside isn't the best option, and you will need to do something inside the house.");
		men=men+2;
	}
	if(n==3)
	{
		functie("This answer is the best.It means that despite electrical blackout you managed to find something usefull to do inside to confort of your own home, and therefore you will resist longer to boredom due to lack of electricity.");
		men=men+3;
	}
	if(n==4)
	{
		functie("This is not such a good answer.It means that you couldn't find anything usefull to do.In a short electrical blackout it is an option, but during a long term one... well you can't sleep several days no?. Still it's good that you didn't went insane.");
		men=men+1;
	}
	if(n==5)
		functie("This answer proves without any doubt that you are addicted to technology.A long term blackout, will easily cause you a nervous breakdown due to boredom and desperation, therefore reducing your chances of surviving an outbreak.");
	cout<<endl;
	cout<<endl;
	functie("25. Have you ever killed another living being.");
	cout<<endl;
	cout<<endl;
	functie("25.1. No, I couldn't kill not even a mosquito.");
	cout<<endl;
	functie("25.2. Only small beings, like insects.");
	cout<<endl;
	functie("25.3. I have killed some animals(anything from mice to horses).");
	cout<<endl;
	functie("25.4. I have killed another human being, but you didn't hear anything okay.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("If you couldn't kill not even the smallest living beings, it means that you have a strong attachment to them.It is good and nice thing, however during an outbreak it will be more difficult for you to kill zombies, never mind other humans.");
		emo=emo+3;
	}
	if(n==2)
	{
		functie("Killing only small being, like insects, doesn't make a big difference but you are atleast used with the idea of killing another living being.");
		emo=emo+2;
		men=men+1;
	}
	if(n==3)
	{
		functie("Having killed animal beings means that you are more used to the idea of killing and don't have such a strong attachment to living beings, making it easier to get to the final step.");
		emo=emo+1;
		men=men+1;
	}
	if(n==4)
	{
		functie("Having killed another human being will make you very used to the idea of killing, and it would be much easier to kill zombies, or other humans that presents a threat to you.Be carefull to the consequences of your actions though(like angry humans, or depression).");
		men=men+1;
	}
	cout<<endl;
	cout<<endl;
	functie("26. Now honestly, have you ever made a plan for surviving a zombie outbreak?");
	cout<<endl;
	cout<<endl;
	functie("26.1. Yes, I have a completly mapped out plan, and even backup plans.");
	cout<<endl;
	functie("26.2. Yes, but only as a joke with my friends.");
	cout<<endl;
	functie("26.3. No, but I'm taking this quiz, right?");
	cout<<endl;
	functie("26.4. No way, the zombie apocalypse is just an utopia.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("Having a completly prepared plan for a zombie outbreak even before any news about the possibility of such an outbreak, will increase your chances of survival.However you should probably get a life man.");
		exp=exp+3;
	}
	if(n==2)
	{
		functie("Having prepared a plan, even as a joke will give you a small idea on what you should do.Still in case of an outbreak you will need some serious preparation.");
		exp=exp+2;
	}
	if(n==3)
	{
		functie("Taking this quiz will give you some information about your status, and about zombies.However you should consider reading more if you want to be more prepared, starting maybe with The Zombie Survival Guide.");
		exp=exp+1;
	}
	if(n==4)
		functie("Until now it might seem an utopia, however with the progress of technology an zombie outbreak might not be an utopia for long.Having never thought about preparing a plan for a zombie outbreak will reduce your survival chances if the impossible happens.");
	cout<<endl;
	cout<<endl;
	functie("27. You hear the first reports about an outbreak near your location.The news are scattered and unsure.What do you do?");
	cout<<endl;
	cout<<endl;
	functie("27.1. Go to my friends and relatives, see if they are okay.");
	cout<<endl;
	functie("27.2. Grab some supplies, barricade your home, and carefully watch the news/internet.");
	cout<<endl;
	functie("27.3. Grab some supplies, and get as far away as possible.");
	cout<<endl;
	functie("27.4. Grab some supplies, and weapons and begin surviving in style.");
	cout<<endl;
	functie("27.5. Go to the nearest police station and see what's going on.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("It's good that you want to protect your friends and relatives, however this is the worst answer.If there is no outbreak then you just wasted some time and energy, when you could have called them, and if there is an outbreak occuring, you just expose yourself to the panicked mob, and to the zombies(which could be even your friends).");
		emo=emo+1;
	}
	if(n==2)
	{
		functie("This is probably the best answer.Your home is the safest place to be.You know it's layout perfectly and with enough supplies you can hold out untill you find out what's going on and prepare for it.If an outbreak is occuring you will soon find out from the internet or media, unless a total black-out(but then means that something severe is going on).");
		exp=exp+2;
	}
	if(n==3)
	{
		functie("This answer is not that bad.If you know were are you going, and if you have enough supplies for the road, and if you manage to avoid the panicket mob then you will succesfully avoid the dangers of an outbreak.However if any of this conditions are not met you might get into a big problem, and I'm sure you can figure out why.");
		exp=exp+1;
	}
	if(n==4)
	{
		functie("This answer is good if an outbreak is actually occuring, but still it is not recommended to start wondering around in an infested area without any destination.However if there isn't any outbreak then you will end up in the newspaper as 'The Wild Rambo on the streets'.");
		exp=exp+1;
	}
	if(n==5)
	{
		functie("This answer has his merits.A working police station may inform you about the current situation and hopefully protect you from the initial stages of the outbreak.However if they receive strict orders not to give out any information, and if the outbreak is bigger then expected, then you will end up confused into an outrunned police station.");
		exp=exp+1;
	}
	cout<<endl;
	cout<<endl;
	functie("28. Who do you completly eliminate a zombie?");
	cout<<endl;
	cout<<endl;
	functie("28.1. Damage the spine");
	cout<<endl;
	functie("28.2. Destroy the brain");
	cout<<endl;
	functie("28.3. Incinerate the zombie");
	cout<<endl;
	functie("28.4. Cut off the head");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("Damaging the spine may disable a zombie, but it will not eliminate it. This answer is incorrect.");
	if(n==2)
	{
		functie("This is the correct answer. The only way to 'kill' a zombie is to destroy its brain.");
		exp=exp+3;
	}
	if(n==3)
	{
		functie("This may be a viable, yet extremely hazardous, way to deal with zombie.It takes more than several minutes for the zombies corpse to be completly burned to ashes, in this time he can bite you, or spread the fire.The best way remains to destroy the brain.");
		exp=exp+1;
	}
	if(n==4)
	{
		functie("Cutting off a zombie's head does not eliminate it. The zombie will still try to bite if its brain is intact and the severed head will still pose a threat, but at least it's incapacitated.");
		exp=exp+2;
	}
	cout<<endl;
	cout<<endl;
	functie("29. Zombies eat because... ");
	cout<<endl;
	cout<<endl;
	functie("29.1. they need to eat to survive.");
	cout<<endl;
	functie("29.2. it is an instinct.");
	cout<<endl;
	functie("29.3. their hive mind tells them to.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("Zombies do not need to eat to survive. Even if a zombie eats, it does not digest the food and recieves no benefit from feeding other than to satisfy its instincts.");
	if(n==2)
	{
		functie("This is the correct answer. Zombies 'feed' upon humans as an instinct.");
		exp=exp+2;
	}
	if(n==3)
	{
		functie("Although similar in intelligence to insects, zombies do not operate as a collective. They are solitary creatures, reacting to each other in the same manner they would inanimate objects.");
		exp=exp+1;
	}
	cout<<endl;
	cout<<endl;
	functie("30. This is the moment of truth.For the first time you meet with a zombie, he is about 40 feet(12 meters) away but he begins to slowly walk towards you.You are armed with a pistol with several bullets and there is no one(neither human nor zombie) around.What would you do?");
	cout<<endl;
	cout<<endl;
	functie("30.1. Call 911 (Police or whatever).");
	cout<<endl;
	functie("30.2. Slowly aim your gun to align a perfect headshot.");
	cout<<endl;
	functie("30.3. Try to capture him.");
	cout<<endl;
	functie("30.4. Try to communicate to him.");
	cout<<endl;
	functie("30.5. Beat the crap out of him, in hand-to-hand combat.");
	cout<<endl;
	functie("30.6. Run away( probably screaming).");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("Calling the police won't really help you when you encounter a zombie.Not only that they might be occupied in some other location, but the time it take for them to arrive, or even the time it takes to make the call, is enough for a zombie to bite you, and after that eat you alive.");
	if(n==2)
	{
		functie("Although not a perfect answer, this is a viable option.Having time and bullets will allow you to take him out easily, however if you had been into an infested location doing that would probably attract more zombies, which is not good.");
		exp=exp+1;
	}
	if(n==3)
		functie("This is one of the worst answers.Without any proper equipment(like ropes, chains, and mouth-gags) you will very likely waste your energy trying to capture him, while he will easily bite you, if not eat you enteirly.");
	if(n==4)
	{
		functie("This is not such a good option.Although that's what many people will try to do, it is quite easy to distinguish a zombie from a human being, and this way not wasting time by attempting a communication.By doing that you will just put yourself at some unnessecerly risk.");
		emo=emo+1;
	}
	if(n==5)
		functie("Without a melee weapons of any kind, this is a poor option.Not only that you risk being bitten, but the zombie skull is just as strong as a human one, and trying to crush it with you bare fist will be a though job.");
	if(n==6)
	{
		functie("Although not a perfect answer, this is a viable option.Since zombies don't run, you will easily outrun him if you have enough speed and (hopefully) stamina, and possibly get to some other humans to assist you.However in an infested region, your scream and the zombies moans will easily attract more zombies and you will find yourself pursued by a horde of zombies.");
		exp=exp+1;
	}
	cout<<endl;
	cout<<endl;
	functie("31. How does one become infected by a zombie?");
	cout<<endl;
	cout<<endl;
	functie("31.1. Only through being bitten.");
	cout<<endl;
	functie("31.2. By fluidic contact with open wounds and sores.");
	cout<<endl;
	functie("31.3. Zombies aren't needed, the virus is airborne.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("This answer is partly true. Although you can be infected directly through bites, blood spray or droplets from the infected that reach your bloodstream will infect you as well.");
		exp=exp+1;
	}
	if(n==2)
	{
		functie("This is the only completely true answer. The virus can be transmitted through any fluidic contact with open sores, orifices, or cuts.");
		exp=exp+2;
	}
	if(n==3)
		functie("This is the worst answer. The virus is transmitted through fluidic contact, not as an areosol.");
	cout<<endl;
	cout<<endl;
	functie("32. Zombies require oxigen to function.");
	cout<<endl;
	cout<<endl;
	functie("32.1. True");
	cout<<endl;
	functie("32.2. False");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("True is incorrect. Zombies do not require oxygen, their brain has mutated by the virus to become oxygen independant.");
	if(n==2)
	{
		functie("False is the correct answer. Zombies do not require oxygen, their brain has mutated by the virus to become oxygen independant.");
		exp=exp+1;
	}
	cout<<endl;
	cout<<endl;
	functie("33. Do you know how to make improvised explosives?");
	cout<<endl;
	cout<<endl;
	functie("33.1. No, I would probably blow myself up.");
	cout<<endl;
	functie("33.2. Only Molotov Cocktails.");
	cout<<endl;
	functie("33.3. I would tell you, but then I would go to jail...");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("The answer here is obvious.Someone who knows how to make improvised explosives will have an advantage during an outbreak.Explosives can be used to clear obstructions, kill the undead, or even hostile humans.");
	if(n==2)
	{
		functie("The answer here is obvious.Someone who knows how to make improvised explosives will have an advantage during an outbreak.Explosives can be used to clear obstructions, kill the undead, or even hostile humans.Knowing to make molotove cocktails are usefull to burn zombies, or lure survivors out from their shelters, but still knowledge about explosives will be neccesary.");
		men=men+1;
	}
	if(n==3)
	{
		functie("The answer here is obvious.Someone who knows how to make improvised explosives will have an advantage during an outbreak.Explosives can be used to clear obstructions, kill the undead, or even hostile humans.");
		men=men+2;
	}
	cout<<endl;
	cout<<endl;
	functie("34. Do zombies retain their memories of their past?");
	cout<<endl;
	cout<<endl;
	functie("34.1. True");
	cout<<endl;
	functie("34.2. False");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("True is incorrect. Zombies are reanimated corpses of the previous humans and don't retain their memories.I doubt that your deceased grandmother will remember that you made cookies togheter when she is eating your face.");
	if(n==2)
	{
		functie("False is the correct answer. Zombies are reanimated corpses of the previous humans and don't retain their memories.I doubt that your deceased grandmother will remember that you made cookies togheter when she is eating your face.");
		exp=exp+1;
	}
	cout<<endl;
	cout<<endl;
	functie("35. Which of the following organs still functions in a zombie.");
	cout<<endl;
	cout<<endl;
	functie("35.1. Liver");
	cout<<endl;
	functie("35.2. Stomach");
	cout<<endl;
	functie("35.3. Lungs");
	cout<<endl;
	functie("35.4. Intestines");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("Similar to many who like to 'live it up,' the liver does not function in zombies.");
	if(n==2)
		functie("Zombies do not eat flesh in order to recieve nourishment and the digestive system does not function, including the stomach.");
	if(n==3)
	{
		functie("Lungs is the correct answer. A zombies lungs function in an auditory capacity. Zombies use their lungs to emit their characteristic moan.");
		exp=exp+1;
	}
	if(n==4)
		functie("The instestines of a zombie aren't functional. Food may be forced into the intestines by newly ingested meat, but no digestion occurs.");
	cout<<endl;
	cout<<endl;
	functie("36. What do zombies do, when they detect prey?");
	cout<<endl;
	cout<<endl;
	functie("36.1. Shuffle quietly after them.");
	cout<<endl;
	functie("36.2. Drop their jaws, raise their hands, scream and run at their prey.");
	cout<<endl;
	functie("36.3. Drop their jaws, raise their hands, moan and pursue their prey.");
	cout<<endl;
	functie("36.4. Evaluates its prey's strength to see if he can attack it.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("Zombies aren't quiet at all.When they detect prey they drop their jaws, raise their hands, then they moan at their prey as they pursue it.");
	if(n==2)
		functie("Although many movies and games depict this image, zombies don't run nor do they scream.When they detect prey they drop their jaws, raise their hands, then they moan at their prey as they pursue it.");
	if(n==3)
	{
		functie("This is the correct answer.When they detect prey they rop their jaws, raise their hands, then they moan at their prey as they pursue it.");
		exp=exp+1;
	}
	if(n==4)
		functie("Zombies don't have any cognitive ability and they can't evaluate the strength of their prey, they will attack it no matter that it's alone and weak, or armed and in a group.When they detect prey they rop their jaws, raise their hands, then they moan at their prey as they pursue it.");
	cout<<endl;
	cout<<endl;
	functie("37. Can zombies learn new skills?");
	cout<<endl;
	cout<<endl;
	functie("37.1. True");
	cout<<endl;
	functie("37.2. False");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("False is the correct answer. Zombies have no cognitive ability. Every impulse and movement made by a zombie is governed by instinct, not a conscience decision.");
	if(n==2)
	{
		functie("False is the correct answer. Zombies have no cognitive ability. Every impulse and movement made by a zombie is governed by instinct, not a conscience decision.");
		exp=exp+1;
	}
	cout<<endl;
	cout<<endl;
	functie("38. Why do zombies moan?");
	cout<<endl;
	cout<<endl;
	functie("38.1. They wish they were dead.");
	cout<<endl;
	functie("38.2. By instinct.");
	cout<<endl;
	functie("38.3. To alert other zombies of prey.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("Zombies do not moan because they wish they were dead, but by instinct.");
	if(n==2)
	{
		functie("This is the correct answer. Zombies moan as an instinctual response to locating prey, much in the same way your eyes dilate in response to light levels.");
		exp=exp+2;
	}
	if(n==3)
	{
		functie("Zombies are attracted to the moans of other zombies. However, moaning is not a deliberate attempt to call for reinforcement.");
		exp=exp+1;
	}
	cout<<endl;
	cout<<endl;
	functie("39. During an outbreak it is best to wear what kind of clothes?");
	cout<<endl;
	cout<<endl;
	functie("39.1. Whatever is sexy.");
	cout<<endl;
	functie("39.2. Baggy/loose.");
	cout<<endl;
	functie("39.3. Tight-fitting(just enough to move and breath).");
	cout<<endl;
	functie("39.4. Clothes?!... I will just go naked.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("This answer is wrong.Wearing only what's sexy might impress other survivors, but will surely not impress the living dead.You should wear tight-fitting clothes.");
		emo=emo+1;
	}
	if(n==2)
		functie("Baggy or loose clothes are the worst.Not only that they are easier to grab, but they can get uncomfortable when wet, and they are noisier when walking.You should wear tight-fitting clothes.");
	if(n==3)
	{
		functie("This is the best answer.Tight-fitting clothes are difficult to grab, they don't make much noise, and they offer you just enough protection from the elements.");
		exp=exp+1;
		men=men+1;
	}
	if(n==4)
	{
		functie("This is not enteirly a bad answer.Going around naked, will give you a feeling of freedom, and you won't wear anything the zombies could grab.However you have absoulutely no protection from moisture, cold or heat.You should wear tight-fitting clothes.");
		exp=exp+1;
	}
	cout<<endl;
	cout<<endl;
	functie("40. One of your pregnant group memebers is being attacked by a large group of zombies.What do you do?");
	cout<<endl;
	cout<<endl;
	functie("40.1. Go back and help");
	cout<<endl;
	functie("40.2. Move on");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		emo=emo+1;
		functie("Going back and helping is a kind gesture, but ultimately stupid. As heartless as it may seem, a pregnant group member would use up needed supplies with little or negative impact on group productivity. Going back to save anyone other than a hardened and experienced warrior would be foolish.");
	}
	if(n==2)
	{
		functie("Moving on is the best decision. Going back to save the weak link in the group is logically unsound and endangers the group's survival. Very little is worth enough to challenge a horde of zombies.");
		exp=exp+1;
	}
	cout<<endl;
	cout<<endl;
	functie("41. Burning the corpses of zombies is... ");
	cout<<endl;
	cout<<endl;
	functie("41.1. Recommended.");
	cout<<endl;
	functie("41.2. Discouraged.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("It is recommended that you burn the corpses of zombies. It is a common cliche that burning a mound of zombies releases a cloud of toxic, virus-ridden stink into the air, but this is untrue. Burning the corpses removes any health threats rotting meat would pose and reduces the chance of becomeing infected through secondary contact to almost zero.");
		exp=exp+1;
	}
	if(n==2)
		functie("It is recommended that you burn the corpses of zombies. It is a common cliche that burning a mound of zombies releases a cloud of toxic, virus-ridden stink into the air, but this is untrue. Burning the corpses removes any health threats rotting meat would pose and reduces the chance of becomeing infected through secondary contact to almost zero.");
	cout<<endl;
	cout<<endl;
	functie("42. Which of the following masks human scent from zombies?");
	cout<<endl;
	cout<<endl;
	functie("42.1. Deodorant");
	cout<<endl;
	functie("42.2. Perfume/Cologne");
	cout<<endl;
	functie("42.3. Soap/Cleaning agents");
	cout<<endl;
	functie("42.4. Rotting matter");
	cout<<endl;
	functie("42.5. None of the above");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("Deoderant may stop body odor in its tracks, but it will not fool a zombie.");
	if(n==2)
		functie("Perfume and cologne will do nothing to mask your scent. You'll only end up smelling like a cheap date.");
	if(n==3)
		functie("Cleaning yourself regularly will not mask your scent, but you will smell much fresher.");
	if(n==4)
		functie("Even though this answer has some logic to it, it would be both unhealthly and ineffective to cover yourself in rotting matter and other detritus to cover your scent.");
	if(n==5)
	{
		functie("This is the correct answer. There is no way to mask your scent from zombies.");
		exp=exp+1;
	}
	cout<<endl;
	cout<<endl;
	functie("43. A zombie does not require a functioning olfactory, auditory, or ocular sensory system to locate prey.");
	cout<<endl;
	cout<<endl;
	functie("43.1. True");
	cout<<endl;
	functie("43.2. False");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("The correct answer is TRUE. Zombies with completely decomposed noses, ears, and eyes can still hunt for prey. It is said that humans only use 10% of our brain and that it is possible that the zombie brain can go beyond this and access a 'sixth sense.'");
		exp=exp+1;
	}
	if(n==2)
		functie("The correct answer is TRUE. Zombies with completely decomposed noses, ears, and eyes can still hunt for prey. It is said that humans only use 10% of our brain and that it is possible that the zombie brain can go beyond this and access a 'sixth sense.'");
	cout<<endl;
	cout<<endl;
	functie("44. Which one is the best overall?");
	cout<<endl;
	cout<<endl;
	functie("44.1. Carpenter's hammer");
	cout<<endl;
	functie("44.2. Chainsaw");
	cout<<endl;
	functie("44.3. Combat knife");
	cout<<endl;
	functie("44.4. Crowbar");
	cout<<endl;
	functie("44.5. Sledgehammer");
	cout<<endl;
	functie("44.6. Machete");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("A carpenter's hammer would serve its user well, but suffers from a short reach. A hammer could crack a zombie's skull and is useful as a tool.");
		men=men+1;
		exp=exp+1;
	}
	if(n==2)
	{
		functie("Chainsaws are the worst option. The roar of a chainsaw is exhilerating, but the loud motor draws the attention of zombies. The chainsaw is also missing the most important trait of a good melee weapon: independance from fuel.");
		men=men+1;
	}
	if(n==3)
	{
		functie("Just like the hammer, the combat knife suffers from a short reach. It's combat use is even less stellar, forcing the user to stab through the temple, under the jaw, or into the eye in order to swiftly kill a zombie. The knife is far more useful as a tool than as a weapon.");
		men=men+1;
		exp=exp+1;
	}
	if(n==4)
	{
		functie("A crowbar is the best choice. Their sturdy, one-piece construction makes them durable enough for repeated fights as well as for its intended uses, such as prying open doors or lifting heavy objects. It can be used to bash the skull or be jabbed through the eye socket.");
		men=men+2;
		exp=exp+2;
	}
	if(n==5)
	{
		functie("A sledgehammer could easily smash a zombie's skull, but it's weight makes it less useful in prolonged or repeated fights. It's weight also makes it unwieldy and unbalancing. Sledgehammers have limited use as a tool. There are lighter, more useful weapons available.");
		men=men+1;
		exp=exp+1;
	}
	if(n==6)
	{
		functie("Machetes can be used to dismember a zombie, damage its spinal cord, or decapitate it. A machete is also a great cutting tool, notably in thick vegetation. However, the blade needs upkeep and it is a general rule to stay out of dense vegetation where you can easily be ambushed.");
		exp=exp+2;
		men=men+1;
	}
	cout<<endl;
	cout<<endl;
	functie("45. Corpses can be brought back to life by zombies.");
	cout<<endl;
	cout<<endl;
	functie("45.1. True");
	cout<<endl;
	functie("45.2. False");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("Corpses cannot be reanimated by zombies. A dead hear and inactive circulatory system would not be able to bring the virus to the brain.");
	if(n==2)
	{
		functie("Corpses cannot be reanimated by zombies. A dead hear and inactive circulatory system would not be able to bring the virus to the brain.");
		exp=exp+1;
	}
	cout<<endl;
	cout<<endl;
	functie("46. What is a 5.56x45 mm NATO ?");
	cout<<endl;
	cout<<endl;
	functie("46.1. a microchip");
	cout<<endl;
	functie("46.2. a rifle cartridge");
	cout<<endl;
	functie("46.3. a radio frequency");
	cout<<endl;
	functie("46.4. a ballistic missile");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("A 5.56x45 mm NATO is not a microchip, it's a rifle cartridge.");
	if(n==2)
	{
		functie("A 5.56x45 mm NATO is a rifle cartrtridge, this is the correct answer.Someone with such knowledge knows more about firearms than ordinary people.");
		men=men+1;
	}
	if(n==3)
		functie("A 5.56x45 mm NATO is not a radio frequency, it's a rifle cartridge.");
	if(n==4)
		functie("A 5.56x45 mm NATO is not a ballistic missile, it's a rifle cartridge.");
	cout<<endl;
	cout<<endl;
	functie("47. You just found out that a member of your group murdered someone before the outbreak.What do you do?");
	cout<<endl;
	cout<<endl;
	functie("47.1. Kick them out of the group.");
	cout<<endl;
	functie("47.2. Give them a few supplies and wish them luck.");
	cout<<endl;
	functie("47.3. Let them stay, but keep an eye on them.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("This option is second-best. Removing a murderer from your group could avoid potential arguements, tension, or, obviously, murder.");
		men=men+1;
	}
	if(n==2)
	{
		functie("As kind or sympathetic this answer is, this is the worst option. Not only are you losing additional manpower, you are also losing supplies for your own survival.");
		emo=emo+1;
	}
	if(n==3)
	{
		functie("This is the best choice. Only in extreme cases should a potential ally be shunned from the group, such as psychological disease or infection. Extra eyes, ears, and strength vastly increase your odds of survival.");
		men=men+2;
	}
	cout<<endl;
	cout<<endl;
	functie("48. A zombie bleeds the same way a human does.");
	cout<<endl;
	cout<<endl;
	functie("48.1. True");
	cout<<endl;
	functie("48.2. False");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("True is incorrect. A zombie's blood is coagulated and does not flow. Luckily, this means you don't have to worry nearly as much about contaminated blood spray entering your bloodstream.");
	if(n==2)
	{
		functie("False is correct. A zombie's blood is coagulated and does not flow. Luckily, this means you don't have to worry nearly as much about contaminated blood spray entering your bloodstream");
		exp=exp+1;
	}
	cout<<endl;
	cout<<endl;
	functie("49. When traveling to a location, large groups(bigger than 10 members) are...");
	cout<<endl;
	cout<<endl;
	functie("49.1. Recommended");
	cout<<endl;
	functie("49.2. Discouraged");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("Traveling in large groups, is discouraged unless you have acces to armored vehicles, or aircrafts and fuel.Large groups are more difficult to administrate and are easier to spot by zombies or potentially hostile survivors.");
	if(n==2)
	{
		functie("Traveling in large groups, is discouraged unless you have acces to armored vehicles, or aircrafts and fuel.Large groups are more difficult to administrate and are easier to spot by zombies or potentially hostile survivors.");
		exp=exp+1;
	}
	cout<<endl;
	cout<<endl;
	functie("50. What is ussually your role in a group?");
	cout<<endl;
	cout<<endl;
	functie("50.1 Planner");
	cout<<endl;
	functie("50.2. Worker");
	cout<<endl;
	functie("50.3. Overlord");
	cout<<endl;
	functie("50.4. Leech");
	cout<<endl;
	functie("50.5. Supplies");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("A planner is probably the best.Planners ussually are leaders and must take in account (and plan) all the moves and action of the group.It means a lot of responsibility aswell.");
		men=men+2;
	}
	if(n==2)
	{
		functie("A worker is an averege response.He does provides services and help to the group, but their creativity are ussually bound by their leaders and his opinion is rarely taken in consideration.At least it's not your fault if the group perish.");
		men=men+1;
	}
	if(n==3)
	{
		functie("An overlord is not the best answer.He is ussually to bossy in a group, and therefore it can strain the relations with other survivors if it doesn't have any usefull input.");
		men=men+1;
	}
	if(n==4)
		functie("The leech, togheter with the one in supplies are the worst answwers, as they don't provide any usefull input.");
	if(n==5)
		functie("The leech, togheter with the one in supplies are the worst answwers, as they don't provide any usefull input.");
	cout<<endl;
	cout<<endl;
	functie("51. If you can't stay at your own home, where do you go when an outbreak occurs?");
	cout<<endl;
	cout<<endl;
	functie("51.1. Church");
	cout<<endl;
	functie("51.2. The nearest military base");
	cout<<endl;
	functie("51.3. Grocery store");
	cout<<endl;
	functie("51.4. Wherever sex is");
	cout<<endl;
	functie("51.5. Police station");
	cout<<endl;
	functie("51.6. The mall");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("Although God may be your savior, it is said He helps those who help themselves. Churches are among the first places to be overrun. Zombies are attracted to the congregation's loud prayer and, when the zombies arrive, the church's defenses won't stack up.It is recommended that you pray at home during an outbreak.");
		exp=exp+1;
	}
	if(n==2)
	{
		functie("With a functioning government, military bases are among the best havens due to their supplies, security, and trained personnel. Because the public will rush to installations, watch out for infected persons who slip through security and be ready to flee at a moment's notice.");
		exp=exp+3;
	}
	if(n==3)
	{
		functie("Grocery stores are not good choices. Many believe there will be an abundance of food, but will there really be much left after all the looting? Perishable goods will also pose a potent health hazard once they spoil and rot. Simply loot the store and find a better location.");
		exp=exp+1;
	}
	if(n==4)
		functie("This answer is good for those wanting to go out with a bang, so to speak, but for those who want to live a full life, the other choices are magnitudes better.");
	if(n==5)
	{
		functie("A police station may provide shelter in a small outbreak, but medium-sized outbreaks will strain the station's resources, both material and human, to the breaking point. Seek shelter elsewhere or only stop to see if you can retrieve supplies.");
		exp=exp+2;
	}
	if(n==6)
		functie("The mall is a terrible choice. Many a hopeful Romero fan and mallrat will seek shelter in these materialistic meccas, but the truth is they will likely meet a sad fate. The combination of an open layout and a mob of panicked survivors spell doom for those inside.");
	cout<<endl;
	cout<<endl;
	functie("52. When choosing a knife, one with a ______ edge is preferred.");
	cout<<endl;
	functie("52.1. serrated/toothed ");
	cout<<endl;
	functie("52.2. smooth ");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("Smooth edge knives are better.Serrated/toothed knives can easily get stuck inside of a zombie when stabbed.");
	if(n==2)
	{
		functie("Smooth edge knives are better.Serrated/toothed knives can easily get stuck inside of a zombie when stabbed.");
		exp=exp+1;
	}
	cout<<endl;
	cout<<endl;
	functie("53. Do you have any addictions?(Don't worry I won't tell anyone)");
	cout<<endl;
	cout<<endl;
	functie("53.1. I'm a smoker.");
	cout<<endl;
	functie("53.2. I'm a heavy drinker.");
	cout<<endl;
	functie("53.3. I am a drug addict(But you didn't hear anything right).");
	cout<<endl;
	functie("53.4. I'm a technology addict.Video-games, Internet, etc. are my life.");
	cout<<endl;
	functie("53.5. I eat a lot of junk food, sweets and other artificial food.");
	cout<<endl;
	functie("53.6. Something else that is not mentioned here.");
	cout<<endl;
	functie("53.7. Well maybe you won't believe it, but I don't have any addictions.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("The answer here is cut and dry.A person with no addiction will usually have better chances of survival, as they are not dependent on anything that could possibly deteriorate their health.");
	if(n==2)
		functie("The answer here is cut and dry.A person with no addiction will usually have better chances of survival, as they are not dependent on anything that could possibly deteriorate their health.");
	if(n==3)
		functie("The answer here is cut and dry.A person with no addiction will usually have better chances of survival, as they are not dependent on anything that could possibly deteriorate their health.");
	if(n==4)
		functie("The answer here is cut and dry.A person with no addiction will usually have better chances of survival, as they are not dependent on anything that could possibly deteriorate their health.");
	if(n==5)
		functie("The answer here is cut and dry.A person with no addiction will usually have better chances of survival, as they are not dependent on anything that could possibly deteriorate their health.");
	if(n==6)
		functie("The answer here is cut and dry.A person with no addiction will usually have better chances of survival, as they are not dependent on anything that could possibly deteriorate their health.");
	if(n==7)
	{
		functie("The answer here is cut and dry.A person with no addiction will usually have better chances of survival, as they are not dependent on anything that could possibly deteriorate their health.");
		phy=phy+1;
		men=men+1;
	}
	cout<<endl;
	cout<<endl;
	functie("54. What does a zombie usually do when there is an obstacle between him and his prey?");
	cout<<endl;
	cout<<endl;
	functie("54.1. Climb it.");
	cout<<endl;
	functie("54.2. Go around it.");
	cout<<endl;
	functie("54.3. Go beneath it.");
	cout<<endl;
	functie("54.4. Ram himself into it until he clears it.");
	cout<<endl;
	functie("54.5. Evaluates the obstacle and finds and alternative way to his prey.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("This is the best answer.The only ability that the zombie posseds except walking, moaning and eating is the ability to climb an obstacle.Now the climbing will be slow an maybe insuccesfull several times, but since a zombie never gets tired and since it's probably going to be more than just one, they will eventually succed.");
		exp=exp+2;
	}
	if(n==2)
		functie("A zombie will go around an obstacle only if it's very thin, or accidentally.Otherwise he would try to climb it.");
	if(n==3)
		functie("A zombie will go beneath an obstacle only if the prey is under it aswell, or if he is bound by a physical disability to climb.Otherwise he would try to climb it.");
	if(n==4)
	{
		functie("This answer isn't enteirly wrong.In many movies an games zombies have been seen raming themselves into the barricades in order to get past them.This is partially true.A zombie who is unable to climb, or if he sees the prey through an transparent obstacle, like glass, then he might try to ram himself into it.But still usually he would try to climb it.");
		exp=exp+1;
	}
	if(n==5)
		functie("How many times do I have to tell you that zombies don't have any cognitive abilities.Their brain think as much as an insect's one.If you put an open door between him and his prey, he might not reach his prey, although all he has to do is to pull a lever.He would either try to climb it, or ram itself into it.");
	cout<<endl;
	cout<<endl;
	functie("55. Throwing a grenade at a group of zombies is...");
	cout<<endl;
	cout<<endl;
	functie("55.1. Recommended");
	cout<<endl;
	functie("55.2. Dicouraged");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("It is actually discouraged to use grenaes against a group of zombies.The most lethal aspect of a grenade is it's shrapnel.It will be purely luck for a flying piece shrapnel to make a lethal hit on a zombie's brain.What you will get if you use a grenade is probably 1-2 zombies killed by the blast and maybe 1-2 zombies killed by shrapnel.In rest you will get a bunch of disabled zombies that are still pursuing you.Not to mention the risk of infection from bloodsplater from the blast, and the terrible noise which will likely attract even more zombies.");
	if(n==2)
	{
		functie("It is actually discouraged to use grenaes against a group of zombies.The most lethal aspect of a grenade is it's shrapnel.It will be purely luck for a flying piece shrapnel to make a lethal hit on a zombie's brain.What you will get if you use a grenade is probably 1-2 zombies killed by the blast and maybe 1-2 zombies killed by shrapnel.In rest you will get a bunch of disabled zombies that are still pursuing you.Not to mention the risk of infection from bloodsplater from the blast, and the terrible noise which will likely attract even more zombies.");
		exp=exp+1;
	}
	cout<<endl;
	cout<<endl;
	functie("56. How much weight can you lift with your bare hands?");
	cout<<endl;
	cout<<endl;
	functie("56.1. Not more than 50 pounds(22 kilograms).");
	cout<<endl;
	functie("56.2. Not more than 100 pounds(45 kilograms).");
	cout<<endl;
	functie("56.3. Not more than 150 pounds(68 kilograms).");
	cout<<endl;
	functie("56.4. Not more than 200 pounds(90 kilograms).");
	cout<<endl;
	functie("56.5. Over 200 pounds.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("This is another straight foward question to test your physical strength.The more weight you can lift the stronger you are.Even though brute strength alone is not enough still the more you have the better of you are.");
		phy=phy+1;
	}
	if(n==2)
	{
		functie("This is another straight foward question to test your physical strength.The more weight you can lift the stronger you are.Even though brute strength alone is not enough still the more you have the better of you are.");
		phy=phy+2;
	}
	if(n==3)
	{
		functie("This is another straight foward question to test your physical strength.The more weight you can lift the stronger you are.Even though brute strength alone is not enough still the more you have the better of you are.");
		phy=phy+3;
	}
	if(n==4)
	{
		functie("This is another straight foward question to test your physical strength.The more weight you can lift the stronger you are.Even though brute strength alone is not enough still the more you have the better of you are.");
		phy=phy+4;
	}
	if(n==5)
	{
		functie("This is another straight foward question to test your physical strength.The more weight you can lift the stronger you are.Even though brute strength alone is not enough still the more you have the better of you are.");
		phy=phy+5;
	}
	cout<<endl;
	cout<<endl;
	functie("57. Can you stay awake for extended periods of time?");
	cout<<endl;
	cout<<endl;
	functie("57.1. When I'm tired, I sleep.");
	cout<<endl;
	functie("57.2. I can stay up, but only with help.");
	cout<<endl;
	functie("57.3. I can stay awake through force of will.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("This question test how well can you stay awake in emergency situations.I don't say that you mustn't sleep during an outbreak, far from it actually.But in certain situations you would need to stay awake longer just to outrun a zombie horde, or to find a shelter.This is obviously the worst answer.");
	if(n==2)
	{
		functie("This question test how well can you stay awake in emergency situations.I don't say that you mustn't sleep during an outbreak, far from it actually.But in certain situations you would need to stay awake longer just to outrun a zombie horde, or to find a shelter.This is the second best answer, as it is very likely that you have something or someone to keep you awake, but not always.");
		men=men+1;
	}
	if(n==3)
	{
		functie("This question test how much can you stay awake in emergency situations.I don't say that you mustn't sleep during an outbreak, far from it actually.But in certain situations you would need to stay awake longer just to outrun a zombie horde, or to find a shelter.This is without doubt the best answer,staying awake through the force of will is something that not many people can do.");
		men=men+2;
	}
	cout<<endl;
	cout<<endl;
	functie("58. How much do you eat per meal usually?");
	cout<<endl;
	cout<<endl;
	functie("58.1 Until I am more than stuffed.");
	cout<<endl;
	functie("58.2. Until I am full.");
	cout<<endl;
	functie("58.3. I only eat so I don't feel hungry.");
	cout<<endl;
	functie("58.4. Not that much.");
	cout<<endl;
	functie("58.5. Eating is overrated.(I eat very little)");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("Eating until you are more than stuffed is a bad habbit.Not only that you will ran out of supplies faster, but it's simply unhealthy, and I doubt that you could flee the zombies with a stuffed belly.");
	if(n==2)
	{
		functie("Eating until you are full is an acceptable answer.You will feel better, and stronger after you eat a good meal, be carefull however that eating like that will consume your supplies faster.");
		phy=phy+1;
	}
	if(n==3)
	{
		functie("This is the best answer, eating so you don't feel hungry will grant you enough energy to move on, while it will consume your supplies at a moderate rate.");
		phy=phy+2;
	}
	if(n==4)
	{
		functie("This answer is also acceptable.Not eating too much will conserve your supplies for a longer period of time.However fighting or fleeing zombies are energy consuming actions, and without enough nourishment, you can fail at this tasks.");
		phy=phy+1;
	}
	if(n==5)
		functie("Eating very little is a very bad answer.Even if you are fat you shouldn't do this, instead do some more excercises.If you eat very little you will conserve supplies, but you will receive very little energy, which will be detrimental to your survival.");
	cout<<endl;
	cout<<endl;
	functie("59. Someone close to you has become infected.What do you do?");
	cout<<endl;
	cout<<endl;
	functie("59.1. Restrain them and wait for a cure.");
	cout<<endl;
	functie("59.2. Lock them up somewhere and leave.");
	cout<<endl;
	functie("59.3. Kill them before they become a zombie.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("This answer is hopefull, but misguided. When someone becomes a zombie, they die. Their body is just a vehicle the virus uses to spread itself. There is no cure for death.The only moment when this is a good option is if you already have the cure.");
		emo=emo+2;
	}
	if(n==2)
	{
		functie("This soution is best if you can't kill them, but puts others at risk and creates one more zombie to add to the already vast horde.");
		emo=emo+1;
		exp=exp+1;
	}
	if(n==3)
	{
		functie("This answer is best. Not only is zombification painful in its final stages, killing them removes any present or future threat of infection.");
		exp=exp+2;
	}
	cout<<endl;
	cout<<endl;
	functie("60. Which of the following ammunition types weights the least?");
	cout<<endl;
	cout<<endl;
	functie("60.1. Wait... you mean diffrent ammo has diffrent weight?!");
	cout<<endl;
	functie("60.2. 12 gauge shell");
	cout<<endl;
	functie("60.3. .50 calliber bullet");
	cout<<endl;
	functie("60.4. .22 rimfire");
	cout<<endl;
	functie("60.5. 9mm");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("Uhm... yes that's true.And the one the weights the least from the previous is the .22 rimfire.");
	if(n==2)
		functie("The 12 gauge shell is a shotgun ammo and it weights the most from all of the above.The correct answer is .22 rimfire.");
	if(n==3)
		functie("The .50 calliber bullet is a huge bullet used in big sniper rifles, and it is quite heavy.The correct answer is .22 rimfire.");
	if(n==4)
	{
		functie("This is the correct answer, the .22 rimfire weights the least.This proves that you have a higher knowledge in firearms.");
		men=men+1;
	}
	if(n==5)
		functie("Although a common handgun ammunition the 9mm is slightly heavier than the .22 rimfire, which weights the least.");
	cout<<endl;
	cout<<endl;
	functie("61. Electric shock is effective as a primary way of eliminating zombies.");
	cout<<endl;
	cout<<endl;
	functie("61.1. True");
	cout<<endl;
	functie("61.2. False");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("True is incorrect. Electric shock should only be used as a defensive weapon to stun or kill zombies attempting to breach a perimeter. It has no practical use otherwise.Plus that it requires electricity to function.");
	if(n==2)
	{
		functie("False is correct. Electric shock should only be used as a defensive weapon to stun or kill zombies attempting to breach a perimeter. It has no practical use otherwise.Plus that it requires electricity to function.");
		exp=exp+1;
	}
	cout<<endl;
	cout<<endl;
	functie("62. In the unlikely event of facing a zombie in hand-to-hand combat, without any weapon, when he is only 1 foot from you, which one of the following tactics are best to be employed?");
	cout<<endl;
	cout<<endl;
	functie("62.1. Kick him in the nuts!");
	cout<<endl;
	functie("62.2. Cry for mercy");
	cout<<endl;
	functie("62.3. Quickly and carefully shove his head away and then run away.");
	cout<<endl;
	functie("62.4. Punch him in the head, hoping to crack his skull.");
	cout<<endl;
	functie("62.5. First punch him in the jaw, then in the head.");
	cout<<endl;
	functie("62.6. Carefully trip him to the ground and then run away.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("This is a poor choice.Not only that zombies don't feel pain, but some of them might be from previous women and they don't have balls at all.The best tactics are 3 and 6.");
	if(n==2)
		functie("This is a pathetic answer.Zombies don't feel mercy, just like they don't feel any other emotions aswell, and they will devour you alive.The best tactics are 3 and 6.");
	if(n==3)
	{
		functie("This is one of the best answer, just like number 6.The rule when fighting a zombie in hand-to-hand combat is to defend, and not to destroy a zombie.Getting away from his bite and grasp and the running is the best answer.Be carefull still as the smallest scratch can get you infected.");
		exp=exp+2;
	}
	if(n==4)
	{
		functie("This answer is good, only because you know where to aim.Still the zombie skull is similar to the human one, which is actually one of the strongest bones.Only someone like a super-heavyweight champion could possed enough force to crack a zombie skull with his bare fist.The best tactics are 3 and 6.");
		exp=exp+1;
	}
	if(n==5)
	{
		functie("Just like the above, this answer is good only because you know where to aim.However punching a zombie is risky do to the proximity of the mouth.Also the zombie skull is similar to the human one, which is actually one of the strongest bones.Only someone like a super-heavyweight champion could possed enough force to crack a zombie skull with his bare fist.The best tactics are 3 and 6.");
		exp=exp+1;
	}
	if(n==6)
	{
		functie("This is the best answer just like number 3.The rule when fighting a zombie in hand-to-hand combat is to defend, and not to destroy a zombie.Getting away from his bite and grasp and the running is the best answer.Be carefull still as the smallest scratch can get you infected.");
		exp=exp+2;
	}
	cout<<endl;
	cout<<endl;
	functie("63. Which of the following is an advantage to using a shotgun?");
	cout<<endl;
	cout<<endl;
	functie("63.1. High rate of fire");
	cout<<endl;
	functie("63.2. Extreme accuracy over long distances");
	cout<<endl;
	functie("63.3. Portability");
	cout<<endl;
	functie("63.4. Stopping power(or knockback)");
	cout<<endl;
	functie("63.5. Low recoil");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("Not only do shotguns have slower rates of fire, aside from a few exceptions, a weapon with a high rate of fire is least desirable in general anyways. This is the worst answer.");
	if(n==2)
		functie("Shotguns can reach targets at moderate distances when using the right ammunition, but it is better to use a rifle rather than a shotgun in such instances.");
	if(n==3)
		functie("Shotguns, expecially 'sawn-off' variants, are as portable as rifles. The ammunition for a shotgun is bulkier though and less could be carried compared to other rounds.");
	if(n==4)
	{
		functie("Stopping power is where the shotgun really shines. While most bullets would pass through a zombie, fire from a shotgun produces a 'wall' of pellets that could potentially knock a zombie over and is absolutely devastating at close range. This is the correct answer.");
		men=men+1;
	}
	if(n==5)
		functie("Shotguns are known for their impressive recoil. This answer is incorrect.");
	cout<<endl;
	cout<<endl;
	functie("64. Which of the following is an advantage to using a bolt-action rifle?");
	cout<<endl;
	cout<<endl;
	functie("64.1. High rate of fire");
	cout<<endl;
	functie("64.2. Extreme accuracy over long distances");
	cout<<endl;
	functie("64.3. Noiseless(or very silent)");
	cout<<endl;
	functie("64.4. Stopping power");
	cout<<endl;
	functie("64.5. Low recoil");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("If you had known what bolt-action means, you would have probably know that this kind of rifles have a small rate of fire.Not only that but a weapon with a high rate of fire is least desirable in general anyways. This is the worst answer.");
	if(n==2)
	{
		functie("This is the correct answer.Their long barrels and single buller firing mechanism ensures the bolt-action rifles an extreme accuracy over long distances.If a scope is attached you can snipe down enemies from far away, without even hearing your shot.");
		men=men+1;
	}
	if(n==3)
		functie("If it doesn't have any kind of silencer attached, bolt-action rifles are quite noisy.This answer is incorrect.");
	if(n==4)
		functie("Bolt-action rifles have a poor stopping power.Unless it is armed with a .50 cal bullet or bigger, the bullet of the rifle will easily pass through the enemy without knocking them back at all.And when it comes to zombies, this is quite a disadvantage if you missed the headshot.");
	if(n==5)
		functie("Unless you have acces to a modern, recoil-less rifle, most of the rifles are known for their impressive recoil. This answer is incorrect.");
	cout<<endl;
	cout<<endl;
	functie("65. You have discovered a navy gunboat that has crashed on the coast.What do you do?");
	cout<<endl;
	cout<<endl;
	functie("65.1. Search it for supplies");
	cout<<endl;
	functie("65.2. Clear it and use it as a fort");
	cout<<endl;
	functie("65.3. Continue traveling");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("Searching the ship for supplies is the second best answer only because you can find supplies without searching the entire ship. The less time you spend on the boat, the lesser you chances are of being ambushed in the confines of the ship's hull.");
		exp=exp+1;
	}
	if(n==2)
		functie("Clearing the boat is the worst option. This means you'd have to go through every cramped corridor in the ship alone. You would be in a zombie's optimal environment: dark and confined. Because the ship is metal, you're voice and footsteps would be louder and carry farther through the ship as well, costing you any amount of stealth.");
	if(n==3)
	{
		functie("The best choice is to move on. A crashed ship means that an ill fate has befallen the crew. Zombies would be attracted to the sound of the ship crashing as well and would either already be wandering around the ship or on their way.");
		exp=exp+2;
	}
	cout<<endl;
	cout<<endl;
	functie("66. Which of the following is classified as an assault rifle?");
	cout<<endl;
	cout<<endl;
	functie("66.1. AK47");
	cout<<endl;
	functie("66.2. Glock");
	cout<<endl;
	functie("66.3. PP19");
	cout<<endl;
	functie("66.4. M79 Grenade Launcher");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("The AK47 is an assault rifle.This is the correct answer.");
		men=men+1;
	}
	if(n==2)
		functie("The Glock is a pistol, not an assault rifle like the AK47.");
	if(n==3)
		functie("The PP19 is a submachingun, not an assault rifle like the AK47.");
	if(n==4)
		functie("The M79 is a Grenade launcher, not an assault rifle like the AK47.");
	cout<<endl;
	cout<<endl;
	functie("67. Which of the following is classified as a semi-automatic rifle?");
	cout<<endl;
	cout<<endl;
	functie("67.1. FAMAS");
	cout<<endl;
	functie("67.2. Beretta 92");
	cout<<endl;
	functie("67.3. M1 Garand");
	cout<<endl;
	functie("67.4. Karabiner 98k");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("The FAMAS is an assault rifle,not a semi-automatic rifle like the M1 Garand.");
	if(n==2)
		functie("The Beretta 92 is a pistol, not a semi-automatic rifle like the M1 Garand.");
	if(n==3)
	{
		functie("The M1 Garand is a semi-automatic rifle, this is the correct answer.");
		men=men+1;
	}
	if(n==4)
		functie("The Karabiner 98k is a bolt-action rifle, not a semi-automatic rifle like the M1 Garand.");
	cout<<endl;
	cout<<endl;
	functie("68. Have you ever taken something apart to see how it works?");
	cout<<endl;
	cout<<endl;
	functie("68.1. Never, that's just plain boring.");
	cout<<endl;
	functie("68.2. A few times, and I ussualy broke them.");
	cout<<endl;
	functie("68.3. Yes, quite often, it's fun to learn what makes things tick.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("This unfortunatley is the worst answer.Being able to analyse and fix things is a very usefull skill, especially during an outbreak.");
	if(n==2)
	{
		functie("This answer is second-best.Being able to analyse and fix things is a very usefull skill, especially during an outbreak.");
		men=men+1;
	}
	if(n==3)
	{
		functie("This is the best answer.Being able to analyse and fix things is a very usefull skill, especially during an outbreak.");
		men=men+2;
	}
	cout<<endl;
	cout<<endl;
	functie("69. Which of the following methods of transportation is best when traveling alone?");
	cout<<endl;
	cout<<endl;
	functie("69.1. on foot");
	cout<<endl;
	functie("69.2. four-door sedan");
	cout<<endl;
	functie("69.3. armored personnel carrier");
	cout<<endl;
	functie("69.4. truck");
	cout<<endl;
	functie("69.5. helicopter");
	cout<<endl;
	functie("69.6. bicycle");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("Traveling on foot is best. There are almost no limits to where you can travel, no gas or electricity requirements, no noisy engines, and is more than fast enough to outpace zombies. The only downside is low carrying capacity and its dependance on fitness.");
		men=men+2;
	}
	if(n==2)
		functie("A sedan would be a poor choice. It would neither be able to function well in rough terrain nor would it be able to maneuver in clogged highways and city streets. A sedan will also be unable to provide much shelter against zombies should you become trapped inside.");
	if(n==3)
	{
		functie("Amored personnel carriers (APCs) posses many desirable traits: weapon systems, weight, security, off-road capability, and levels of awesome not attainable by a bicycle or truck. Even so, an APC's disadvantages far outweigh its advantages. As with helicopters, APCs require trained drivers and consume fuel at alarming rates. APCs are best used as physical barriers, stationary turrets, or as shelter.");
		men=men+1;
	}
	if(n==4)
	{
		functie("Trucks, with good off-road functionality and carrying capacity, are a good choice when the situation permits their use. As with all motorized transport, they require fuel and are still not able to compete with the ability of the human body in navigating extreme terrain.");
		men=men+1;
	}
	if(n==5)
	{
		functie("The great speed and capacity of helicopters may seem attractive, but finding a landing zone, limited fuel, and noise relegate this mode of transport to be used only by well-supplied and well-equipped organizations. In addition, most people couldn't fly a helicopter, making a pilot integral to the vehicle's use. This is a fatal flaw not shared by other, simpler means of transport.");
		men=men+1;
	}
	if(n==6)
	{
		functie("Bicycle is the second best mode of transport. Quick and maneuverable, a bicycle's only downside lies in its limited carrying capacity and lowered effectiveness in rough terrain. However, one could simply push the bike by hand in unsuitable conditions, making it an excellent supplement to traveling on foot.");
		men=men+2;
	}
	cout<<endl;
	cout<<endl;
	functie("70. Which of the following is the best way of carring supplies when traveling on foot?");
	cout<<endl;
	cout<<endl;
	functie("70.1. None, just my pockets and my bare hands");
	cout<<endl;
	functie("70.2. Ecological plastic bags");
	cout<<endl;
	functie("70.3. A purse");
	cout<<endl;
	functie("70.4. Backpack");
	cout<<endl;
	functie("70.5. Troller for trip");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("This is the worst answer.Your pockets have extremely limited capacity and keeping your hands busy with carrying stuff, will prevent you from efectevly defending yourself.");
	if(n==2)
	{
		functie("While it's good to protect the environment, this is also a poor answer.Keeping your hands busy with carrying stuff will prevent you from efectevly defending yourself.");
		men=men+1;
	}
	if(n==3)
	{
		functie("A purse it's an average answer.You can carry it on your sholder leaving your hands open to carry even more, or to defend yourself, and it could also be used for bargaining.But it still has limited capacity");
		men=men+2;
	}
	if(n==4)
	{
		functie("The backpack is the best answer.It has good capacity and lots of pockets which could be helpfull on organising your supplies.Also you can carry it on your back, leaving your hands open to carry even more stuff, or to defend yourself.Be sure to check it for holes, and maintain a constant training with it.");
		men=men+3;
	}
	if(n==5)
	{
		functie("A troller for trip is the second-best answer.It has an amazing capcity and it's wheels allows easy transportation.However it still requires one hand in order to be dragged, leaving just one open for self-defence, and happen you to get on rough terrain, and the wheels will be almost useless.");
		men=men+2;
	}
	cout<<endl;
	cout<<endl;
	functie("71. When is it best to travel?");
	cout<<endl;
	cout<<endl;
	functie("71.1. Day");
	cout<<endl;
	functie("71.2. Night");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("It is best to travel during the day. Traveling during the day allows you to see potential hazards (zombies, cliffs, wildlife) and get to your destination more quickly.Taveling at night puts you at a serious disadvantage. Zombies rely on all their senses equally, making them expert night feeders. Humans, unfortunately, are sight-oriented and are clumsy in the dark. Not only are you putting your weakness against a zombie's strength, you risking accidental injuries and becoming lost by moving in the dark.");
		exp=exp+1;
	}
	if(n==2)
		functie("It is best to travel during the day. Traveling during the day allows you to see potential hazards (zombies, cliffs, wildlife) and get to your destination more quickly.Taveling at night puts you at a serious disadvantage. Zombies rely on all their senses equally, making them expert night feeders. Humans, unfortunately, are sight-oriented and are clumsy in the dark. Not only are you putting your weakness against a zombie's strength, you risking accidental injuries and becoming lost by moving in the dark.");
	cout<<endl;
	cout<<endl;
	functie("72. Which one of the following persons would you choose to accompany you during an outbreak?(you can only choose one)");
	cout<<endl;
	cout<<endl;
	functie("72.1. A survivalist");
	cout<<endl;
	functie("72.2. A military veteran");
	cout<<endl;
	functie("72.3. A police officer");
	cout<<endl;
	functie("72.4. A doctor");
	cout<<endl;
	functie("72.5. A engineer");
	cout<<endl;
	functie("72.6. A phylosopher or a priest");
	cout<<endl;
	functie("72.7. A porn star");
	cout<<endl;
	functie("72.8. A video-game/Internet addict.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("A survivalist is one of the best options, just like a military veteran or police officer.Although he might not have the same experience with weapons, once you get out of the city, in the wild his experience and knowledge will be indispensible.Also if proper trainned he will be able to easily dispatch zombies.");
		men=men+3;
	}
	if(n==2)
	{
		functie("A military veteran is one of the best options, just like a survivalist or police officer.His experience in weapons, combat and survival will be indispensible during an outbreak.And if properly trained he will be able to easily dispatch zombies.");
		men=men+3;
	}
	if(n==3)
	{
		functie("A police officer is one of the best options, just like a military veteran or a survivalist.His experience in weapons, combat and survival will be indispensible during an outbreak.And if properly trained he will be able to easily dispatch zombies.");
		men=men+3;
	}
	if(n==4)
	{
		functie("The doctor is usefull in particular situations, for example treating the wounded and the sick, but overvall he is not as good as a military veteran or a survivalist.Never the less, with proper training he will become a very important part of the group.");
		men=men+2;
	}
	if(n==5)
	{
		functie("The engineer is usefull in particular situations, like buiding a trap or a shelter or repairing something damaged, but overvall he is not as good as a military veteran or a survivalist.Never the less, with proper training he will become a very important part of the group.");
		men=men+2;
	}
	if(n==6)
	{
		functie("A phylosopher or a priest might help you finding the meaning of life and all that, but without any preparations they are fairly useless during an outbreak.");
		men=men+1;
	}
	if(n==7)
	{
		functie("A porn star will give the time of your life, and might be usefull for reproduction after the apocalypse, but without any preparations they are fairly useless during an outbreak.");
		men=men+1;
	}
	if(n==8)
	{
		functie("A video-game or internet addict will keep you entertained(if you have access to technology), and his inteligence might be usefull in certain situations, but without any preparations they are fairly useless during an outbreak.");
		men=men+1;
	}
	cout<<endl;
	cout<<endl;
	functie("73. You were walking through an infected city along with your best friend, when he suddenly breaks his leg in an accident and can't walk.What do you do?");
	cout<<endl;
	cout<<endl;
	functie("73.1. Stay with him and hope that he will heal up soon.");
	cout<<endl;
	functie("73.2. Leave him a weapon and supplies and move on.");
	cout<<endl;
	functie("73.3. Put your friend out of his misery.(kill him)");
	cout<<endl;
	functie("73.4. Leave him, that's what survival is all about.");
	cout<<endl;
	functie("73.5. Give him your best weapon, and then look around for help.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("This is a very hopefull answer, but not very oriented towards your survival.Your friend will require more care than normal for at least 2 weeks, and he won't be able to give out the same output.Considering that you are located in an infected city, that's the worst scenario.");
		exp=exp+1;
		emo=emo+2;
	}
	if(n==2)
	{
		functie("This is the second best answer.You are not staying with him, therefore not risking your own safety, but you are leaving him weapons and supplies that could be usefull in your survival.But still it's not as cold blooded as the next 2 answers.");
		exp=exp+2;
		emo=emo+1;
	}
	if(n==3)
	{
		functie("This is a very harsh and cold answer, but if you can go past your friendship and do it quick, it is a viable option.Not only that you are not risking your life for him, but you will not risk having him infected and turn into a zombie.Still killing your best friend might be a sign of pshycological breakdown.");
		exp=exp+3;
		men=men-1;
	}
	if(n==4)
	{
		functie("This is probably your best answer.Although cold, it is the survival of the fittest and leaving him it's best for your own safety.Let's hope you are ready for the break, and maybe you will sometime meet up with him again.");
		exp=exp+3;
	}
	if(n==5)
	{
		functie("This is also a hopefull answer, but it endangers you and your friends safety.You might not find help easily, while he won't be able to defend very efectevly due to his injury.And then staying with him will consume your supplies.In this situation other choices might be considered.");
		exp=exp+1;
		emo=emo+2;
	}
	cout<<endl;
	cout<<endl;
	functie("74. You were walking through the middle of nowhere... it has been weeks since you last met a person or a zombie.You accidently stumble upon a dog.He looks sick, but with proper care you think you can heal him up.What do you do?");
	cout<<endl;
	cout<<endl;
	functie("74.1. Heal him on the spot with what you can, then take him with you.");
	cout<<endl;
	functie("74.2. Take him with you hoping that we will heal up or you will meet other survivors.");
	cout<<endl;
	functie("74.3. Leave him... he is of no use to you.");
	cout<<endl;
	functie("74.4. End his suffering by killing him.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("This is a very heart-warming answer.The dog is a great companion and has other uses aswell, like detecting zombies or for hunting.However you are using resources and time that could have been more usefull for your survival.");
		emo=emo+2;
		exp=exp+1;
	}
	if(n==2)
	{
		functie("This is also a heart-warming answer.The dog is a great companion and has other uses aswell, like detecting zombies or for hunting.However he is sick and won't be able to help you much until he recovers, and he will also require supplies wich could have been yours.");
		emo=emo+2;
		exp=exp+1;
	}
	if(n==3)
	{
		functie("This is a cold yet reliable answer.The dog is sick and might aswell die, so it is not worth your time and energy.Still you must not forget that the dog is a great companion and has other uses aswell, like detecting zombies or for hunting.");
		exp=exp+3;
	}
	if(n==4)
	{
		functie("This is a viable option, but at the same time a very hearthless one.While you are not using your time and energy on saving him, killing him might be a sign of a serious pshycological breakdown, also you must not forget that the dog is a great companion and has other uses aswell, like detecting zombies or for hunting.");
		exp=exp+3;
		men=men-1;
	}
	cout<<endl;
	cout<<endl;
	functie("75. When traveling, you should kill zombies... ");
	cout<<endl;
	cout<<endl;
	functie("75.1. whenever the opportunity arises.");
	cout<<endl;
	functie("75.2. Only when they are far away.");
	cout<<endl;
	functie("75.3. Only when they are up close.");
	cout<<endl;
	functie("75.4. Only when you are in danger.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("This answer is incorrect. Attacking zombies at every chance puts you in needless danger and uses your supplies or energy.");
	if(n==2)
	{
		functie("Attacking only distant zombies is not a good idea. Your immediate surroundings are most important.");
		exp=exp+1;
	}
	if(n==3)
	{
		functie("While a better decision than only attacking distant zombies, this answer is also foolhardy and wasteful.");
		exp=exp+1;
	}
	if(n==4)
	{
		functie("Only fighting zombies when you are in danger of being attacked is the best answer. You conserve energy, supplies, and don't put yourself at unnecessary risk.");
		exp=exp+2;
	}
	cout<<endl;
	cout<<endl;
	functie("76. Are you mechanically inclined(or how good you are at making things work)?");
	cout<<endl;
	cout<<endl;
	functie("76.1. I'm a bit of a gear head.(or I'm already a mechanic)");
	cout<<endl;
	functie("76.2. I can fix electronics.");
	cout<<endl;
	functie("76.3. I can only fix simple things.");
	cout<<endl;
	functie("76.4. Nope, not really.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("This is pretty much a straight foward question.Someone who can fix things will be very necessary in case of a long term-outbreak.This is the best answer.");
		men=men+3;
	}
	if(n==2)
	{
		functie("This is pretty much a straight foward question.Someone who can fix things will be very necessary in case of a long term-outbreak.This is the second-best answer.");
		men=men+2;
	}
	if(n==3)
	{
		functie("This is pretty much a straight foward question.Someone who can fix things will be very necessary in case of a long term-outbreak.This is a mediocre answer.");
		men=men+1;
	}
	if(n==4)
		functie("This is pretty much a straight foward question.Someone who can fix things will be very necessary in case of a long term-outbreak.This is the worst answer.");
	cout<<endl;
	cout<<endl;
	functie("77. Zombies will eat which of the following?");
	cout<<endl;
	cout<<endl;
	functie("77.1. animals only.");
	cout<<endl;
	functie("77.2. humans only.");
	cout<<endl;
	functie("77.3. corpses only.");
	cout<<endl;
	functie("77.4. animals and humans.");
	cout<<endl;
	functie("77.5. animals, humans, and fresh corpses.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("This answer is incorrect. If zombies only ate animals, we wouldn't be in much of a predicament, would we? The last answer is correct. Zombies will eat animals, humans, and fresh corpses.");
	if(n==2)
	{
		functie("While it is true that most games and movies say this idea( and zombies do prefere humans) there is a reason why wildlife constantly avoid zombies and wherever zombies lurk everything is very silent.The last answer is correct. Zombies will eat animals, humans, and fresh corpses.");
		exp=exp+1;
	}
	if(n==3)
		functie("This answer is incorrect. If zombies only ate corpses, we wouldn't be in much of a predicament, would we? The last answer is correct. Zombies will eat animals, humans, and fresh corpses.");
	if(n==4)
	{
		functie("You were very close, however apart from humans and animals, zombies will also eat fresh corpses(especially if they are a result of a zombie kill).This answer is incorrect. If zombies only ate animals, we wouldn't be in much of a predicament, would we? The last answer is correct. Zombies will eat animals, humans, and fresh corpses.");
		exp=exp+2;
	}
	if(n==5)
	{
		functie("This answer is correct. Zombies will eat animals, humans, and fresh corpses.");
		exp=exp+3;
	}
	cout<<endl;
	cout<<endl;
	functie("78. You have startled the witch.What do you do?");
	cout<<endl;
	cout<<endl;
	functie("78.1. Run like hell.");
	cout<<endl;
	functie("78.2. Shoot that bitch in the face.");
	cout<<endl;
	functie("78.3. Jump?!");
	cout<<endl;
	functie("78.4. Let my team mates kill her then one of them will revive me.");
	cout<<endl;
	functie("78.5. Dafuq is a witch?");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("This question makes a reference to a special infected from a zombie video-game called 'Left 4 dead' and doesn't have any impact on your score.Running is useless as long as you didn't use an adrenaline shot since the witch is faster than you.");
	if(n==2)
		functie("This question makes a reference to a special infected from a zombie video-game called 'Left 4 dead' and doesn't have any impact on your score.Shooting her is a viable option if you have a shotgun or a rifle otherwise you're screwed.");
	if(n==3)
		functie("This question makes a reference to a special infected from a zombie video-game called 'Left 4 dead' and doesn't have any impact on your score.Jumping might help you doge a hit but it is quite useless since the second one will surely hit you.");
	if(n==4)
		functie("This question makes a reference to a special infected from a zombie video-game called 'Left 4 dead' and doesn't have any impact on your score.You are a lazy bastard but if you have so good team mates then you are lucky.");
	if(n==5)
		functie("This question makes a reference to a special infected from a zombie video-game called 'Left 4 dead' and doesn't have any impact on your score.It's too bad you haven't played the game.You should give it a try.");
	cout<<endl;
	cout<<endl;
	functie("79. Assuming that you are going into a zombie infested area that you want to clear, and you decide to take an armor for protection, which of the following is the best overall?");
	cout<<endl;
	cout<<endl;
	functie("79.1. A plate mail.");
	cout<<endl;
	functie("79.2. A chain mail.");
	cout<<endl;
	functie("79.3. A shark suit.");
	cout<<endl;
	functie("79.4. A Bullet-proof vest.");
	cout<<endl;
	functie("79.5. A full-body kevlar suit.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("While a plate mail will protect you from most melee weapons and therefor from zombie bites aswell there are too many disadvantages in using it.It is very rare, it is heavy, it's uncomfortable and limits your agility, and they are useless against firearms.Happen you to be swarmed by zombies and you will turned in nothing more than canned meat.");
		exp=exp+1;
	}
	if(n==2)
	{
		functie("A chain mail will also give you good protection against melee weapons and zombie bites while it isn't as uncomfortable and rigid.But still they are heavy, rare, and offers no protecton against modern firearms.");
		exp=exp+2;
	}
	if(n==3)
	{
		functie("A shark suit protects it's users from shark bites not even to mention zombie bites, while they are less heavier than a chain mail or a plate mail.Still they are very uncomfortable and difficult to be used on land.It's best uses would be when hunting zombies under water.");
		exp=exp+2;
	}
	if(n==4)
	{
		functie("Unless you are in an area where gunfire is constantly a danger, a bulletproof vest is a poor choice compared to the rest of the options. Your exposed limbs are most in danger of being bitten and aren't covered by the vest, doing little to lessen your danger from zombies.");
		exp=exp+1;
	}
	if(n==5)
	{
		functie("If you are luckly enough to find one, a full-body kevlar suit would probably be the best option.It offers protection from both melee weapons, bites and modern firearms while being less heavier and easier to manuever, than most of the above answer.It's important to remeber that just because you have an armor that doesn't mean you should act like a hero.");
		exp=exp+3;
	}
	cout<<endl;
	cout<<endl;
	functie("80. Which of the following is best when firing upon a zombie?");
	cout<<endl;
	cout<<endl;
	functie("80.1. Wait until it is close to ensure a kill.");
	cout<<endl;
	functie("80.2. Fire from a distance so as not to risk a bite.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("Waiting until the zombie is close before firing is incorrect. The problem is your aim deteriorates as a zombie gets closer to you, the stress of the situation degrading your accuracy. It is better to fire from a distance while you are still relatively calm and safe.");
	if(n==2)
	{
		functie("This is the correct answer. Waiting until the zombie is close before firing is incorrect. The problem is your aim deteriorates as a zombie gets closer to you, the stress of the situation degrading your accuracy. It is better to fire from a distance while you are still relatively calm and safe.");
		exp=exp+1;
	}
	cout<<endl;
	cout<<endl;
	functie("81. You are completly surrounded by about 20 zombies which are not more then 30 meters away from you.You are armed with a handgun, a machete and a lighter&some matches.What do you do?");
	cout<<endl;
	cout<<endl;
	functie("81.1. Dive in, hoping to make a breakthrough from the encirclement.");
	cout<<endl;
	functie("81.2. Shoot the zombies with the handgun, and then use the machete when you ran out of ammo.");
	cout<<endl;
	functie("81.3. Light the zombies on fire using the lighter and the matches.");
	cout<<endl;
	functie("81.4. Well, I was screwed either way, so I would shoot myself.");
	cout<<endl;
	functie("81.5. Light yourself on fire, and then run and hit yourself into the other zombies.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("The first and second answer are the best, but with their risks.Diving in is a solution to make a breakthrough and after that you could easily outrun the zombies, however you must get very close to them, and there will be a risk of infection.");
		exp=exp+1;
	}
	if(n==2)
	{
		functie("The first and second answer are the best, but with their risks.Shooting them with the handgun and then using the machete is the most logical approach while you also maintain some distance from the zombies, however fighting all of them will surely tire you, and you could attract even more zombies.");
		exp=exp+1;
	}
	if(n==3)
		functie("The first and second answer are the best, but with their risks.Lighting zombies on fire is an effective way of dealing with them, however they will not even notice the fire.And since it take more than a few minutes for them to be completly burned to ashes, you will be eaten alive.");
	if(n==4)
		functie("The first and second answer are the best, but with their risks.Shooting yourself will end your suffering, but won't do anything to help you survive.");
	if(n==5)
		functie("The first and second answer are the best, but with their risks.As fun and exciting this experience would be, ultimately lighting yourself on fire and then hitting other zombies is plain stupid and will get you killed.");
	cout<<endl;
	cout<<endl;
	functie("82. You are going to clear an area of zombies, and you assume that you won't stay more than about 3 days.What food supplies would you take, taking in consideration weight, nutritional value, and decomposing rate(or life span)?");
	cout<<endl;
	cout<<endl;
	functie("82.1. 3-4 cans of energy drinks.");
	cout<<endl;
	functie("82.2. Some powdered milk and breakfast cereals.");
	cout<<endl;
	functie("82.3. A can of meat, a can of fruits, and a can of instant soup.");
	cout<<endl;
	functie("82.4. A whole rosted chicken, with 2-3 boiled eggs and some bread.");
	cout<<endl;
	functie("82.5. I don't really care, I will just loot and eat whatever I can find.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("3 or 4 cans of energy drinks don't weight much, they are very durable and they have sugar and coffeine which will keep you aware for an extended period of time, however if you don't have a cooler with you they will lose their properties.Also they lack any other nutritional value that would come from real food, and those 3 days will surely drain you.(not even to mention if you have to stay more.)");
		men=men+1;
	}
	if(n==2)
	{
		functie("This is the second best answer.The powdered milk can easily be transformed into milk with water.And the cereals if they are organic should give you enough energy for those 3 days.However the cereal pack are quite big and noisy, and powdered milk is not as good as the real one.");
		men=men+2;
	}
	if(n==3)
	{
		functie("This is theoretically the best answer.The canned meat, fruits and soup will provide you a diversificated meal of high nutritional value.They don't use up much space, they are resistant to heat, cold and time, making them the best options.");
		men=men+3;
	}
	if(n==4)
	{
		functie("Having so much food with you will surely keep you saturated for 3 days and even more, however they are heavy, use up a lot of space.The chicken must be kept in a warm enviroment, and also has a ver strong, destinctive smell which will attract zombies.Bread will also get strong over time, and the boiled eggs are very good consummed right after boiling, making this option a medioce one.");
		men=men+1;
	}
	if(n==5)
		functie("This is the worst answer.Food is very important, and you shouldn't deny it especially if you have from where to chose.Zombie infested areas are unlickly to provide much food, and you are going to end up starving, which will limit your chances of survival.");
	cout<<endl;
	cout<<endl;
	functie("83. You are starving.You can't even remeber the last time you ate.After going on like this you find a dead person.His corpses is fresh, not more than a few hours and he doesn't seem to be infected.Would you go past your humanity and eat him to avoid starvation?");
	cout<<endl;
	cout<<endl;
	functie("83.1. I think so...");
	cout<<endl;
	functie("83.2. Hell no!");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("Although not heavily rated either way, being able to get pass your humanity in extreme situations like this and turn to acts of canibalism might mean the diference between life or death.You must make sure that the meat is well cooked and most importantly that it hasn't been infected.And it would be reccomended not to do this while other people are around.");
		men=men+1;
	}
	if(n==2)
	{
		emo=emo+1;
		functie("Although not heavily rated either way, being able to get pass your humanity in extreme situations like this and turn to acts of canibalism might mean the diference between life or death.You must make sure that the meat is well cooked and most importantly that it hasn't been infected.And it would be reccomended not to do this while other people are around.");
	}
	cout<<endl;
	cout<<endl;
	functie("84. The same case as above.You are starving like hell, but this time you find a dead zombie.Apparently he hasn't suffered from advanced decomposition and looks edible.Would you eat him?");
	cout<<endl;
	cout<<endl;
	functie("84.1. I think so...again");
	cout<<endl;
	functie("84.2. Hell no!");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("This time however eating him is horribly wrong.Infected flesh is highly toxic, eating it even if it's well cooked, will result in either death or infection, since viruses are resistant to very high temperatures and remains in the flesh of a zombie for up to 48 hours after death.You should just burn the body and hope you find something better to eat.");
	if(n==2)
	{
		functie("You got the right answer. This time eating him is horribly wrong.Infected flesh is highly toxic, eating it even if it's well cooked, will result in either death or infection, since viruses are resistant to very high temperatures and remains in the flesh of a zombie for up to 48 hours after death.You should just burn the body and hope you find something better to eat.");
		exp=exp+1;
	}
	cout<<endl;
	cout<<endl;
	functie("85. Random skill question.Do you have any over-average experience in any of the following attributes(skills)?");
	cout<<endl;
	cout<<endl;
	functie("85.1. I'm a sailor, and I know many things about boats.");
	cout<<endl;
	functie("85.2. I'm a pilot, I can fly your ass out of here.");
	cout<<endl;
	functie("85.3. I am a parkour member, ther is no obstacle in my way.");
	cout<<endl;
	functie("85.4. I am a skilled horse rider.");
	cout<<endl;
	functie("85.5. I am very skilled with exotic weapons(shurikens, throwing knives, bows&arrows)");
	cout<<endl;
	functie("85.6. I can do some insane triks with bikes, skateboards, motorcycles or cars.");
	cout<<endl;
	functie("85.7. I guess I'm not so special...");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("This question is asked to see if you have any special skills above the common skills necessary for a zombie outbreak(firearms, survival, first-aid, mechanic etc.).A sailor will be usefull if you plan to escape a continent or to hunt zombies in water.");
		men=men+1;
	}
	if(n==2)
	{
		functie("This question is asked to see if you have any special skills above the common skills necessary for a zombie outbreak(firearms, survival, first-aid, mechanic etc.).A pilot will be usefull for any airborne missions or escape plans.");
		men=men+1;
	}
	if(n==3)
	{
		functie("This question is asked to see if you have any special skills above the common skills necessary for a zombie outbreak(firearms, survival, first-aid, mechanic etc.). Being an experienced 'parkourer' will help you avoid and/or outrun any zombies or hostile survivors.");
		men=men+1;
	}
	if(n==4)
	{
		functie("This question is asked to see if you have any special skills above the common skills necessary for a zombie outbreak(firearms, survival, first-aid, mechanic etc.). Horse riding would be a very efficient mean of transport as it doesn't require fuel, it can detect zombies and doesn't make as much noise while being fairly manuverable.");
		men=men+1;
	}
	if(n==5)
	{
		functie("This question is asked to see if you have any special skills above the common skills necessary for a zombie outbreak(firearms, survival, first-aid, mechanic etc.). Knowing to use exotic weapons, like bows, shurikens or throwing knives, would give you the needed edge for combating zombies.");
		men=men+1;
	}
	if(n==6)
	{
		functie("This question is asked to see if you have any special skills above the common skills necessary for a zombie outbreak(firearms, survival, first-aid, mechanic etc.). Being An experienced rider or driver would help you get out of the heat zone fast and effective, while also being awesome at the same time.");
		men=men+1;
	}
	if(n==7)
		functie("This question is asked to see if you have any special skills above the common skills necessary for a zombie outbreak(firearms, survival, first-aid, mechanic etc.). I'm sorry but you would need a little bit of something if you want to increase your survival chances.");
	cout<<endl;
	cout<<endl;
	functie("86. In many zombie movies and games, zombies are seen running after their prey.While this would be an extraordinary advantage, there are some reasons why the living dead, can't run. Which one of the following is true?");
	cout<<endl;
	cout<<endl;
	functie("86.1. Physical disabilities, like broken bones or missing legs.");
	cout<<endl;
	functie("86.2. Due to the stiffnes of the dead tissue.");
	cout<<endl;
	functie("86.3. Because of the lack of leg-hand-eye coordination.");
	cout<<endl;
	functie("86.4. All of the above.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("This is a true answer although incomplete.If zombies wouldn't be able to run just because of physical disabilities, that means that all fresh zombies would be able to run.The last answer is correct.");
		exp=exp+1;
	}
	if(n==2)
	{
		functie("This is a true answer although incomplete.It's true that the dead tissue is very stiff, but with the infinite stamina a zombie posseds they should eventually beat this resistance and be able to run.The last answer is correct.");
		exp=exp+1;
	}
	if(n==3)
	{
		functie("This is a true answer although incomplete.It's true that zombies lack the leg-hand-eye coordination which is necessarly for running, however considering their stubborness they would eventually be able to commit a sort of limped running.The last answer is correct.");
		exp=exp+1;
	}
	if(n==4)
	{
		functie("This is the best answer.Zombies can't run because of all the above reasons(physical disabilities, stiffnes of dead tissue and lack of coordination.");
		exp=exp+2;
	}
	cout<<endl;
	cout<<endl;
	functie("87. How do you perform an universal edibility test on an unknown plant?");
	cout<<endl;
	cout<<endl;
	functie("87.1. Separate the plant into parts and carefully test each part.");
	cout<<endl;
	functie("87.2. Put the plant in your mouth.If nothing happens after 20 minutes, then it's good to it.");
	cout<<endl;
	functie("87.3. Stay away from mushrooms.");
	cout<<endl;
	functie("87.4. If it tastes good, then eat it.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("This is the best answer.In order to perform an universal edibility test you must test each part of the plant separetly.Don't forget the order, slightly touch the lip, the keep it on the tongue, then chew and in the end swallow, if nothing happens in 8 hours it should be fine.Boil it if you can, and be sure you haven't ate anything before the test.");
		men=men+2;
	}
	if(n==2)
	{
		functie("This is a partially true answer.By puting it on your tongue for 20 minutes most plants will inform you if they are edible or not.However some plants might have onlt several parts edible while other poisonus.Also some plants can poison you only if you keep them on the tongue, while other will poison you only after ingestion, maiking this method incomplete.");
		men=men+1;
	}
	if(n==3)
	{
		functie("This is a partially true answer.Many mushrooms are poisonus and should be avoided, however there are many how are edible as well.Also the some goes with wild-fruits.Some are edible some are poisonus, maiking these answer incomplete.");
		men=men+1;
	}
	if(n==4)
		functie("This it the worst answer.Not only that taste won't give you much relevant information, but when you are hungry everything will seem tasty.Applying this methode in the wilderness and you will very likely end up poisoned and in the end dead.");
	cout<<endl;
	cout<<endl;
	functie("88. You are preparing for a long term siege, from a possibly huge horde of zombies( or a class 3 outbreak).Which of the following places would be best to fortify?");
	cout<<endl;
	cout<<endl;
	functie("88.1. An abandoned military base.");
	cout<<endl;
	functie("88.2. A medieval castle.");
	cout<<endl;
	functie("88.3. A school.");
	cout<<endl;
	functie("88.4. A prison.");
	cout<<endl;
	functie("88.5. A gated mall.");
	cout<<endl;
	functie("88.6. A hospital.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("An abandoned military base is not the best answer, but it has it's merits.They are usually located in isolated areas, and have fortification and even weaponry in them.However many survivors will target a military base, and I said it's abandoned, so chances are that something really bad happend for the military to completly abandon a base.");
		exp=exp+1;
	}
	if(n==2)
	{
		functie("A medieval castle is one of the best answers.They are located in remote areas defended by natural barriers and they are built to withstand sieges, while they might also have space inside to keep livestoks and farms.If it has running water and electricity it would probably be a heaven.But don't forget that not all the castle are so well equipped.");
		exp=exp+2;
	}
	if(n==3)
	{
		functie("A school is an average answer.Although they are built to withstand riots and natural disasers, and their resourse of fun and knowledge might be endless, but they are not large enough to withstand a huge horde, and they are usually buit on concrete not allowing to grow farms.Not to forget that many schools are located in populated areas.");
		exp=exp+1;
	}
	if(n==4)
	{
		functie("The prison is also one of the best answers.They are located in remote areas, and have huge walls to keep the prisoners in, so it can be used to keep the zombies out.Also they should have weapons and even some modern equippment, plus open space to grow farms.While certanly not a very popular place, it is still one of the best places you could be.");
		exp=exp+2;
	}
	if(n==5)
	{
		functie("A gated mall is an average answer.It might be plentifull in supplies, equippment and even weapons, and it's gates might hold on a horde, but there are not much modifications you can add to the gates.Also the malls are often targeted by bands of looters, probably not even having supplies when you arrive, and making it more risky while you are in.While it could provide a temporarly shelter it's definetly not the best place to be.");
		exp=exp+1;
	}
	if(n==6)
		functie("The hospital is literally the worst answer.Except for the fact that it has several levels, and the presence of medical equippment, the hospital has no other uses.It doesn't have fortifications, it is located in populated areas,they are built on concrete, and they are usually the first to be over-run, do to misdiagnosed infections.The hospital should be nothing more than a passing by stop.");
	cout<<endl;
	cout<<endl;
	functie("89. A group of survivors is requesting you to let them enter into your fortress.The group is pursued closely by a large horde of zombies.What do you do?");
	cout<<endl;
	cout<<endl;
	functie("89.1. Don't let them in, and use your earplugs.It's gonna end soon.");
	cout<<endl;
	functie("89.2. Don't let them in, but drop them weapons and supplies, and provide covering fire.");
	cout<<endl;
	functie("89.3. Open a small gate and only allow does who aren't bitten and look physically fit.");
	cout<<endl;
	functie("89.4. Open the gates and help them get in.You aren't living anyone out.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("Although selfish, this is the best answer.You aren't risking your life and you neither waste any ammo on helping them, with a little help the zombies might not even notice you.");
		exp=exp+2;
	}
	if(n==2)
	{
		functie("This is the second-best answer.You aren't risking your life but at the same time you do help them face the horde.However the horde might be to big for them to bear and you would have wasted some precious ammo and supplies.");
		exp=exp+1;
		emo=emo+1;
	}
	if(n==3)
	{
		functie("This is also a good answer.By only allowing does who don't seem infected and appear physically fit, you might end up with extra man power, while you didn't risk your life fighting the horde.However the other survivors might try to force the gate and enter your fortress, which could also bring in several infected.");
		exp=exp+1;
		emo=emo+1;
	}
	if(n==4)
	{
		functie("This is a very symphatetic answer but probably the worst.Allowing all of them in, and you might end up with several infected inside your fortress, at the same time you will need to use your ammo to keep the zombies out, not even to mention that you will require more supplies to feed the new survivors.This can be a good decision only by luck.");
		emo=emo+2;
	}
	cout<<endl;
	cout<<endl;
	functie("90 You are alone in your impenetrable fortress, while being besieged by zombies, when you ran out of supplies.The zombies completely surround your fortress however there line is kind of thin and you think you can make a breakthrough.What combination of weapons would you use to get out?(Considering that all the weapons are fully loaded and in perfect working order.");
	cout<<endl;
	cout<<endl;
	functie("90.1. An RPG and a 9mm pistol.");
	cout<<endl;
	functie("90.2. A chainsaw and an axe.");
	cout<<endl;
	functie("90.3. A combat shotgun and a Desert Eagle.");
	cout<<endl;
	functie("90.4. A M1 Garand rifle and a machete.");
	cout<<endl;
	functie("90.5. Dual Uzi.");
	cout<<endl;
	functie("90.6. I would stay in, and use a radio, and send up flares to get help from outside.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("An Rpg and a 9mm pistol in an average answer.While the rpg could easily make a punch in the zombies' line and then you could use the pistol to breakthrough, they are very loud weapons, the Rpg is difficult to use, and you must pay extra attention to bloodsplatter from the explosion.");
		exp=exp+1;
	}
	if(n==2)
	{
		functie("A chainsaw and an axe is an average answer.While they could cut well through zombies, one must not forget that the chainsaw is a loud and difficult to use weapon.Plus that with this combination you are forced to give the battle in close-quaters with the zombies.");
		exp=exp+1;
	}
	if(n==3)
	{
		functie("Considering the combined firepower of a combat shotgun with a Desert Eagle, this is one of the best choices.You will be able to easily make a breakthrough in the line of zombies, while these weapons aren't very hard to use and you can also maintain a little distance aswell.The drawback is obvious... to much noise.");
		exp=exp+2;
	}
	if(n==4)
	{
		functie("This is also one of the best answer.The M1 Garand can help you easily dispatch zombies from distance, and when you get close you can use the machete the chop your way through.Except for the noise of the rifle there are no other disadvantages.");
		exp=exp+2;
	}
	if(n==5)
	{
		functie("Two Uzis are an average answer.While they do poses some firepower, they have an automatic firing system, which combined with the stress of the situations it will hinder your accuracy, so you won't be able to get many headshots.Also dual uzi means double noise.");
		exp=exp+1;
	}
	if(n==6)
		functie("Staying in proves that you have no risk-taking courage, and there are too many conditions imposed in order to get help from the outside, making this option the worst.You assume that there will be survivors to see or hear your signals, you assume that they have enough guts to try and help you, and you assume that they have enough power to succed.Also flares will attract zombies.");
	cout<<endl;
	cout<<endl;
	functie("91. Which of the following is true of infected animals?");
	cout<<endl;
	cout<<endl;
	functie("91.1. They also become zombies.");
	cout<<endl;
	functie("91.2. Nothing happens to them.");
	cout<<endl;
	functie("91.3. The die from the infection.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("Wildlife die from the virus, but does not become zombified when infected. Their bodies are incompatible with the virus.");
	if(n==2)
		functie("This is incorrect. Wildlife actively avoid zombies for a reason.And that's because they die from the infection.");
	if(n==3)
	{
		functie("Wildlife that become infected from zombies die from the virus but do not reanimate.This is the correct answer.");
		exp=exp+1;
	}
	cout<<endl;
	cout<<endl;
	functie("92. Still, assuming that some of the animales would also reanimate and become zombies which of the following would be the most dangerous during an outbreak?");
	cout<<endl;
	cout<<endl;
	functie("92.1. Penguins... obviously.");
	cout<<endl;
	functie("92.2. Large predators like lions and bears.");
	cout<<endl;
	functie("92.3. Pet animals like cats and dogs.");
	cout<<endl;
	functie("92.4. Sea animals like sharks.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("This answer obiously proves that you have a stone head.Sorry no offense but how could you choose penguins.These animals are very hard to reach and also they are very uncommon except for the frozen poles, making their zombified form almost harmless to the majority of mankind.This is the worst answer.Pet animals are the most dangerous.");
	if(n==2)
	{
		functie("Large animals like lions and bears are very dangerous normally, making their zombified form a sure nightmare for anyone who encounters them.However once zombies they will lose their previous agilities making them easier to outrun, also take in account that lions and bears are not located on every street, but in more wild and less civilised arreas making them more difficult to reach and infect.Pet animals are the most dangerous.");
		men=men+2;
	}
	if(n==3)
	{
		functie("This is probaly the best assumption.Pet animals would be the most dangerous if they would reanimate.It's not their size or strength that makes them dangerous, but rather their availability.Cats and dogs can be found on any street making them more easy to encounter and infect, also many people grow emotional attachments to their pets making it hard to accept the break.Pet animals are the most dangerous.");
		men=men+3;
	}
	if(n==4)
	{
		functie("Zombiefied sea predators like sharks, will make travelling by sea a much more risky experience, but appart for that they are no threat for your survival.Pet animals are the most dangerous.");
		men=men+1;
	}
	cout<<endl;
	cout<<endl;
	functie("93. You have spotted an unknown group of armed survivors while travelling alone inside an infested city.What do you do?");
	cout<<endl;
	cout<<endl;
	functie("93.1. Run towards them shouting all kinds of greetings.");
	cout<<endl;
	functie("93.2. Slowly and carefully approach them and introduce yourself.");
	cout<<endl;
	functie("93.3. Shoot them... they might have usefull tools and supplies.");
	cout<<endl;
	functie("93.4. Observe them from distance, before deciding how to act.");
	cout<<endl;
	functie("93.5. Avoid them at all costs.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("Although you are very happy to meet new people this is not such a good answer.Running towards them like them might spook them and they might shoot you even though they had friendly intentions, not even to mention the possibility of meeting hostile survivors.Plus your shoutings will attract nearby zombies on your location.");
		emo=emo+1;
	}
	if(n==2)
	{
		functie("This is one of the best answer.When you discover a group of survivors you can go and introduce yourself finding out information from them, and even having a chance of entering a group without attracting to much attention.However, happen you to meet an unfriendly group of survivors and you are quite screwed.");
		exp=exp+2;
	}
	if(n==3)
		functie("This is the worst answer.Not only that you are fighting against uneven odds which will likely get you killed, but you lose your chance of meeting friendly survivors, and even more the fighting will surely attract nearby zombies.");
	if(n==4)
	{
		functie("This is theoretically the best answer.Obseving them from distance before acting will give you infromation about how they behave, so you can join them if they are friendly or avoid them if they are hostile, and you won't attract any zombies this way.Still be carefull as being spotted when spying someone else is a good way to get in an ugly fight.");
		men=men+1;
		exp=exp+2;
	}
	if(n==5)
	{
		functie("This is not entierly a bad answer.If you happen to meet an unfriendly group of survivors, you might end up a slave, killed, or even worse.But still you are missing the chance of encoutering possible friendly survivors.");
		exp=exp+1;
	}
	cout<<endl;
	cout<<endl;
	functie("94. In the same infested city, while travelling alone, you have encountered a hostile group of armed survivors that demand you to give them all of your supplies and weapons or else they will kill you.What do you do?");
	cout<<endl;
	cout<<endl;
	functie("94.1. Hold your ground and threaten them right back, you aren't giving your stuff without a fight.");
	cout<<endl;
	functie("94.2. Scream that there are zombies right behind them, and then make a run for it.");
	cout<<endl;
	functie("94.3. Give up, and give them everything they want just to leave you alone.");
	cout<<endl;
	functie("94.4. Kindly accept to share some of your supplies and weapons, explaining them that you need the rest to survive, and that fighting is senseless.");
	cout<<endl;
	functie("94.5. Give them your supplies, but when it comes to weapons, quickly draw your weapons and shoot them.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("Although the instict might tell you to do that, this is the worst answer.You are outnumbered and you won't might such a big deal in the fight.Even if somehow you manage to defeat them, all the fighting will surely attract zombies on your location.In the best case scenario you might just impress them enough to accept you in their group, but appart from that you are screwed.");
	if(n==2)
	{
		functie("This would be a good answer, if there actually were zombies behind them.But once they realise that they have been tricked they will be pissed, and will surely come after you, and maybe even shoot you.");
		exp=exp+1;
	}
	if(n==3)
	{
		functie("This is not the best answer.Giving them your supplies and weapons will get those hostile survivors off your back, however it will be much more difficult to survive afterwards, especially if you meet zombies.");
		exp=exp+1;
	}
	if(n==4)
	{
		functie("This would be the most logical approach.Kindly sharing them some of your supplies might put them into a good mood, while explaining them that you still need the rest you will make a call to their emotion and common sense, and might just get out alive from that encounter.By no means a perfect answer, this is probably the best you can get.");
		exp=exp+2;
	}
	if(n==5)
	{
		functie("This is a very cunning approach, but it's not the best.For it to be good there are several factors that must be present to succed and those are, that the enemies have left there guard down, they are unprepared and don't have sharp reflexes.Even so the fighting might attract nearby zombies, therefore not puting you in a good position.");
		exp=exp+1;
	}
	cout<<endl;
	cout<<endl;
	functie("95. You have encountered a friendly group of survivors while waliking alone in an infested city.What should be the first thing to do?");
	cout<<endl;
	cout<<endl;
	functie("95.1. Ask them if they are OK.");
	cout<<endl;
	functie("95.2. Mug them.");
	cout<<endl;
	functie("95.3. Check them for bites.");
	cout<<endl;
	functie("95.4. Run away.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("Asking the other survivors is an acceptable response. It may reveal news of the area and those who are dumb or honest to a fault will reveal if any of their party members are infected.However that's not a must and suprise attacks from inside the group is something you must avoid.");
		exp=exp+2;
		emo=emo+1;
	}
	if(n==2)
		functie("Unless you have overwhelming power or numbers, this is a terrible option. One of the only things more dangerous than a zombie is another human being.");
	if(n==3)
	{
		functie("Although it would make you seem like a cold person, checking them for bites is the best answer if you plan to stay with them. Most people would be reluctant to admit to having been bitten and it's best to be safe rather than sorry.");
		exp=exp+3;
	}
	if(n==4)
	{
		functie("Running away isn't necessarily an absolutely bad decision as trust an honesty are as much at a premium as gasoline and ammunition. However, if the group looks and behaves in a friendly way it may be worth it to remain and interact with them. You could gain supplies, news, and maybe group members but always remain on guard.");
		exp=exp+1;
	}
	cout<<endl;
	cout<<endl;
	functie("96. You have spotted a group of armed survivors inside a city, which is attacked by a huge horde of zombies.What do you do?");
	cout<<endl;
	cout<<endl;
	functie("96.1. Rush into their aid, and help them with whatever you got.");
	cout<<endl;
	functie("96.2. Create a diversion for zombies, so that the survivor can escape.");
	cout<<endl;
	functie("96.3. Shoot the zombies from distance, sacrificing ammo.");
	cout<<endl;
	functie("96.4. Get moving, the fighting creates a distraction for you to escape.");
	cout<<endl;
	functie("96.5. Wait until the fighting is over, then loot the battlefield and kill whatever is still moving.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("This is the most humane, yet the worst answer.By rushing in their aid you put yourself at unnecessery risk, and you can get easily killed in the battle, even if you manage to win the battle you will be extremly drained and more zombies could be attracted, not even to mention the possibility of zombies rising from inside the group.");
		emo=emo+2;
	}
	if(n==2)
	{
		functie("This answer is kind of simphatetic, but clearly not the best.You will indeed help the survivors to escape from the onslaught but you might find yourself persued by that very same horde of zombies attaking them, which will endanger your life.");
		exp=exp+1;
		emo=emo+1;
	}
	if(n==3)
	{
		functie("This answer is kind of simphatetic, but clearly not the best.By helping them from distance you don't put yourself at risk by fighting in close-quaters and at the same time you do your deeds for humanity.However you are using ammo which is usefull in your survivor and you might attract zombies on your position.");
		exp=exp+1;
		emo=emo+1;
	}
	if(n==4)
	{
		functie("As harsh as it might seem this is the best answer.This way you won't put yourself at any risk and you won't sacrifice any ammo.Also the zombies are distracted by the ongoing fight, and you might reach your destination faster this way.");
		exp=exp+2;
	}
	if(n==5)
	{
		functie("This is a very cunning approach, but it's not the best.At the end of the battle there might not be many usefull things to loot, also depending on who wins the battle you must either fight some armed humans, or a horde of zombies, which will increase, as they will be attracted by the fight.");
		exp=exp+1;
	}
	cout<<endl;
	cout<<endl;
	functie("97. When clearing a building of zombies it is best to do what before entering a room?");
	cout<<endl;
	cout<<endl;
	functie("97.1. Knock");
	cout<<endl;
	functie("97.2. Kick the door down");
	cout<<endl;
	functie("97.3. Peak in before entering");
	cout<<endl;
	functie("97.4. Ask if anyone's there");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("Knocking is the best course of action. It allows you to motivate and listen for zombies without exposing yourself. This lets you prepare yourself for any threats before entering the room.");
		exp=exp+2;
	}
	if(n==2)
		functie("Kicking the door down is the worst answer. Not only are you risking surprise attacks from zombies, you are alerting every zombie in the building.");
	if(n==3)
	{
		functie("Peaking in is an acceptable answer, but is not the best course of action. You don't put yourself in much danger, but zombies that see you will pursue you until either you or they are eliminated.");
		exp=exp+1;
	}
	if(n==4)
	{
		functie("Asking if anyone's there is the second-best answer only because it is easier to hear at a distance than a knock. Asking also explicitly alerts other survivors to your location. Whether that's good or bad is up to chance.");
		exp=exp+2;
	}
	cout<<endl;
	cout<<endl;
	functie("98. You are approching a city that has been declared overrun.Which of the following actions is best?");
	cout<<endl;
	cout<<endl;
	functie("98.1. Move through the city as fast as possible.");
	cout<<endl;
	functie("98.2. Go around the city, using more supplies.");
	cout<<endl;
	functie("98.3. Find a place to stay in the city.");
	cout<<endl;
	functie("98.4. Scavenge a few things in the city then move on.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
	{
		functie("If you MUST go through a city, do so quickly and before night falls. Always try to go around the city instead.");
		exp=exp+1;
	}
	if(n==2)
	{
		functie("Going around the city is the best choice. The claustrophobic setting and lack of sound-dampening foliage puts you at significantly higher risk than if you were to simply go around the city. You should avoid cities if at all possible.");
		exp=exp+2;
	}
	if(n==3)
		functie("The odds of finding suitable shelter in a city are astronomical. With the constant threat of zombies, humans, industrial disasters, and disease in the cramped, cluttered cities, it would be infinitely better to simply live in the woods.");
	if(n==4)
	{
		functie("You should only enter a city for supplies if you are desperately in need. Otherwise, it is best to take your chances and look for a smaller town or encampment for supplies. Searching a city for supplies out of convenience is, to put it bluntly, foolish.");
		exp=exp+1;
	}
	cout<<endl;
	cout<<endl;
	functie("99. Oh no... you have been bitten by a zombie.What do you do?");
	cout<<endl;
	cout<<endl;
	functie("99.1. Commit suicide.");
	cout<<endl;
	functie("99.2. Chop of the bitten limb immediately.");
	cout<<endl;
	functie("99.3. Disinfect and bandage wound.");
	cout<<endl;
	functie("99.4. Let it be... I might be lucky.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("Although many people would be tempted to do this, commiting suicide isn't much about surviving isn't it? In this extreme situations there is one extreme measure that might keep you alive and that's choping off the bitten limb.");
	if(n==2)
	{
		functie("Although extreme and questionable this is the only measure that might keep you away from infection, and that is choping of the bitten limb immediately, and I mean REALLY FAST.");
		exp=exp+1;
	}
	if(n==3)
		functie("Disinfecting and bandaging the wound will keep it away from getting any bacterial infection, but it won't do anything to save you from the real infection.In this extreme situations there is one extreme measure that might keep you alive and that's choping off the bitten limb.");
	if(n==4)
		functie("The chance that you are naturally immune to the virus are astronomical.You would have more chances of winning at the national lottery, twice, in a row.In this extreme situations there is one extreme measure that might keep you alive and that's choping off the bitten limb.");
	cout<<endl;
	cout<<endl;
	functie("100. Unfortunately despite your best attempts you have become infected.What do you do?");
	cout<<endl;
	cout<<endl;
	functie("100.1. Commit suicide... again!?");
	cout<<endl;
	functie("100.2. Quarrantine myself from other people.");
	cout<<endl;
	functie("100.3. Throw out a party.I'm going to die anyway.");
	cout<<endl;
	functie("100.4. Kill as many zombies as you can before turning into one of them.");
	cout<<endl;
	functie("100.5. Convince someone else to kill me.");
	cout<<endl;
	cin>>n;
	cout<<endl;
	if(n==1)
		functie("This question doesn't have a correct answer. It is only meant to make you ponder what you'd do in your final moments.");
	if(n==2)
		functie("This question doesn't have a correct answer. It is only meant to make you ponder what you'd do in your final moments.");
	if(n==3)
		functie("This question doesn't have a correct answer. It is only meant to make you ponder what you'd do in your final moments.");
	if(n==4)
		functie("This question doesn't have a correct answer. It is only meant to make you ponder what you'd do in your final moments.");
	if(n==5)
		functie("This question doesn't have a correct answer. It is only meant to make you ponder what you'd do in your final moments.");
	cout<<endl;
	cout<<endl;
	phyrat=(phy*100)/52;
	menrat=(men*100)/78;
	exprat=(exp*100)/91;
	emorat=(emo*100)/33;
	functie("Congratulations, you have finished the zombie survival quiz, or the outbreak survival aptitude test.You will now see how much you have scored, and how big your survival chances are based on your answers.There have been 4 features that have been evaluated in this test, and those are physical, mental, experience and emotional.We will present you the result in each field with a total average at the end.Please press any button after finishing reading each part to procced.");
	cin>>n;
	functie("Physical rating( Strength, Stamina, Agility and overall fitness): ");
	if(phyrat<=50)
	{
		cout<<" F ";
		cout<<endl;
		cout<<endl;
		functie("You are completly out of shape.Even though you might be able to get off your couch, you don't have enough strength to kill a single zombie, and not enough stamina to outrun one.");
		cout<<endl;
	}
	if((phyrat>50)&&(phyrat<=60))
	{
		cout<<" E ";
		cout<<endl;
		cout<<endl;
		functie("You are kind of out of shape, and your strength and stamina are lacking.If you were to face a zombie without an arm and a leg, you would still help to kill him, and trying to outrun the zombies is futile unless you find shelter.");
		cout<<endl;
	}
	if((phyrat>60)&&(phyrat<=70))
	{
		cout<<" D ";
		cout<<endl;
		cout<<endl;
		functie("While you do have some overall fitness, you still lack enough strength to kill zombies.My reccomandation is to either kill them with firearms, or simply stay away from them at all costs.");
		cout<<endl;
	}
	if((phyrat>70)&&(phyrat<=80))
	{
		cout<<" C ";
		cout<<endl;
		cout<<endl;
		functie("Given your strength and stamina, you might kill a zombie or two, if you had the right weapone, but you will be very drained afterwards, so keep a distance from zombies, and try to outrun them.");
		cout<<endl;
	}
	if((phyrat>80)&&(phyrat<=90))
	{
		cout<<" B ";
		cout<<endl;
		cout<<endl;
		functie("Your physical attributes, aren't special, but they are nothing to scoff at either.With the right weapon, you can easily keep zombies at bay, as long as you don't push your limits.");
		cout<<endl;
	}
	if(phyrat>90)
	{
		cout<<" A ";
		cout<<endl;
		cout<<endl;
		functie("Given your strength and stamina, you can fight several zombies before tiring, and run several miles before resting.Therefore you are 'physically' fit for any kind of zombie outbreak.");
		cout<<endl;
	}
	cin>>n;
	cout<<endl;
	functie("Mental rating(Overall knowledge about general stuff, improvisation, innovation, risk-taking, and general will to survive): ");
	if(menrat<=50)
	{
		cout<<" F ";
		cout<<endl;
		cout<<endl;
		functie("You lack any sort of survival knoweldge and will to survive.It would be a wonder if you knew that an outbreak is occuring.");
		cout<<endl;
	}
	if((menrat>50)&&(menrat<=60))
	{
		cout<<" E ";
		cout<<endl;
		cout<<endl;
		functie("You might be smarter than a zombie but you lack even the basic knowledge about survival and improvisation.You have a lot of learning to do.");
		cout<<endl;
	}
	if((menrat>60)&&(menrat<=70))
	{
		cout<<" D ";
		cout<<endl;
		cout<<endl;
		functie("You know only the very basic things about survival and improvisation, and even those pieces of information are at random.I doubt you will be able to put them into practice without any serious preparations.");
		cout<<endl;
	}
	if((menrat>70)&&(menrat<=80))
	{
		cout<<" C ";
		cout<<endl;
		cout<<endl;
		functie("You clearly aren't the smartest in the horde, but you do know some cold, hard facts about survival and improvisation.With a bit of luck you might just pass by in a small, short term outbreak, anything bigger would require some preparations.");
		cout<<endl;
	}
	if((menrat>80)&&(menrat<=90))
	{
		cout<<" B ";
		cout<<endl;
		cout<<endl;
		functie("Your intelligence is unremarcable, but it isn't anything to scoff at either.Just hope that you don't end up on 'Are you smarter than a fifth grader?'");
		cout<<endl;
	}
	if(menrat>90)
	{
		cout<<" A ";
		cout<<endl;
		cout<<endl;
		functie("You are in perfect mental shape, and you have a complete arsenal of knowledge and improvisation, that will defenetly help you survive in the ugliest outbreak.Ofcourse unless the zombies kill you first, but 'mentally' you are fit for the outbreak.");
		cout<<endl;
	}
	cin>>n;
	cout<<endl;
	functie("Experience rating(General knowledge and experience about zombies and outbreaks): ");
	if(exprat<=50)
	{
		cout<<" F ";
		cout<<endl;
		cout<<endl;
		functie("I can only assume that you know what a zombie is.");
		cout<<endl;
	}
	if((exprat>50)&&(exprat<=60))
	{
		cout<<" E ";
		cout<<endl;
		cout<<endl;
		functie("You might know what a zombie is, but you don't know not even the most basic facts about them.");
		cout<<endl;
	}
	if((exprat>60)&&(exprat<=70))
	{
		cout<<" D ";
		cout<<endl;
		cout<<endl;
		functie("You knoweldge proves that you must have seen at least one zombie movie, or played at least one zombie game, but nothing more than that");
		cout<<endl;
	}
	if((exprat>70)&&(exprat<=80))
	{
		cout<<" C ";
		cout<<endl;
		cout<<endl;
		functie("You do know some cold, hard facts about zombies, however you might have been confused by movies and video-games that are not accurate in their description.");
		cout<<endl;
	}
	if((exprat>80)&&(exprat<=90))
	{
		cout<<" B ";
		cout<<endl;
		cout<<endl;
		functie("You have some serious knowledge about zombies that will keep you relatively safe during an outbreak.However you lack some of the advanced facts about zombies and outbreaks.");
		cout<<endl;
	}
	if(exprat>90)
	{
		cout<<" A ";
		cout<<endl;
		cout<<endl;
		functie("You are a true 'zombologist'.Any piece of knowledge about zombies and outbreaks have been stored in your mind, to be used for further reference.You can say that the zombies are out after your brain.");
		cout<<endl;
	}
	cin>>n;
	cout<<endl;
	functie("Emotional rating(Love, interactivness and general compassion about other objects and living-things): ");
	if(emorat<=50)
	{
		cout<<" F ";
		cout<<endl;
		cout<<endl;
		functie("The expression 'Survival through numbness' is very applicable to you.You are solenly concered about your own well being.While this won't put you at risk for helping other survivors, at the same time you will receive no compassion from others.");
		cout<<endl;
	}
	if((emorat>50)&&(emorat<=60))
	{
		cout<<" E ";
		cout<<endl;
		cout<<endl;
		functie("You are solenly concered about your own well being.You would only become part of a group out of necessity and you won't hessitate to betray it.Your remaining humanity is lost somewhere deep within you.");
		cout<<endl;
	}
	if((emorat>60)&&(emorat<=70))
	{
		cout<<" D ";
		cout<<endl;
		cout<<endl;
		functie("You're a selfish, egocentric individual that will think twice about himself, before trying to think about others.This will keep you safe, but it will anger other group members.");
		cout<<endl;
	}
	if((emorat>70)&&(emorat<=80))
	{
		cout<<" C ";
		cout<<endl;
		cout<<endl;
		functie("Your selfishness will keep you relatively safe, although it might annoy possible group members.");
		cout<<endl;
	}
	if((emorat>80)&&(emorat<=90))
	{
		cout<<" B ";
		cout<<endl;
		cout<<endl;
		functie("You are neither to harsh, nor forgiving towards other survivors.Although things have changed to further worse, you haven't lost your humanity.");
		cout<<endl;
	}
	if(emorat>90)
	{
		cout<<" A ";
		cout<<endl;
		cout<<endl;
		functie("You are the embodiment of the phrase 'humanity first!'.You leave no one behind, and your party will be some sort of heaven for other survivors.This will put you at risk however.");
		cout<<endl;
	}
	cin>>n;
	cout<<endl;
	average=(phyrat+menrat+exprat)/3;
	if(average<45)
	{
		cout<<"FFFFFFFFFFFFFFFFFFFFFFFFFFFF";
		cout<<endl;
		cout<<"F";
		cout<<endl;
		cout<<"F";
		cout<<endl;
		cout<<"F";
		cout<<endl;
		cout<<"FFFFFFFFFFFFFF";
		cout<<endl;
		cout<<"F";
		cout<<endl;
		cout<<"F";
		cout<<endl;
		cout<<"F";
		cout<<endl;
		cout<<"F";
		cout<<endl;
		cout<<"F";
		cout<<endl;
		functie("You would almost certanly die if an outbreak occured.Your final fate is to wander the plains aimlessly as a zombie until you are shot to death or rot into nothing.That's ofcourse if you don't commit suicide first, die of starvation, or get killed in an accident.");
	}
	if((average>=45)&&(average<55))
	{
		cout<<"EEEEEEEEEEEEEEEEEEEEEEEEEEEEE";
		cout<<endl;
		cout<<"E";
		cout<<endl;
		cout<<"E";
		cout<<endl;
		cout<<"E";
		cout<<endl;
		cout<<"E";
		cout<<endl;
		cout<<"EEEEEEEEEEEEEEE";
		cout<<endl;
		cout<<"E";
		cout<<endl;
		cout<<"E";
		cout<<endl;
		cout<<"E";
		cout<<endl;
		cout<<"E";
		cout<<endl;
		cout<<"EEEEEEEEEEEEEEEEEEEEEEEEEEEEEE";
		cout<<endl;
		functie("You have extremely low chances of surviving an outbreak.Even in the case of a small, short term outbreak, you would still need some help and some luck to survive.In case of a medium or long term outbreak, not even the group won't help you.You would either be left behind, or bring the entire group to perishment.");
	}
	if((average>=55)&&(average<65))
	{
		cout<<"DD";
		cout<<endl;
		cout<<"D  D";
		cout<<endl;
		cout<<"D   D";
		cout<<endl;
		cout<<"D    D";
		cout<<endl;
		cout<<"D     D";
		cout<<endl;
		cout<<"D      D";
		cout<<endl;
		cout<<"D      D";
		cout<<endl;
		cout<<"D      D";
		cout<<endl;
		cout<<"D     D";
		cout<<endl;
		cout<<"D    D";
		cout<<endl;
		cout<<"D   D";
		cout<<endl;
		cout<<"D  D";
		cout<<endl;
		cout<<"DD";
		cout<<endl;
		functie("You have very low chances of surviving an outbreak.You might survive a small,short term outbreak alone, however for a medium one you must get yourself into a group of skilled and experienced survivors.As for the large,long term outbreak... let's say that 'may the odds be forever in your favour.'");
	}
	if((average>=65)&&(average<75))
	{
		cout<<"              C";
		cout<<endl;
		cout<<"            C";
		cout<<endl;
		cout<<"          C";
		cout<<endl;
		cout<<"        C";
		cout<<endl;
		cout<<"      C";
		cout<<endl;
		cout<<"    C";
		cout<<endl;
		cout<<"   C";
		cout<<endl;
		cout<<"   C";
		cout<<endl;
		cout<<"    C";
		cout<<endl;
		cout<<"      C";
		cout<<endl;
		cout<<"          C";
		cout<<endl;
		cout<<"             C";
		cout<<endl;
		cout<<"                C";
		cout<<endl;
		functie("You have low chances of surviving an outbreak.You best bets are to get in a group of skilled and experienced survivors, although you might still need some luck to survive on the long term outbreak.Alone you can pass a small one, and maybe pass a medium one if lady luck is one your side.");
	}
	if((average>=75)&&(average<85))
	{
		cout<<"BB";
		cout<<endl;
		cout<<"B  B";
		cout<<endl;
		cout<<"B   B";
		cout<<endl;
		cout<<"B     B";
		cout<<endl;
		cout<<"B      B";
		cout<<endl;
		cout<<"B     B";
		cout<<endl;
		cout<<"B    B";
		cout<<endl;
		cout<<"BBBB";
		cout<<endl;
		cout<<"BB";
		cout<<endl;
		cout<<"B  B";
		cout<<endl;
		cout<<"B   B";
		cout<<endl;
		cout<<"B     B";
		cout<<endl;
		cout<<"B      B";
		cout<<endl;
		cout<<"B     B";
		cout<<endl;
		cout<<"B    B";
		cout<<endl;
		cout<<"B  B";
		cout<<endl;
		cout<<"BB";
		cout<<endl;
		functie("You have average chances of surviving an outbreak.Being calculated and mindfull of your actions will ensure you survival on a small and medium outbreak.A group is mandatory however if you wish to survive on the long run.Surviving alone might have dire consequences.");
	}
	if((average>=85)&&(average<95))
	{
		cout<<"               A              ";
		cout<<endl;
		cout<<"             A   A            ";
		cout<<endl;
		cout<<"            A     A           ";
		cout<<endl;
		cout<<"           A       A          ";
		cout<<endl;
		cout<<"          AAAAAAAAAAA         ";
		cout<<endl;
		cout<<"         A           A        ";
		cout<<endl;
		cout<<"        A             A       ";
		cout<<endl;
		cout<<"       A               A      ";
		cout<<endl;
		cout<<"      A                 A     ";
		cout<<endl;
		functie("You have high chances of surviving an outbreak.You experience, will, and common sense will ensure your survival in almost any situations, and other survivors will wish to be in the same group with you and even learn from you.Zombies shouldn't be a big issue.The problems you will face might be brought by hostile survivors or natural disasters.");
	}
	if(average>=95)
	{
		cout<<"ZZZZZZZZZZZZZZZZZZZZZ";
		cout<<endl;
		cout<<"                  Z";
		cout<<endl;
		cout<<"                 Z";
		cout<<endl;
		cout<<"                Z";
		cout<<endl;
		cout<<"               Z";
		cout<<endl;
		cout<<"              Z";
		cout<<endl;
		cout<<"             Z";
		cout<<endl;
		cout<<"            Z";
		cout<<endl;
		cout<<"           Z";
		cout<<endl;
		cout<<"          Z";
		cout<<endl;
		cout<<"         Z";
		cout<<endl;
		cout<<"        Z";
		cout<<endl;
		cout<<"       Z";
		cout<<endl;
		cout<<"      Z";
		cout<<endl;
		cout<<"     Z";
		cout<<endl;
		cout<<"    Z";
		cout<<endl;
		cout<<"   Z";
		cout<<endl;
		cout<<"  Z";
		cout<<endl;
		cout<<" Z";
		cout<<endl;
		cout<<"ZZZZZZZZZZZZZZZZZZZZZZZZZ";
		cout<<endl;
		functie("You truly are special, because you simply aced this test.Your advanced knowledge about survival and zombies, togheter with your physical abilities and your will to survive , will ensure your survival even in the doomsday scenario of a zombie apocalypse.Individuals like you will be neceserly for rebuilding the civilasation once the hordes of zombies have decimated the earth.You would either organize zombie-hunting parties, reclaim the earth's resources and even form a gouvernment.");
	}
	getchar();
	getchar();
	return 0;
}

