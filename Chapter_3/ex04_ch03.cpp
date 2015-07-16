#include <iostream>

#define MINUTES_PER_HOUR 60
#define SECONDS_PER_MINUTE 60
#define HOUR_PER_DAY 24

int main() {
  
  long long full_seconds;
  int days, hours, minutes, seconds;
  
    
	std::cout << "Enter the number of seconds: ";
  std::cin >> full_seconds;
  
  days = full_seconds / ( MINUTES_PER_HOUR*SECONDS_PER_MINUTE*HOUR_PER_DAY );
  hours = (full_seconds % (MINUTES_PER_HOUR*SECONDS_PER_MINUTE*HOUR_PER_DAY)) / (MINUTES_PER_HOUR*SECONDS_PER_MINUTE);
  minutes = ((full_seconds % (MINUTES_PER_HOUR*SECONDS_PER_MINUTE*HOUR_PER_DAY)) % (MINUTES_PER_HOUR*SECONDS_PER_MINUTE)) / (MINUTES_PER_HOUR) ;
  seconds = ((full_seconds % (MINUTES_PER_HOUR*SECONDS_PER_MINUTE*HOUR_PER_DAY)) % (MINUTES_PER_HOUR*SECONDS_PER_MINUTE)) % (MINUTES_PER_HOUR);
  
  std::cout << full_seconds << " = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds.";
    
	return 0;
}
