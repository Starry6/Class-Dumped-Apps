@interface AWEMusicAnimationView : UIView
@property (nonatomic) q targetsCount;
@property (nonatomic) NSMutableArray animationLayers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAnimationLayers:;
- (id)animationLayers;
- (void)removeAnimation;
- (void)setTargetsCount:;
- (id)createAnimationLayerWithImage:;
- (id)createAnimationPathWithSize:;
- (id)createAnimationWithPath:beginTime:;
- (id)createAnimationTarget;
- (void)addAnimationWithBegintime:toLayer:;
- (id)intrinsicContentSize;
- (long long)targetsCount;
- (id)initWithFrame:;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (void)stopAnimation;
@end
