import matplotlib.pyplot as plt
import numpy as np
import sympy as sp

# for integration
def f(x):
    return (x ** 3)/2

x = sp.Symbol('x')

sp.integrate(f(x),(x,10,12))

#for shading the area under the curve
x = np.linspace(10, 12, 1000)
plt.plot(x, f(x))
plt.axhline(color="black")
plt.fill_between(x, f(x), where=[(x > 10) and (x < 12) for x in x])
plt.show()

