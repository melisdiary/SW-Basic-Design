#pragma once
#include <string.h>
#include <stdlib.h>
int MovableItem[10][10] = { 0 }; //비획득을 0, 획득을 1, 사용을 2로 저장
int ImmovableItem[10][10] = { 0 }; //미사용을 0, 사용을 1로 저장

char MovableItem_Name[10][10][50] = {
	{"♀ 금고 열쇠", "♀ 1번방 열쇠"},
	{"★ 찢어진 티켓조각(1/3)", "⊙ 연필", "▤ 메모장", "♀ 2번방 열쇠", "▤ 숫자가 적힌 쪽지"},
	{"★ 찢어진 티켓조각(2/3)", "▤ 진료차트", "▩ 경찰ID카드"},
	{"★ 찢어진 티켓조각(3/3)", "▤ 사건파일(1/3)", "▤ 사건파일(2/3)", "▤ 사건파일(3/3)", "ㆀ 수갑", "☆ 극장 티켓"},
	{""},
	{"♀ 6번방 열쇠"},
	{"▤ 숫자가 적힌 쪽지"},
	{""},
	{"♀ 5번방 탈출 열쇠"},
	{""}
};

char ImmovableItem_Name[10][10][50] = {
	{ "금고" },
	{ "컴퓨터", "책상서랍", "의자", "신문" },
	{ "링거", "주사기", "청진기" },
	{ "" },
	{ "총","상사 오브젝트", "사람 오브젝트A", "사람 오브젝트B", "사람 오브젝트C", "사람 오브젝트D", "사람 오브젝트E" },
	{ "살인도구", "피해자의 시신", "컴퓨터", "책상서랍", "의자", "신문" },
	{ "전화기", "전기 레버" },
	{ "" },
	{ "오브젝트1", "오브젝트2", "오브젝트3", "오브젝트4", "오브젝트5", "오브젝트6", "오브젝트7", "오브젝트8", "오브젝트9", "오브젝트10" },
	{ "컴퓨터","원서책", "의자", "신문" }
};