#!/usr/bin/env python

A, B = map(int, input().split() )

x = A + B

if (x < (A - B)):
  x = A - B

if (x < (A * B)):
  x = A * B

print(x)
