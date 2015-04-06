/*this file is generated by awk*/

#ifndef __msgbin__gen__
#define __msgbin__gen__

#include <string>
#include <vector>
#include "MsgBin.hpp"

namespace msgbin
{

	struct UserLoginReq
	{
		std::string udid;
	};

	struct UserLoginAck
	{
		std::string udid;
		std::string name;
		int32 level;
	};

	struct UserJoinReq
	{
		std::string udid;
	};

	struct UserJoinAck
	{
		std::string udid;
		std::string name;
		int32 level;
	};

	struct BVector2
	{
		int32 x;
		int32 y;
	};

	struct RoomUser
	{
		BVector2 pos;
		int32 direction;
		int32 status;
	};

	struct RoomReadyNtf
	{
		int32 roomId;
		std::vector<RoomUser> uPosAll;
		int32 uIdx;
	};

	struct RoomCloseNtf
	{
		int32 t;
	};

	struct RoomUserChg
	{
		int32 uIdx;
		RoomUser user;
	};

	struct Bubble
	{
		int32 id;
		BVector2 pos;
		int32 power;
		int32 keeptime;
	};

	struct SetBubble
	{
		Bubble b;
		int32 uIdx;
	};

	struct BubbleBomb
	{
		int32 id;
		std::vector<BVector2> destroyTiles;
		std::vector<int32> destroyUsers;
	};

	struct RoomUserStatusChg
	{
		int32 id;
		int32 status;
	};

	int BzReadUserLoginReq(byte_t **pbyte, UserLoginReq *ret);
	int BzWriteUserLoginReq(byte_t **pbyte, UserLoginReq *ret);

	int BzReadUserLoginAck(byte_t **pbyte, UserLoginAck *ret);
	int BzWriteUserLoginAck(byte_t **pbyte, UserLoginAck *ret);

	int BzReadUserJoinReq(byte_t **pbyte, UserJoinReq *ret);
	int BzWriteUserJoinReq(byte_t **pbyte, UserJoinReq *ret);

	int BzReadUserJoinAck(byte_t **pbyte, UserJoinAck *ret);
	int BzWriteUserJoinAck(byte_t **pbyte, UserJoinAck *ret);

	int BzReadBVector2(byte_t **pbyte, BVector2 *ret);
	int BzWriteBVector2(byte_t **pbyte, BVector2 *ret);

	int BzReadRoomUser(byte_t **pbyte, RoomUser *ret);
	int BzWriteRoomUser(byte_t **pbyte, RoomUser *ret);

	int BzReadRoomReadyNtf(byte_t **pbyte, RoomReadyNtf *ret);
	int BzWriteRoomReadyNtf(byte_t **pbyte, RoomReadyNtf *ret);

	int BzReadRoomCloseNtf(byte_t **pbyte, RoomCloseNtf *ret);
	int BzWriteRoomCloseNtf(byte_t **pbyte, RoomCloseNtf *ret);

	int BzReadRoomUserChg(byte_t **pbyte, RoomUserChg *ret);
	int BzWriteRoomUserChg(byte_t **pbyte, RoomUserChg *ret);

	int BzReadBubble(byte_t **pbyte, Bubble *ret);
	int BzWriteBubble(byte_t **pbyte, Bubble *ret);

	int BzReadSetBubble(byte_t **pbyte, SetBubble *ret);
	int BzWriteSetBubble(byte_t **pbyte, SetBubble *ret);

	int BzReadBubbleBomb(byte_t **pbyte, BubbleBomb *ret);
	int BzWriteBubbleBomb(byte_t **pbyte, BubbleBomb *ret);

	int BzReadRoomUserStatusChg(byte_t **pbyte, RoomUserStatusChg *ret);
	int BzWriteRoomUserStatusChg(byte_t **pbyte, RoomUserStatusChg *ret);

}

#endif
