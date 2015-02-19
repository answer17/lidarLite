    #include "lidarLite.h"
    #include <time.h>

    int main(int argc,char *argv[])
    {
   time_t rawtime;
   struct tm *tim;
    int fd, res, i, del;
    float good, bad;
    unsigned char st, ver;


// First arg is delay in ms (default is 1000)
if (argc > 1) 
   del = atoi(argv[1]);
else del=1000;
    
    fd = lidar_init(true);
   
    if (fd == -1) {
        printf("init error\n");
        }
    else {
        for (i=0;i<40;i++) {
            time( &rawtime );
            tim = localtime( &rawtime );
            printf("====  %d:%02d:%02d\n", tim->tm_hour, tim->tm_min, tim->tm_sec); 
            ver = lidar_version(fd);
            res = lidar_read(fd);
            printf("%3.0d cm rev=0x%x\n", res, ver);
	        if (res > 0) good++;
	        else	bad++;
            
            st = lidar_status(fd);
            lidar_status_print(st);
            
            delay(del);
            }
            
            printf("Perc Good=%.1f", good/(good+bad) * 100.0F);
        }
    }
