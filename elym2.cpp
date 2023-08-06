// Attack Speed
const char* AttackSpeed[7] = { "[OFF]", "[1.7º]","[1.9º]","[2.1º]","[2.9º]","[3.5º]","[4.5º]"};
const char* MovementSpeed[7] = { "[OFF]", "[1.7º]","[1.9º]","[2.1º]","[2.9º]","[3.5º]","[4.5º]" };
const char* SwordRange[7] = { "[OFF]", "[25º]","[65º]","[105º]","[190º]","[2500º]","[4900º]" };
const char* QuickAge[2] = { "[OFF]", "[ON]" };

// Character
INT m_iAttackSpeed;
INT m_iMovementSpeed;
INT m_iSwordRange;
INT m_iQuickAge;

// Skill Hack
const char* SkillSpeed[7] = { "[OFF]", "[1.7º]","[1.9º]","[2.1º]","[2.9º]","[3.5º]","[4.5º]" };

const char* NinjaHack[6] = { "[OFF]", "[Sº]","[Fº]","[K]","[Pº]","[Cº]" };
const char* FighterHack[6] = { "[OFF]", "[Sº]","[Soulº]","[Sº]","[Sº]","[Hº]" };
INT m_iSkillSpeed,m_iNinja,m_iFighter,m_iShaman,m_iSura;


namespace OnlyfansArt
{
	uintptr_t Adres(uintptr_t pointer, std::vector<unsigned int>adres)
	{
		uintptr_t adres_c = pointer;
		for (unsigned int i = 0; i < adres.size(); ++i)
		{
			adres_c = *(uintptr_t*)adres_c;
			adres_c += adres[i];
		}
		return adres_c;
	}
}

enum Adres
{
	LocalPlayer = 0x011D3404,
	LocalPointer = 0xC
};

enum Pointer
{
	dwAttackSpeed = 0x1B48,
	dwMovementSpeed = 0x1B44,
	dwSwordRange = 0x1b40,
	dwQuickAge = 0x1B3C,

	dwSkillSpeed = 0x19D0,
	dwSkillHack = 0x1AD0
};

void Attack_Speed()
{
	uintptr_t rbexe = (uintptr_t)GetModuleHandleA("metin2client.bin");
	if (m_iAttackSpeed == 1) 
	{
		*(float*)OnlyfansArt::Adres(rbexe + Adres::LocalPlayer, { Adres::LocalPointer, Pointer::dwAttackSpeed }) = 1.7;
	}
	else if (m_iAttackSpeed == 2) 
	{
		*(float*)OnlyfansArt::Adres(rbexe + Adres::LocalPlayer, { Adres::LocalPointer, Pointer::dwAttackSpeed }) = 1.9;
	}
	else if (m_iAttackSpeed == 3) 
	{
		*(float*)OnlyfansArt::Adres(rbexe + Adres::LocalPlayer, { Adres::LocalPointer, Pointer::dwAttackSpeed }) = 2.1;
	}
	else if (m_iAttackSpeed == 4) 
	{
		*(float*)OnlyfansArt::Adres(rbexe + Adres::LocalPlayer, { Adres::LocalPointer, Pointer::dwAttackSpeed }) = 2.9;
	}
	else if (m_iAttackSpeed == 5) 
	{
		*(float*)OnlyfansArt::Adres(rbexe + Adres::LocalPlayer, { Adres::LocalPointer, Pointer::dwAttackSpeed }) = 3.5;
	}
	else if (m_iAttackSpeed == 6) 
	{
		*(float*)OnlyfansArt::Adres(rbexe + Adres::LocalPlayer, { Adres::LocalPointer, Pointer::dwAttackSpeed }) = 4.5;
	}
}

void Movement_Speed()
{
	uintptr_t rbexe = (uintptr_t)GetModuleHandleA("metin2client.bin");
	if (m_iMovementSpeed == 1)
	{
		*(float*)OnlyfansArt::Adres(rbexe + Adres::LocalPlayer, { Adres::LocalPointer, Pointer::dwMovementSpeed }) = 1.7;
	}
	else if (m_iMovementSpeed == 2)
	{
		*(float*)OnlyfansArt::Adres(rbexe + Adres::LocalPlayer, { Adres::LocalPointer, Pointer::dwMovementSpeed }) = 1.9;
	}
	else if (m_iMovementSpeed == 3)
	{
		*(float*)OnlyfansArt::Adres(rbexe + Adres::LocalPlayer, { Adres::LocalPointer, Pointer::dwMovementSpeed }) = 2.1;
	}
	else if (m_iMovementSpeed == 4)
	{
		*(float*)OnlyfansArt::Adres(rbexe + Adres::LocalPlayer, { Adres::LocalPointer, Pointer::dwMovementSpeed }) = 2.9;
	}
	else if (m_iMovementSpeed == 5)
	{
		*(float*)OnlyfansArt::Adres(rbexe + Adres::LocalPlayer, { Adres::LocalPointer, Pointer::dwMovementSpeed }) = 3.5;
	}
	else if (m_iMovementSpeed == 6)
	{
		*(float*)OnlyfansArt::Adres(rbexe + Adres::LocalPlayer, { Adres::LocalPointer, Pointer::dwMovementSpeed }) = 4.5;
	}
}
void Sword_Range()
{
	uintptr_t rbexe = (uintptr_t)GetModuleHandleA("metin2client.bin");
	if (m_iSwordRange == 1)
	{
		*(float*)OnlyfansArt::Adres(rbexe + Adres::LocalPlayer, { Adres::LocalPointer, Pointer::dwSwordRange }) = 25;
	}
	else if (m_iSwordRange == 2)
	{
		*(float*)OnlyfansArt::Adres(rbexe + Adres::LocalPlayer, { Adres::LocalPointer, Pointer::dwSwordRange }) = 65;
	}
	else if (m_iSwordRange == 3)
	{
		*(float*)OnlyfansArt::Adres(rbexe + Adres::LocalPlayer, { Adres::LocalPointer, Pointer::dwSwordRange }) = 105;
	}
	else if (m_iSwordRange == 4)
	{
		*(float*)OnlyfansArt::Adres(rbexe + Adres::LocalPlayer, { Adres::LocalPointer,Pointer::dwSwordRange }) = 190;
	}
	else if (m_iSwordRange == 5)
	{
		*(float*)OnlyfansArt::Adres(rbexe + Adres::LocalPlayer, { Adres::LocalPointer, Pointer::dwSwordRange }) = 2500;
	}
	else if (m_iSwordRange == 6)
	{
		*(float*)OnlyfansArt::Adres(rbexe + Adres::LocalPlayer, { Adres::LocalPointer, Pointer::dwSwordRange }) = 4900;
	}
}

void Quick_Age()
{
	uintptr_t rbexe = (uintptr_t)GetModuleHandleA("metin2client.bin");
	if (m_iQuickAge == 0)
	{
		*(float*)OnlyfansArt::Adres(rbexe + Adres::LocalPlayer, { Adres::LocalPointer, Pointer::dwQuickAge }) = 0;
	}
	else if (m_iQuickAge == 1)
	{
		*(float*)OnlyfansArt::Adres(rbexe + Adres::LocalPlayer, { Adres::LocalPointer, Pointer::dwQuickAge }) = 1;
	}
}

void Skill_Hack()
{
	// Skill Speed
	uintptr_t rbexe = (uintptr_t)GetModuleHandleA("metin2client.bin");
	if (m_iSkillSpeed == 1)
	{
		*(float*)OnlyfansArt::Adres(rbexe + Adres::LocalPlayer, { Adres::LocalPointer, Pointer::dwSkillSpeed }) = 1.7;
	}
	else if (m_iSkillSpeed == 2)
	{
		*(float*)OnlyfansArt::Adres(rbexe + Adres::LocalPlayer, { Adres::LocalPointer, Pointer::dwSkillSpeed }) = 1.9;
	}
	else if (m_iSkillSpeed == 3)
	{
		*(float*)OnlyfansArt::Adres(rbexe + Adres::LocalPlayer, { Adres::LocalPointer, Pointer::dwSkillSpeed }) = 2.1;
	}
	else if (m_iSkillSpeed == 4)
	{
		*(float*)OnlyfansArt::Adres(rbexe + Adres::LocalPlayer, { Adres::LocalPointer, Pointer::dwSkillHack }) = 2.9;
	}
	else if (m_iSkillSpeed == 5)
	{
		*(float*)OnlyfansArt::Adres(rbexe + Adres::LocalPlayer, { Adres::LocalPointer, Pointer::dwSkillHack }) = 3.5;
	}
	else if (m_iSkillSpeed == 6)
	{
		*(float*)OnlyfansArt::Adres(rbexe + Adres::LocalPlayer, { Adres::LocalPointer, Pointer::dwSkillHack }) = 4.5;
	}
	// Ninja 
	if (m_iNinja == 1)
	{
		*(long*)OnlyfansArt::Adres(rbexe + Adres::LocalPlayer, { Adres::LocalPointer, Pointer::dwSkillHack }) = 490917352;
	}
	else if (m_iNinja == 2)
	{
		*(long*)OnlyfansArt::Adres(rbexe + Adres::LocalPlayer, { Adres::LocalPointer, Pointer::dwSkillHack }) = 490917752;
	}
	else if (m_iNinja == 3)
	{
		*(long*)OnlyfansArt::Adres(rbexe + Adres::LocalPlayer, { Adres::LocalPointer, Pointer::dwSkillHack }) = 490917952;
	}
	else if (m_iNinja == 4)
	{
		*(long*)OnlyfansArt::Adres(rbexe + Adres::LocalPlayer, { Adres::LocalPointer, Pointer::dwSkillHack }) = 490905952;
	}
	else if (m_iNinja == 5)
	{
		*(long*)OnlyfansArt::Adres(rbexe + Adres::LocalPlayer, { Adres::LocalPointer, Pointer::dwSkillHack }) = 490905752;
	}
}

DWORD WINAPI CharacterManager(HMODULE hModule, LPDIRECT3DDEVICE9 pDevice)
{
	while (true)
	{
		// Character
		Attack_Speed();
		Movement_Speed();
		Sword_Range();
		Quick_Age();
		// Skill Hack 
		Skill_Hack();
	}
}