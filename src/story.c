# include "cub3d.h"

int	init_story(t_game *game)
{
	game->story.mn_cut = 0;
	game->story.count = 1;
	game->story.squad[0] = ft_irandom(0, game->settings.pokemon_count);
	return (TRUE);
}