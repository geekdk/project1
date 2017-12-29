Set WshShell = WScript.CreateObject("WScript.Shell")
dim sapi
set sapi=createobject("sapi.spvoice")
dim msg
msg="i am a highly advance computer program designed to understand and respond to human emotions;i am designed by highly skilled engineers of lovely professional university;i am at  present in development stage and my motive is to become an interactive medium between machines and human beings;so that even machines can understand human emotions;i hope you like my concept and any logical feedback will be highly appreciated  "
sapi.speak msg