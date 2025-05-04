@interface AWEUserRecommendCollectionFooterView : UICollectionReusableView
@property (nonatomic) UILabel promptLabel;
@property (nonatomic) DUXLoadingParticleView loadingView;
@property (nonatomic) AWEBinding dataStateBinding;
@property (nonatomic) <AWEUserRecommendTableViewModelProtocol> viewModel;
- (void)p_setupUI;
- (id)dataStateBinding;
- (void)setDataStateBinding:;
- (id)promptLabel;
- (void)setPromptLabel:;
- (void)setLoadingView:;
- (void)config;
- (id)viewModel;
- (id)initWithFrame:;
- (id)loadingView;
- (void)setViewModel:;
- (void).cxx_destruct;
@end
