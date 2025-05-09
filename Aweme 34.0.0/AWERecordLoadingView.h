@interface AWERecordLoadingView : UIView
@property (nonatomic) UIView bgView;
@property (nonatomic) AWERecordLoadingMaskView bgMaskView;
@property (nonatomic) UIImage gifImage;
@property (nonatomic) @? completion;
@property (nonatomic) UIView<_TtP9AWELottie13AWELottieView_> countDownAnimationView;
@property (nonatomic) AVAudioPlayer player;
@property (nonatomic) NSArray audioSegementName;
@property (nonatomic) q audioIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setGifImage:;
- (id)gifImage;
- (id)bgMaskView;
- (void)setBgMaskView:;
- (id)initWithFrame:delayRecordMode:animationCompletion:;
- (id)initWithFrame:animationCompletion:;
- (void)setAudioSegementName:;
- (void)playerWithFirstAudioIndex:;
- (id)audioSegementName;
- (void)setAudioIndex:;
- (long long)audioIndex;
- (id)countDownAnimationView;
- (void)setCountDownAnimationView:;
- (id)completion;
- (void)setCompletion:;
- (id)initWithFrame:;
- (id)player;
- (void)setPlayer:;
- (void).cxx_destruct;
- (id)bgView;
- (void)setBgView:;
- (void)audioPlayerDidFinishPlaying:successfully:;
@end
