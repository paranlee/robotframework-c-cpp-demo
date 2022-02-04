*** Settings ***
Library	Process

*** Test Cases ***
Example of running a executable binary valid
    [Template]    Example of valid
    hello    world

Example of running a executable binary of too many chracter
    [Template]    Example of too many chracter
    hello1    world2
    123456    1
    1    123456

*** Keyword ***
Hello
    [Arguments]     ${arg1}     ${arg2}
    ${result} =	Run Process	${CURDIR}/hello.o   ${arg1}     ${arg2}
    [Return]    ${result}

Example of valid
    [Arguments]     ${arg1}     ${arg2}
    ${result} =	Hello     ${arg1}     ${arg2}
    Should be equal as strings  ${result.stdout}    hello, world

Example of too many chracter
    [Arguments]     ${arg1}     ${arg2}
    ${result} =	Hello     ${arg1}     ${arg2}
    Should be equal as strings  ${result.stdout}    Error: Too many chracter
