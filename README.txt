En archivos/ se encuentra el cpp que he estado editando para realizar el git bisect y distintas capturas pantalla de los comandos que he realizado para 
el git bisect.

El repositorio utilizado es: https://github.com/EmilioUA/DCA_P10

Ahora comentado los pasos y comandos para configurar el proyecto: 

Lo primero es configur el nombre de usuario y el email, si no le tenias ya configurado antes:
git config --global user.name "nombre"
git config --global user.email "usuario@email.com"

Lo segundo sería crear el repositorio en GitHub.

Después lo clonamos, en mi caso lo he clonado con la herramienta de GitHub Desktop. Si no lo podemos clonar con:
git remote add origin git@github.com/EmilioUA/DCA_P10.git
git checkout -b main
git pull

A continuciín he creado algunos alias locales y globales

Globales
git config --global alias.co checkout
git config --global alias.ci commit
git config --global alias.st status
git config --global alias.br branch
git config --global alias.crearRama 'checkout -b'

Locales
#alias de git           
alias ga='git add '   
alias gc='git commit ' 

Luego realizamos los comandos de git bisect. Primero he mirado con git log los commits para saber el orden y saber que commits marcar como good o bad.


