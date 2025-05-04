@interface AWEMRSubscribeManageBaseViewHolder : AWEBaseListViewHolder
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) DUXVacantView errorVacantView;
@property (nonatomic) BOOL showLoading;
@property (nonatomic) BOOL showErrorVacantView;
- (void)setupViewHolder;
- (void)dismissLoadingView;
- (void)setShowLoading:;
- (void)setShowErrorVacantView:;
- (id)errorVacantView;
- (BOOL)showErrorVacantView;
- (void)setErrorVacantView:;
- (void)setLoadingView:;
- (id)loadingView;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)showLoadingView;
- (BOOL)showLoading;
@end
