#ifndef RAVEN_TEAM_H
#define RAVEN_TEAM_H

#include <vector>
#include <string>
#include <list>

class Raven_Bot;

class Raven_Team
{
public:

	enum TeamColor { yellow, green };

	Raven_Team(TeamColor color);
	Raven_Team();
	~Raven_Team();

	std::list<Raven_Bot*> m_Members;
	Raven_Bot* m_pLeader;
	Raven_Bot* m_pTarget;
	TeamColor m_teamColor;

	enum Strategy { defend, chase};

	void SetTarget(Raven_Bot* newTarget);
	void SetLeader(Raven_Bot* newLeader) { m_pLeader = newLeader; }

	void AddMember(Raven_Bot* newMember);
	void RemoveMember(Raven_Bot* oldMember);

	void Clear() {
		m_Members.clear();
		m_pLeader = nullptr;
		m_pTarget = nullptr;
	}

};

#endif