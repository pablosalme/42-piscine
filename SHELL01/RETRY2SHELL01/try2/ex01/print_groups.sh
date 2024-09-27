#!/bin/bash
printf $(id -nG $FT_USER | tr " " ",")
