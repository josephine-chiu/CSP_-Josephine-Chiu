# Josephine Chiu, How to get the time of day for Python

import time
#print(time.gmtime(0)) #gmtime(0) first instance of time in ptrogramming

#current time in seconds since gmtime
current =time.time()

#Current time as we are used to seeing it
now = time.ctime(current)
print(now)

#get just the hour
local_time = time.localtime(current)
hours = local_time.tm_hour
minutes = local_time.tm_min
print(hours)
print(minutes)