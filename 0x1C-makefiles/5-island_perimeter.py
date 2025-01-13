#!/usr/bin/python3
"""
Module to calculate the perimeter of an island in a grid.
"""

def island_perimeter(grid):
"""
Calculate the perimeter of an island.
Args:
grid (list of list of int): 2D grid representation.
Returns:
int: Perimeter of the island.
    """
perimeter = 0
for i in range(len(grid)):
for j in range(len(grid[i])):
if grid[i][j] == 1:
# Check all four sides
if i == 0 or grid[i-1][j] == 0:  # Top
perimeter += 1
if j == 0 or grid[i][j-1] == 0:  # Left
perimeter += 1
if i == len(grid) - 1 or grid[i+1][j] == 0:  # Bottom
perimeter += 1
if j == len(grid[i]) - 1 or grid[i][j+1] == 0:  # Right
perimeter += 1
return perimeter
