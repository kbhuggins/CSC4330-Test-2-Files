//Kahrin Huggins
#include <stdio.h>

enum weather{Sunny, Rain, Snow, Hot, Cold, Windy, Blizzard, Thunderstorm};

enum cities{Denver = 20, Atlanta = 21, Miami = 22, Toronto = 23, Oakland = 25, Houston = 25, Sacramento = 26};

int main() {
   enum weather today;
   enum cities location;

   today = Thunderstorm;
   location = Denver;

   printf("%d\n", today);
   printf("%d\n", location);
   
   
   return 0;
}