void print(Student s)
{
	cout<<s.name<<"["<<s.gender<<"]: "<<s.score<<endl;
}
double girls_average(Student ss[],int size)
{
	double sum=0;
	int cou=0;
	for(int a=0;a<size;a++){
		if(ss[a].gender=='F'){
				sum+=ss[a].score;
				cou++;
		}
	}
	if(cou==0)
		return -1;
	else{
		double aver=sum/cou;
		return aver;
	}
}
double boys_average(Student ss[],int size)
{
	double sum=0;
	int cou=0;
	for(int a=0;a<size;a++){
		if(ss[a].gender=='M')
			sum+=ss[a].score;
			cou++;
	}
	if(cou==0)
		return -1;
	else{
		double aver=sum/cou;
		return aver;
	}
}
