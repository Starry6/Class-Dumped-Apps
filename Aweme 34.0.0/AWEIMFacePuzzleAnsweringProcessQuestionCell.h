@interface AWEIMFacePuzzleAnsweringProcessQuestionCell : UICollectionViewCell
@property (nonatomic) UIImageView imageView;
@property (nonatomic) AWEIMFacePuzzleAnsweringProcessSingleQuestionAreaViewState uiState;
@property (nonatomic) NSMutableArray binds;
- (id)binds;
- (void)setBinds:;
- (void)bindWithUIState:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (void)setupViews;
- (id)uiState;
- (void)setUiState:;
@end
