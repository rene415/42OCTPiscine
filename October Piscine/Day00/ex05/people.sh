Ldapsearch -Q -LLL -S -cn "uid=z*" cn | grep -v "^$" | grep -v "^d"| cut -c 5-| sort -f -d
