
void	next(char pos_x, char pos_y, char **grille)
{
	if (pos_x == 8)
		return (solve(0, pos_y++, grille));
	else
		return (solve(pos_x++, pos_y, grille));
}

int		solve(char pos_x, char pos_y, char **grille)
{
	int valeur;

	valeur = 1;
	if (pos_y == 10)
		return (1);
	if (grille[pos_y][pos_x] != '.')
		return (next(pos_x, pos_y, grille));
	while (valeur <= 9)
	{
		if (test_b(pos_x, pos_y, valeur, grille) == 1 &&
			test_l(grille, pos_y) == 1 && test_c(grille, pos_x) == 1)
		{
			grille[pos_y][pos_x] = "0" + valeur;
			return (next(pos_x, pos_y, grille));
		}
		if (next(pos_x, pos_y, grille) == 1)
			return (1);
		else
		{
			grille[pos_y][pos_x] = '.';
			return (0);
		}
	}
}

int		main(int argc, char **argv)
{
	int a;

	a = argc;
	if (test_b(0, 1, 5, argv) == 1)
		printf("%s\n", "ok");
	else
		printf("%s\n", "no");
	return (0);
}
