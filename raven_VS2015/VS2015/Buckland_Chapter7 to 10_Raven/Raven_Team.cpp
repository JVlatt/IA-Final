#include "Raven_Team.h"
#include "Raven_Bot.h"

Raven_Team::Raven_Team() : m_pLeader(nullptr),
						   m_pTarget(nullptr),
						   m_teamColor(TeamColor::yellow)
{
}

Raven_Team::Raven_Team(TeamColor color) : m_pLeader(nullptr),
									      m_pTarget(nullptr),
										  m_teamColor(color)
{
}

Raven_Team::~Raven_Team()
{
}

void Raven_Team::SetTarget(Raven_Bot* newTarget)
{
		if(m_pTarget)
		m_pTarget->SetIsFocused(false);
		m_pTarget = newTarget;
		newTarget->SetIsFocused(true);
}

void Raven_Team::AddMember(Raven_Bot* newMember)
{
	m_Members.push_back(newMember);
}

void Raven_Team::RemoveMember(Raven_Bot* oldMember)
{
	m_Members.remove(oldMember);
}
