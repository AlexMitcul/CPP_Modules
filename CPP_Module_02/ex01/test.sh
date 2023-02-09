#!/bin/sh

EXEC=(find . -type f -executable -print)
$(EXEC) > my.log; diff my.log main.log
