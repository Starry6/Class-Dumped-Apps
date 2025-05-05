@interface IESShareLoadingView : UIView
@property (nonatomic) IESLiveWebpLoadingView loadingView;
- (id)init;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)setupView;
- (id)loadingView;
- (void)setLoadingView:;
+ (void)dismissLoadingView;
+ (id)sharedView;
+ (void)showLoadingView;
@end
