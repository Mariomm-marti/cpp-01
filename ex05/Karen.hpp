#ifndef CPP01_EX05_KAREN_H_
# define CPP01_EX05_KAREN_H_

# include <string>

class Karen
{
private:
	void			debug(void) const;
	void			info(void) const;
	void			warning(void) const;
	void			error(void) const;

public:
	Karen(void);
	~Karen(void);

	typedef void	(Karen::*karenLog_t)(void) const;

	void			complain(std::string const level) const;
};

#endif
