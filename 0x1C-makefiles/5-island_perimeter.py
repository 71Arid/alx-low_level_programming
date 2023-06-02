#!/usr/bin/python3
""" Module for calculating perimeter of grid """


def island_perimeter(grid):
    """
    get the perimeter
    0 water zone
    1 land zone
    """
    rows = len(grid)
    column = len(grid[0])

    perimeter = 2 * (rows + column)

    for i in range(rows):
        for j in range(column):
            if grid[i][j] == 1:
                perimeter -= 2
    return perimeter
