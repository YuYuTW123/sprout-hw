void admissionListSort(Student students[], int sizeOfStudents)
{
	for(int a = 0; a < sizeOfStudents ; a++)
	{
	    for(int b = 0; b < sizeOfStudents - 1; b++ )
		{
			if(students[b].name[0] > students[b + 1].name[0])
			{
	    		Student sw;
	    		sw = students[b];
	    		students[b] = students[b+1];
	    		students[b+1] = sw;
	    	}
	    	if(students[b].name[0] == students[b + 1].name[0])
			{
				for(int c = 1; c < 10 ; c++)
				{
	    			if(students[b].name[c] > students[b + 1].name[c])
	    			{
	    				Student sw;
	    				sw = students[b];
	    				students[b] = students[b+1];
	    				students[b+1] = sw;
	    				break;
	    			}
				}
	    	}
		}
	}
	for(int a = 0; a < sizeOfStudents ; a++)
	{
	    for(int b = 0; b < sizeOfStudents - 1; b++ )
		{
	    	if(students[b].score > students[b + 1].score)
			{
	    		Student sw;
	    		sw = students[b];
	    		students[b] = students[b+1];
	    		students[b+1] = sw;
	    	}
		}
	}
}
