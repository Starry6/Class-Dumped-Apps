@interface UgenV3LottieWidget : UgenWidget
@property (nonatomic) UIView<UgenLottieAnimationProtocol> lottieView;
@property (nonatomic) BOOL havePlayLottie;
@property (nonatomic) NSString src;
- (BOOL)havePlayLottie;
- (id)lottieView;
- (void)override_actionWhenFirstShow;
- (void)p_loadLottieWithSceneModel:;
- (void)p_lottiePlay;
- (void)setHavePlayLottie:;
- (void)setLottieView:;
- (id)ugenView;
- (id)init;
- (void).cxx_destruct;
- (id)src;
- (void)setSrc:;
@end
