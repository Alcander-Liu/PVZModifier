.386 
.model flat, stdcall
.STACK 4096
option casemap :none
include /masm32/include/windows.inc
include /masm32/include/masm32.inc
include /masm32/include/gdi32.inc
include /masm32/include/user32.inc
include /masm32/include/kernel32.inc
includelib C:\Irvine\Irvine32.Lib

	; functions from Irvine32
	DumpRegs PROTO
	ReadString PROTO
	WriteString PROTO
	ReadInt PROTO
	WriteInt PROTO
	WriteHex PROTO
	Str_compare PROTO, string1: PTR BYTE, string2: PTR BYTE

	; self-defined functions
	setSun PROTO, hProcess: DWORD
	killAllZombies PROTO, hProcess: DWORD
	godBean PROTO, hProcess: DWORD
	freePlants PROTO, hProcess: DWORD
	overlapPlants PROTO, hProcess: DWORD
	invincibleZombies PROTO, hProcess: DWORD
	freezeZombies PROTO, hProcess: DWORD
	charmZombies PROTO, hProcess: DWORD
	setLevel PROTO, hProcess: DWORD
	autoCollect PROTO, hProcess: DWORD
	noCoolDown PROTO, hProcess: DWORD
	clearFirstRound PROTO, hProcess: DWORD