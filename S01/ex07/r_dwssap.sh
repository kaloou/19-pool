cat /etc/passwd | sed '/^#/d' | awk 'NR % 2 == 0 {print -zsh}' | awk -F : '{  print  }' | rev | sort -fnr | awk -v FT_LINE1= -v FT_LINE2=  'NR >= FT_LINE1 && NR <= FT_LINE2 { print -zsh }' | tr '
' ' '  | sed 's+ +, +g' | sed 's+, $+.+g' | tr -d '
'
