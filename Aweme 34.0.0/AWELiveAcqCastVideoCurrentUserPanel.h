@interface AWELiveAcqCastVideoCurrentUserPanel : AWELiveAcqCastVideoUserPanel
@property (nonatomic) AWELiveAcqCastVideoFloatingBackgroundView floatingBackgroundView;
@property (nonatomic) AWELiveAcqCastVideoSearchPanel searchPanel;
@property (nonatomic) UIView searchIndicatorView;
@property (nonatomic) UIView searchView;
- (id)floatingBackgroundView;
- (void)setFloatingBackgroundView:;
- (id)searchPanel;
- (void)setSearchPanel:;
- (void)updatePanelHeight;
- (id)searchIndicatorView;
- (void)setSearchIndicatorView:;
- (void)showSearchPanel;
- (void).cxx_destruct;
- (void)setupUI;
- (id)initWithFrame:viewModel:;
- (id)searchView;
- (void)setSearchView:;
@end
