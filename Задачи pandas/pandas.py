# Артём Румянцев, делал в Visual Studtio Code
import pandas as pd

# Загрузка данных из Excel файла
file_path = 'Birth.xlsx'
df = pd.read_excel(file_path, sheet_name='Birth registration')

# Вывод первых нескольких строк DataFrame
print(df.head())
