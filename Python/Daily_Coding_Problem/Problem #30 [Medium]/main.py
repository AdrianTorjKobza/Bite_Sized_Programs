# Naive solution, assuming that the first and last element, are the first two tallest walls.
walls = [3, 0, 1, 3, 0, 5]

# Get the second heighest wall.
if walls[0] < walls[-1]:
    second_height = walls[0]
else:
    second_height = walls[-1]

# Remove the first and last wall.
walls.pop(0)
walls.pop(-1)

total_water = second_height * len(walls) - sum(walls)

print (total_water)

# TO DO
# For other cases like: [3, 0, 1, 5, 0, 1, 6], we need to break the initial list into multiple lists:
# [3, 0, 1, 5] and [5, 0, 1, 6], so that the first and last element, are the first two tallest walls.
# total_water = total_water of [3, 0, 1, 5] + total_water of [5, 0, 1, 6]
