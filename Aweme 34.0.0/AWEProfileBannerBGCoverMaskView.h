@interface AWEProfileBannerBGCoverMaskView : UIView
@property (nonatomic) UIColor lightColor;
@property (nonatomic) UIColor darkColor;
@property (nonatomic) AWEGradientView gradientView;
@property (nonatomic) q direction;
@property (nonatomic) <AWEProfileBannerBGCoverMaskViewDelegate> delegate;
@property (nonatomic) double startGradientRatioX;
- (void)p_setupUI;
- (void)updateLightColor:darkColor:;
- (void)p_refreshColor;
- (id)p_getColor;
- (double)startGradientRatioX;
- (void)refreshGradientDirection:;
- (void)setStartGradientRatioX:;
- (id)gradientView;
- (id)delegate;
- (long long)direction;
- (id)initWithFrame:;
- (id)lightColor;
- (void)setDirection:;
- (void).cxx_destruct;
- (void)setGradientView:;
- (void)setDelegate:;
- (id)darkColor;
- (void)setDarkColor:;
- (void)setLightColor:;
+ (id)maskViewWithLightColor:darkColor:;
+ (id)defaultMaskView;
@end
