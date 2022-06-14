#include "Raven_Team.h"

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

void Raven_Team::AddMember(Raven_Bot* newMember)
{
	m_Members.push_back(newMember);
}

void Raven_Team::RemoveMember(Raven_Bot* oldMember)
{
	m_Members.remove(oldMember);
}
