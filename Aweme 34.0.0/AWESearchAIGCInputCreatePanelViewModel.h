@interface AWESearchAIGCInputCreatePanelViewModel : NSObject
@property (nonatomic) AWESearchAIGCInputCreatePanelGenreCellViewModel genreCellViewModel;
@property (nonatomic) AWESearchAIGCInputCreatePanelRequirementCellViewModel requirementCellViewModel;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) AWESearchAIGCInputAgentModel agentModel;
@property (nonatomic) NSArray cellViewModels;
- (id)cellViewModels;
- (id)initWithAgentModel:;
- (id)selectedGenreModel;
- (id)agentModel;
- (id)createSearchQueryWithOriginQuery:;
- (void)updateSelectedGenreModel:;
- (id)genreCellViewModel;
- (id)requirementCellViewModel;
- (void)setGenreCellViewModel:;
- (void)setRequirementCellViewModel:;
- (BOOL)isShowing;
- (void).cxx_destruct;
- (void)setIsShowing:;
@end
