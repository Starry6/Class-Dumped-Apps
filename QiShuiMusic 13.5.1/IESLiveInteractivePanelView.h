@interface IESLiveInteractivePanelView : UIView
@property (nonatomic) IESLiveEmptyView emptyView;
@property (nonatomic) IESLiveWebpLoadingView loadingIndicator;
@property (nonatomic) IESLiveNavigationBar navigationBar;
@property (nonatomic) UIView contentView;
@property (nonatomic) IESLiveEmptyViewConfig emptyConfig;
- (void)setEmptyConfig:;
- (id)emptyConfig;
- (void)hideEmptyView;
- (void)setupBaseViews;
- (void)showEmptyViewWithConfig:;
- (void)startLoading:;
- (void)stopLoading;
- (void)setNavigationBar:;
- (id)contentView;
- (id)navigationBar;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)emptyView;
- (void)setEmptyView:;
- (id)loadingIndicator;
- (void)setLoadingIndicator:;
@end
