@interface AWEAIVideoClipLoadingView : UIView
@property (nonatomic) NSString lottiePath;
@property (nonatomic) LOTAnimationView loadingAnimationView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) double loadingStartTime;
- (id)lottiePath;
- (void)setLottiePath:;
- (void)setLoadingStartTime:;
- (double)loadingStartTime;
- (id)initWithLottiePath:;
- (void)p_showAIVideoClipGlobalLoadingViewOnView:;
- (void)_trackLoadingTimeWithScene:;
- (id)loadingAnimationView;
- (void)setLoadingAnimationView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
+ (void)showOnView:;
+ (void)showOnView:afterDelay:;
+ (void)show;
+ (void)dismiss;
+ (void)dismissAfter:;
@end
