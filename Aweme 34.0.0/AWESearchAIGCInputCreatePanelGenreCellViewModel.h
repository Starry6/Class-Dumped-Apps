@interface AWESearchAIGCInputCreatePanelGenreCellViewModel : AWESearchAIGCInputCreatePanelBaseCellViewModel
@property (nonatomic) AWESearchAIGCInputAgentActionCreateGenre selectedGenre;
@property (nonatomic) NSArray genreList;
- (id)genreList;
- (void)resetSelectedGenre:;
- (id)initWithGenreList:;
- (id)selectedGenre;
- (void).cxx_destruct;
@end
