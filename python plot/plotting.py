import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
df = pd.read_csv('Weather Dataset.csv')
# print(df)
# print(df.isnull().sum())
df.dropna(inplace=True) # Drop rows with any missing values
df.dropna(axis=1, inplace=True) # Drop columns with any missing values
# print(df.duplicated().sum())
df.drop_duplicates(inplace=True)
# print(df.duplicated().sum()) #to check that the duplicate is removed
# print(df.describe())
min_temp = -50
max_temp = 50
df.loc[(df['Temperature (C)'] < min_temp) | (df['Temperature (C)'] > max_temp), 'Temperature (C)' ] = np.nan #cuz there's error in the range of temp
df.loc[(df['Humidity'] < 0) | (df['Humidity'] > 1), 'Humidity' ] = np.nan #cuz there's error in the range of Humidity
df.loc[(df['Visibility (km)'] < 0) | (df['Visibility (km)'] > 100), 'Visibility (km)' ] = np.nan #cuz there's error in the range of Visibility (km)
print(df.describe())
df.plot(x='Formatted Date', y='Temperature (C)', kind='line')
plt.xlabel('Date')
plt.ylabel('Temperature (C)')
plt.title('Temperature Over Time')
plt.show()

df.plot(kind='hist', y='Temperature (C)', bins=10, color='blue', edgecolor='black')
plt.xlabel('Temperature (C)')
plt.ylabel('Frequency')
plt.title('Histogram of Temperature')
plt.grid(True)
plt.show()

df.plot(kind = 'scatter', x ='Temperature (C)', y = 'Humidity', color = 'blue')
plt.xlabel('Temperature (C)')
plt.ylabel('Humidity')
plt.title('Histogram of Temperature')
plt.show()
