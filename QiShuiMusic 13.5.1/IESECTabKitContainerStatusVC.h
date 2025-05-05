@interface IESECTabKitContainerStatusVC : UIViewController
@property (nonatomic) IESECTabKitErrorView errorView;
@property (nonatomic) @? errorViewRefreshBlock;
- (void)showErrorStatus;
- (void)dismissStatus;
- (id)errorViewRefreshBlock;
- (void)setErrorViewRefreshBlock:;
- (void)showLoadingStatus;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)errorView;
- (void)setErrorView:;
@end
