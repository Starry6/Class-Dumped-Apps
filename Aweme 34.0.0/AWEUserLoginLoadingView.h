@interface AWEUserLoginLoadingView : UIView
@property (nonatomic) DUXLoadingToast loadingToast;
- (id)loadingToast;
- (void)setLoadingToast:;
- (void)endLoading;
- (void)startLoadingInScene:;
- (id)init;
- (void).cxx_destruct;
- (void)setupUI;
@end
