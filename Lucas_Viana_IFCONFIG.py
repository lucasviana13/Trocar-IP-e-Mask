_author_='Lucas Silva Viana'
###Pyhon para alterar o ip e mascara em Linux

import subprocess
import math ###Biblioteca para se usar Log

def mascara(ips):
	### codigo para definir a mascara de acordo
	### com o numero de ips desejados
	masc =32-(int(math.log(ips, 2))+1)
	return masc


interface= raw_input ("Placa de Rede: ") ###Pega a Placa de Rede
ip= raw_input ("Novo IP: ") ###Pega o ip novo para a máquina
comand = 'ifconfig ' ###Comando para alterar ip e mascara
ips= input ("Números de máquinas você deseja ligar: ") ###Para determinar a mascara
masc = mascara(ips) 
cmd = comand + interface+' '+ ip + '/' + str(masc) ###Comando escrito
###print(cmd)
subprocess.call(cmd, shell=True) ###Execução
subprocess.call ('ifconfig', shell=True) ###Impressão das novas configurações


