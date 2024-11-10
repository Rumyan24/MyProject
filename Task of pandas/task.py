# Артём Румянцев, делал в Visual Studtio Code
import pandas as pd


df = pd.read_csv('g:\\MyProjectGit\\Task of pandas\\mean.csv')


df.to_csv('new_file.csv', index=False)

# Вывод первых нескольких строк DataFrame
print(df.head())