Set WshShell = WScript.CreateObject("WScript.Shell")
dim msg, sapi
msg=inputbox("PLEASE ENTER YOUR REMINDER ","VRD SOFTWARE SOLUTIONS©","type here")
set sapi=createobject("sapi.spvoice")
sapi.speak msg