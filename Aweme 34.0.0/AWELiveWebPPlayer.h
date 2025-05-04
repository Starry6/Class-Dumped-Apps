@interface AWELiveWebPPlayer : BDImageView
@property (nonatomic) BOOL optimizeAnimationLeak;
@property (nonatomic) Q customLoop;
@property (nonatomic) BOOL infinityLoop;
@property (nonatomic) BOOL autoPlayAnimatedImage;
@property (nonatomic) @? loopCompletionBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handleClearNotification:;
- (void)stopWebPAnimating;
- (void)startWebPAnimating;
- (void)setImageOld:;
- (BOOL)optimizeAnimationLeak;
- (void)setOptimizeAnimationLeak:;
- (void)shouldStopAnimation:;
- (void)stopWebPAnimation;
- (void)setAlpha:;
- (id)init;
- (void)setImage:;
- (void)setHidden:;
- (void)setupConfig;
@end
