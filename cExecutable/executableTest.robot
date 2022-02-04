*** Settings ***
Library	Process

*** Test Cases ***
Example of running a executable binary
	${result} =	Run Process	${CURDIR}/hello.o
	Should be equal as strings	${result.stdout}	hello