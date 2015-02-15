    #include "lidarLite.h"
    #include <time.h>

    int main(int argc,char *argv[])
    {
   time_t rawtime;
   struct tm *tim;
   char buffer[80];

    int fd, res;
    unsigned char st;
    
    fd = lidar_init(true);
   
    if (fd == -1) {
        printf("init error\n");
        }
    else {
        while (1) {
            time( &rawtime );
            tim = localtime( &rawtime );
            printf("====  %d:%02d:%02d\n", tim->tm_hour, tim->tm_min, tim->tm_sec); 
            
            res = lidar_read(fd);
            printf("%d cm %.1f in\n", res, res*.39);
            
            st = lidar_status(fd);
            lidar_status_print(st);
            
            st = lidar_version(fd);
            printf("Lidar version 0x%x\n", (int) st);
            
            delay(3000);
            }
        }
    }
