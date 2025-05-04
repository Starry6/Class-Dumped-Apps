@interface AWEFollowContainerPullRefreshView : UIView
@property (nonatomic) UILabel refreshLabel;
@property (nonatomic) DUXLoadingParticleView loadingView;
@property (nonatomic) BOOL isRefreshing;
@property (nonatomic) Q viewState;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dragWithProgress:;
- (void)setRefreshLabel:;
- (id)refreshLabel;
- (void)beginRefreshingAfterDragEnd;
- (void)dragToEndWithProgress:refreshBlock:;
- (void)dragCancelWithCompletion:;
- (void)stopRefreshingCompletion:;
- (BOOL)isRefreshing;
- (void)setLoadingView:;
- (id)initWithFrame:;
- (void)beginRefreshing;
- (id)loadingView;
- (void).cxx_destruct;
- (void)setViewState:;
- (unsigned long long)viewState;
- (void)setupUI;
- (void)setIsRefreshing:;
+ (id)animationWithController:;
@end
