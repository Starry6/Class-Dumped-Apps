@interface IESLiveSaaSAudioAnimationView : UIView
@property (nonatomic) NSTimer rippleTimer;
@property (nonatomic) BOOL shouldStop;
@property (nonatomic) UIImageView<IESLiveWebPPlayer> audioWebpAnimator;
@property (nonatomic) BOOL isWebpAnimationStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setRippleTimer:;
- (void)addRippleLayer;
- (id)audioWebpAnimator;
- (void)closeRippleTimer;
- (BOOL)isWebpAnimationStyle;
- (void)loadWebPAnimator;
- (id)pluginLayoutContentSize;
- (id)rippleTimer;
- (void)setAudioWebpAnimator:;
- (void)setIsWebpAnimationStyle:;
- (void)startRipple;
- (id)viewType;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (BOOL)shouldStop;
- (void)setShouldStop:;
@end
