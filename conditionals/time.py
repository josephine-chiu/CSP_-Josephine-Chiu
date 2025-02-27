# Josephine Chiu, Time of Day for Python
import time

current =time.time()

#get just the hour
local_time = time.localtime(current)
hour = local_time.tm_hour

if hour <=12:
    print("Good morning!")
elif hour <= 17:
    print("Good afternoon!")
else:
    print("Good evening!")
