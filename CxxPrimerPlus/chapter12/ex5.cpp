/*
The Bank of Heather has performed a study showing that ATM customers won"t wait
more than one minute in line. Using the simulation from Listing 12.10, find a value for
number of customers per hour that leads to an average wait time of one minute. (Use at
least a 100-hour trial period.)
*/

#include<iostream>
#include<cstdlib>				// for RAND_MAX, rand() and srand()
#include<ctime>					// for time()
#include "ex5.h"
const int MIN_PER_HR	= 60;

bool newcustomer(double x);			// is there a new customer?

int main() {
  using std::cin;
  using std::cout;
  using std::endl;
  using std::ios_base;
						// setting things up
  std::srand(std::time(0));			// random initializing of rand()
  cout << "Case Study: Bank of Heather Automatic Teller\n";
  int qs;
  cout << "Enter maximum size of queue: ";
  cin >> qs;
  Queue line(qs);				// line queue holds up to qs people

  cout << "Enter the number of similuation hours (>100): ";
  int hours;
  cin >> hours;

						// simulation will run 1 cycle per minue;
  long cyclelimit	= MIN_PER_HR * hours;	// # of cycles

  double perhour;				// average # of arrival per hour
  double min_per_cust;				// average time between arrivals

  long turnaways	= 0;			// turned away by full queue
  long customers	= 0;			// joined the queue
  long served		= 0;			// served during the simulation
  long sum_line		= 0;			// cumulative line length
  long wait_time	= 0;			// time until autoteller is free
  long line_wait	= 0;			// cumulative time in line
  double averagewait = 0;

  do {
    Item temp;
    turnaways	= 0;			// turned away by full queue
    customers	= 0;			// joined the queue
    served		= 0;			// served during the simulation
    sum_line      	= 0;			// cumulative line length
    wait_time	= 0;			// time until autoteller is free
    line_wait	= 0;			// cumulative time in line

    perhour = std::rand() % MIN_PER_HR + 1; // 60 people max per hour
    min_per_cust = MIN_PER_HR / perhour;

    for (int cycle=0; cycle < cyclelimit; cycle++) {
      if (newcustomer(min_per_cust)) { // have newcomer
	if (line.isfull())
	  turnaways++;
	else {
	  customers++;
	  temp.set(cycle); // cycle = time of arrival
	  line.enqueue(temp); // add newcomer to line
	}
      }
      if (wait_time <= 0 && !line.isempty()) {
	line.dequeue(temp); // attend next customer
	wait_time = temp.ptime(); // for wait_time minutes
	line_wait += cycle - temp.when();
	served++;
      }
      if (wait_time > 0) {
	wait_time--;
	sum_line += line.queuecount();
      }
    }

    averagewait = (double) line_wait / served;
    cout << "Average wait: " << averagewait << endl;
  } while (averagewait != 1.0);

  if (customers > 0) {
    cout << "customers accepted: " << customers << endl
	 << "customers served: " << served << endl
	 << "turnaways: " << turnaways << endl
	 << "average queue size: ";
    cout.precision(2);
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.setf(ios_base::showpoint);
    cout << (double) sum_line / cyclelimit << endl
	 << "average wait time: " << averagewait << " minutes" << endl;
  } else
    cout << "No customers!" << endl;

  cout << "done!" << endl;

  return 0;
}



// x = average time, in minutes, between customers
// return value is true if customer shows up this minute
bool newcustomer(double x) {
  return (std::rand() * x / RAND_MAX  < 1);
}
