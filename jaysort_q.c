/**
 * Method: During a group of array digits, first we find out the min and max item,
 *         by formula "(max - min) / n" get the unit size divisor,
 *         by the divisor we compute all item's sort position which between the min and max,
 *         then items which on that computed position item right side and smaller, move to left.
 *         (default sort direction Left to Right)
 *
 * eg: int arr[] = {9, 1, 20};        min:1 max:20 diviser:(1+20)/3=7
 * computed position:  {1, 0, 2}      "(9-1)/7~=1, (1-1)/7=0, (20-1)/7~=2"
 * for position "1", it means the item "9" should be at index 1, equal "arr[1] = 9;",
 *
 * ... this way is very high speed, but not finish validation
 */

void jaysort_q(int arr[], int n)
{
	int min=0,max=0, i=0;
	for(i=0; i<n; i++) {//first find out the min & max item
		if(i==0 || arr[i]<min) min=arr[i];
		if(arr[i]>max) max=arr[i];
	}

	if(n<=2) {//if only 2 items just return the min and max
		if(n==2) { arr[0]=min; arr[1]=max; }
		return;
	}

	register int _UPTI_ = 5;// require (>= 5)

	int ZERO=min-1;
	int tmplen = n*_UPTI_ - n%4 + 4;
	int *swaptmp = (int*)malloc(tmplen*sizeof(int));   //allocate 5 times memory space
	for(i=0; i<tmplen; i+=4) {
		swaptmp[i] = ZERO;
		swaptmp[i+1] = ZERO;
		swaptmp[i+2] = ZERO;
		swaptmp[i+3] = ZERO;
	}

	register double unit_size = (double)(max-min) / n; //compute the unit size and set to cpu register type

	int m=0, q=0, temp=0, val=0;
	double cbit = 0;
	for(i=0; i<n; i++)
	{
		cbit = (double)(arr[i]-min) / unit_size;//compute the current item's index value
		m = cbit*_UPTI_;
		val = arr[i];
		while(m<tmplen) {
			if(swaptmp[m]==ZERO) {
				swaptmp[m] = val;
				break;
			} else if(swaptmp[m]>val) {
				temp = swaptmp[m];
				swaptmp[m] = val;
				val = temp;
			}
			m++;
		}
	}

	for(i=0,m=0; i<tmplen&&m<n; i++) {
		if(swaptmp[i]>ZERO) arr[m++] = swaptmp[i];
	}

	free(swaptmp);
}