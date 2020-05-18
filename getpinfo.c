#include "types.h"
#include "stat.h"
#include "proc_stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc,char** argv)
{
	if(argc<2)
	{
		printf(1,"Invalid number of arguments\n");
		exit();
	}
	int pid=atoi(argv[1]);
	struct proc_stat sp;
	int val=gpinfo(&sp,pid);

	if(!val)
	{
		printf(1,"Enter a valid pid\n");
		exit();
	}

	printf(1,"pid:%d\n",sp.pid);
	printf(1,"runtime:%d\n",sp.runtime);
	printf(1,"num_run:%d\n",sp.num_run);
	printf(1,"current_queue:%d\n",sp.current_queue);
	for(int j=0;j<5;j++)
	printf(1,"ticks[%d]:%d\n",j,sp.ticks[j]);

	exit();
}