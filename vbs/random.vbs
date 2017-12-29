Set WshShell = WScript.CreateObject("WScript.Shell")
dim r
dim sapi
set sapi=createobject("sapi.spvoice")
dim msg
randomize
r = int(rnd*6) + 1
msg ="number is "&r
sapi.speak msg

