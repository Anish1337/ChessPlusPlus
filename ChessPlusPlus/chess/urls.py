from django.urls import path
from .views import home, board

urlpatterns = [
    path('', home, name='home'),
    path('board/', board, name='board')
    ,
]

