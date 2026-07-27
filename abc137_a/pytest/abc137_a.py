#!/usr/bin/env python3

def max_number(X, Y):
    return max(X + Y, X - Y, X * Y)

if __name__ == "__main__":
    X, Y = map(int, input().split())
    print(max_number(X, Y))