import pandas as pd

dataset = pd.read_csv(".C:\\Users\\jessica\\.spyder-py3\\train.csv",header = 0)

dataset.drop(["bairro", "diferenciais","tipo","tipo_vendedor"], axis=1, inplace=True)

dataset.drop([dataset.index[405],dataset.index[3910],dataset.index[2568],dataset.index[4004]], inplace=True)

attributes = dataset.iloc[:, 1:-1]
target     = dataset.iloc[:, -1]

X = attributes.values
y = target.values

from sklearn.model_selection import train_test_split

X_train, X_test, y_train, y_test = train_test_split(X,y,test_size = 0.4)

from sklearn.linear_model import LinearRegression 

regressor = LinearRegression()
regressor.fit(X_train, y_train)

y_pred  = regressor.predict(X_train)
y_pred_test  = regressor.predict(X_test)

Teste = pd.read_csv("C:\\Users\\jessica\\.spyder-py3\\test.csv")

Teste.drop(["bairro", "diferenciais","tipo","tipo_vendedor"], axis=1, inplace=True)

Xteste = Teste.iloc[:, 1:]

y_pred_Teste = regressor.predict(Xteste)

import pandas as pd
datasetId = pd.read_csv("C:\\Users\\jessica\\.spyder-py3\\test.csv",header = 0)
regressaoLinear = pd.DataFrame(y_pred_Teste, columns=['preco'])
datasetId = datasetId[['Id']]
resultado = pd.concat([datasetId,regressaoLinear],axis=1)
resultado.to_csv('resultadofinal.csv',index=False)