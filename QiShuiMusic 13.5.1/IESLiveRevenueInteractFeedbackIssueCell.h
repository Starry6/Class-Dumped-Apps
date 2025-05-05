@interface IESLiveRevenueInteractFeedbackIssueCell : UICollectionViewCell
@property (nonatomic) UILabel issueLabel;
@property (nonatomic) RACCompoundDisposable disposable;
@property (nonatomic) RACDisposable multiSelectedDisposable;
@property (nonatomic) IESLiveRevenueInteractFeedbackViewModel viewModel;
@property (nonatomic) IESLiveRevenueInteractFeedbackStyleConfig styleConfig;
@property (nonatomic) IssueCategory category;
- (void)setStyleConfig:;
- (id)disposable;
- (id)issueLabel;
- (id)multiSelectedDisposable;
- (void)p_dispose;
- (void)setDisposable:;
- (void)setIssueLabel:;
- (void)setMultiSelectedDisposable:;
- (id)styleConfig;
- (void)updateUIWithIssue:viewModel:type:styleConfig:;
- (void)updateUIWithSelected:;
- (void)dealloc;
- (id)viewModel;
- (id)preferredLayoutAttributesFittingAttributes:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void)setCategory:;
- (void).cxx_destruct;
- (void)setViewModel:;
- (id)category;
- (void)layoutUI;
@end
