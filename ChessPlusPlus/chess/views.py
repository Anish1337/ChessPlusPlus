# TODO

from django.shortcuts import render

def home(request):
    return render(request, 'chess/home.html')

def board(request):
    return render(request, 'chess/board.html')
