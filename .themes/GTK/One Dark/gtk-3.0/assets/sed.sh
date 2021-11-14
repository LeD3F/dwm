#!/bin/sh
sed -i \
         -e 's/#1e222a/rgb(0%,0%,0%)/g' \
         -e 's/#efefef/rgb(100%,100%,100%)/g' \
    -e 's/#1e222a/rgb(50%,0%,0%)/g' \
     -e 's/#4d78cc/rgb(0%,50%,0%)/g' \
     -e 's/#1e222a/rgb(50%,0%,50%)/g' \
     -e 's/#efefef/rgb(0%,0%,50%)/g' \
	"$@"
