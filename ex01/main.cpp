#include "Zombie.hpp"

int		main(void)
{
	Zombie vim("vim");
	vim.announce();

	Zombie *vim2 = Zombie::newZombie("vim2");
	vim2->announce();
	delete vim2;

	Zombie::randomChump("vim3");
}
