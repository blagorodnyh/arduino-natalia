import serial

porta = "COM6"
velocidade = 9600

conexao = serial.Serial(porta, velocidade)

while True:
    pergunta = input("a - turns the led off\n A - turns the led on\n")

    if pergunta == "a":
        conexao.write(b'a')
    if pergunta == "A":
        conexao.write(b'A')


conexao.close()
