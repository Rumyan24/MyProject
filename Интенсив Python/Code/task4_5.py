# -*- coding: utf-8 -*-
"""Untitled3.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1n6uz_hnwdNZcd1tlAJnOVa_o0AtYl1Pi
"""

x = float(input("Введите координату по оси X: "))
y = float(input("Введите координату по оси Y: "))

if x > 4:
    print("Точка ({}, {}) находится в области II".format(x, y))
elif x < 4:
    print("Точка ({}, {}) находится в области I".format(x, y))
else:
    print("Точка ({}, {}) лежит на границе областей".format(x, y))

