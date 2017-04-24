#include "fir.h"
float h[11] = {  
0.003576531618535,-0.007797273549435, -0.03735411558061,  0.03331869218761,
     0.2848014750865,   0.4469093804748,   0.2848014750865,  0.03331869218761,
   -0.03735411558061,-0.007797273549435, 0.003576531618535};  
float h1[11] = {  
0.003576531618535,-0.007797273549435, -0.03735411558061,  0.03331869218761,
     0.2848014750865,   0.4469093804748,   0.2848014750865,  0.03331869218761,
   -0.03735411558061,-0.007797273549435, 0.003576531618535};  
float h2[11] = {  
0.003576531618535,-0.007797273549435, -0.03735411558061,  0.03331869218761,
     0.2848014750865,   0.4469093804748,   0.2848014750865,  0.03331869218761,
   -0.03735411558061,-0.007797273549435, 0.003576531618535};  
float h3[11] = {  
0.003576531618535,-0.007797273549435, -0.03735411558061,  0.03331869218761,
     0.2848014750865,   0.4469093804748,   0.2848014750865,  0.03331869218761,
   -0.03735411558061,-0.007797273549435, 0.003576531618535};  
int dataPreview[51];			

short fir_filter(short x, float h[])
{
	int ORDER = 11;//sizeof(h)/sizeof(h[0]);  
	float sum = 0;
  int j=0, i=0;
  for(i = ORDER - 1; i > 0; i--)
	{
		dataPreview[i] = dataPreview[i-1];
	}
	dataPreview[0] = (float)x;
  for(i = 0; i < ORDER; i++)
		{
			sum = sum + dataPreview[i] * h[i]; 
		}
  
		return (short)sum;
  }  