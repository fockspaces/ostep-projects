#! /bin/bash

if ! [[ -x wgrep ]]; then
    echo "wgrep executable does not exist"
    exit 1
fi

../../tester/run-tests.sh $*
read -p "Press [Enter] key to start backup..."


