@interface AWEMRSubscribeManageBaseViewController : AWEBaseListViewController
- (void)duxGrid_viewDidChangeBreakPointFrom:toBreakPoint:;
- (void)backBtnClick;
- (void)customLayoutCollectionView:;
- (id)layoutForCollectionView;
- (void)bindViewModel;
- (void)bindEvent;
- (void)themeDidChanged;
- (BOOL)prefersStatusBarHidden;
- (id)init;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (void)setupUI;
- (void)setupCollectionView:;
@end
