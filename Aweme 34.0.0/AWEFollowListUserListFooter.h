@interface AWEFollowListUserListFooter : UICollectionReusableView
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) UIView errorView;
@property (nonatomic) UIView emptyView;
@property (nonatomic) Q status;
@property (nonatomic) @? errorRetryButtonClickedBlock;
- (void)updateUIWithStatus:;
- (id)errorRetryButtonClickedBlock;
- (void)setErrorRetryButtonClickedBlock:;
- (void)setStatus:;
- (void)setLoadingView:;
- (id)initWithFrame:;
- (id)loadingView;
- (void).cxx_destruct;
- (unsigned long long)status;
- (void)setupUI;
- (id)emptyView;
- (void)setEmptyView:;
- (id)errorView;
- (void)setErrorView:;
@end
