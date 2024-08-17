import turtle as t
t.speed(10)
t.penup()
t.goto(-320, 320)
t.pendown()

def white_square():
    t.fd(80)
    for i in range(4):
        t.fd(80)
        t.rt(90)

def black_square():
    t.fd(80)
    t.fillcolor("black")
    t.begin_fill()
    for i in range(4):
        t.fd(80)
        t.rt(90)
    t.end_fill()

for i in range(8):
    t.bk(80)
    for i in range (4):
        white_square()
        black_square()
    temp = white_square
    white_square = black_square
    black_square = temp
    t.penup()
    t.fd(80)
    t.rt(90)
    t.fd(80)
    t.rt(90)
    t.fd(640)
    t.rt(90)
    t.rt(90)
    t.pendown()
t.done()