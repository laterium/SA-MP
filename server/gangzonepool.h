
#ifndef SAMPSRV_GANGZONEPOOL_H
#define SAMPSRV_GANGZONEPOOL_H

//----------------------------------------------------

class CGangZonePool
{
private:
	float			m_fGangZone[MAX_GANG_ZONES][4];
	BOOL			m_bSlotState[MAX_GANG_ZONES];
public:
	CGangZonePool();
	~CGangZonePool() {};
	WORD New(float fMinX, float fMinY, float fMaxX, float fMaxY);
	void Delete(WORD wZone);
	void ShowForPlayer(PLAYERID playerId, WORD wZone, DWORD dwColor);
	void ShowForAll(WORD wZone, DWORD dwColor);
	void HideForPlayer(PLAYERID playerId, WORD wZone);
	void HideForAll(WORD wZone);
	void FlashForPlayer(PLAYERID playerId, WORD wZone, DWORD dwColor);
	void FlashForAll(WORD wZone, DWORD dwColor);
	void StopFlashForPlayer(PLAYERID playerId, WORD wZone);
	void StopFlashForAll(WORD wZone);
	BOOL GetSlotState(WORD wZone)
	{
		if (wZone >= MAX_GANG_ZONES) return FALSE;
		return m_bSlotState[wZone];
	};
};

//----------------------------------------------------

#endif
