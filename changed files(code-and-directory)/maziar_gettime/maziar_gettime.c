#include <linux/stdio.h>
#include <linux/syslog.h>
#include <linux/linkage.h>
#include <linux/time.h>

asmlinkage long maziar_gettime(int flag, struct timeval *currenttime)  {
	
	if(currenttime)
		return 666;

	if(flag == 1)
	{		//print a message in syslog too
		openlog("maziar_gettime", LOG_CONS, LOG_AUTH);
		syslog(0,"time is : %d",currenttime->tv_sec);
		closelog();
		return 0;
	}
	else if(flag == 0)
	{
		openlog("maziar_gettime", LOG_CONS, LOG_AUTH);
		syslog(0,"there is some MAZIAAAAAAAR ERRRROOORRRR with this systemcall!!!!!");
		closelog();
		return 0;
	}
	return 666;
}
