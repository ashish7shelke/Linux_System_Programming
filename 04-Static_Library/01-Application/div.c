//
//	Div function - returns division of 2 integers
//

int div(int val1, int val2)
{
	if(val2 != 0)
  	return(val1 / val2);
 	
 	//This is intentional - to avoid devide by zero case
  	return 0;
}
