# -*- coding: utf-8 -*-
"""Untitled3.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1n6uz_hnwdNZcd1tlAJnOVa_o0AtYl1Pi
"""

n=input("Введите результат преобразований: ")
if int(n) < 100 or int(n) > 999:
  print("Результат не соответствует условиям задачи!")
else:
  x = int(f'{n[0]}{n[2]}{n[1]}')
  print("Задуманное трехзначное число равно: ", x)

