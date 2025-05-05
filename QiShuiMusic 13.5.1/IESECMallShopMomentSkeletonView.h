@interface IESECMallShopMomentSkeletonView : UIView
@property (nonatomic) UIView<IESECUILoadingViewProtocol> loadingView;
- (void)dismissLoading;
- (void)setupUIWithContext:;
- (void)start;
- (void)stop;
- (id)initWithContext:;
- (void).cxx_destruct;
- (id)loadingView;
- (void)setLoadingView:;
- (void)showLoading;
@end
