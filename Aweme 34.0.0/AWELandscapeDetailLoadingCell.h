@interface AWELandscapeDetailLoadingCell : UICollectionViewCell
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) DUXVacantView errorView;
- (void)dismissLoadingView;
- (void)showErrorPage;
- (void)dismissErrorPage;
- (void)setLoadingView:;
- (id)loadingView;
- (void).cxx_destruct;
- (void)showLoadingView;
- (id)errorView;
- (void)setErrorView:;
@end
