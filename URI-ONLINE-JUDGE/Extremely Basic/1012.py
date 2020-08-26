A, B, C = list(map(float,input().split()))

TRIANGULO = C * A / 2
CIRCULO = 3.14159 * C * C
TRAPEZIO =(A + B) * C / 2
QUADRADO = B * B
RETANGULO = A * B

print("TRIANGULO: {:.3f}".format(TRIANGULO))
print("CIRCULO: {:.3f}".format(CIRCULO))
print("TRAPEZIO: {:.3f}".format(TRAPEZIO))
print("QUADRADO: {:.3f}".format(QUADRADO))
print("RETANGULO: {:.3f}".format(RETANGULO))