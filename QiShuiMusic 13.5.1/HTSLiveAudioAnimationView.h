@interface HTSLiveAudioAnimationView : UIView
@property (nonatomic) NSTimer rippleTimer;
@property (nonatomic) BOOL shouldStop;
@property (nonatomic) UIImageView<IESLiveWebPPlayer> audioWebpAnimator;
@property (nonatomic) BOOL isWebpAnimationStyle;
- (void)setRippleTimer:;
- (void)addRippleLayer;
- (id)audioWebpAnimator;
- (void)closeRippleTimer;
- (id)defaultWebpImage;
- (BOOL)isWebpAnimationStyle;
- (void)loadWebPAnimator;
- (id)rippleTimer;
- (void)setAudioWebpAnimator:;
- (void)setImageUrls:;
- (void)setIsWebpAnimationStyle:;
- (void)startRipple;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (BOOL)shouldStop;
- (void)setShouldStop:;
@end
