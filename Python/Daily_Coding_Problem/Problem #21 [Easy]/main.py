time_intervals = [(30, 75), (0, 50), (60, 150), (90, 120), (10, 20)]

array_length = len(time_intervals)

rooms = 1

for i in range(array_length):
    flag = False

    for j in range(i+1, array_length):
        if time_intervals[i][1] > time_intervals[j][0] and time_intervals[j][1] > time_intervals[i][0]:
            flag = True
            continue
    
    if flag == True:
        rooms = rooms + 1

if rooms > 2:
    print (rooms - 1)
else:
    print (rooms)
