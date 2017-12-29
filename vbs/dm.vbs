Set WshShell = WScript.CreateObject("WScript.Shell")
dim sapi
set sapi=createobject("sapi.spvoice")
dim msg
msg="developer mode activated;please enter your secure password "
sapi.speak msg