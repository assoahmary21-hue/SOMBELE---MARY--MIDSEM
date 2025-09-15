#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
float temperature;	
int heartbeat;	
int bloodpressure;	
	
printf("Ener body temperature(°c):");	
scanf("%f, &temperature");	
	
printf("Enter heart rate (bpm): ");	
scanf("%d" ,&"heartRate");	
	
printf("Enter blood pressure(mmHg): ");	
scanf("%d" ,&"bloodPresure");	
	
	
printf("\n--- Patient Readings ---\n");	
printf("Body Temperature: %.1f °c\n",temperature);	
printf("Heart Rate:%d bpm\n","heartRate");	
printf("Blood Pressure: %d mmHg\n","bloodPressure");	
	
	return 0;
}
