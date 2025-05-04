@interface AWEVideoUniformEffectSideslipPanelGudieView : ACCPassThroughView
@property (nonatomic) UIView firstGuideHintView;
@property (nonatomic) UIView<_TtP9AWELottie13AWELottieView_> hintAnimationView;
@property (nonatomic) NSString lottieFilePath;
@property (nonatomic) BOOL firstGuideShowing;
@property (nonatomic) @? guideDismissComletion;
- (void)setLottieFilePath:;
- (id)lottieFilePath;
- (id)hintAnimationView;
- (void)setHintAnimationView:;
- (void)removeGuideView;
- (void)setGuideDismissComletion:;
- (void)setFirstGuideShowing:;
- (id)firstGuideHintView;
- (BOOL)firstGuideShowing;
- (void)loadLottieFileWithCompletion:;
- (id)guideDismissComletion;
- (void)setFirstGuideHintView:;
- (id)localLottieFolderPath;
- (void)showGuideViewWithDismissComletion:;
- (void).cxx_destruct;
+ (BOOL)shouldShowSideslipPanelFirstGuide;
@end
