@interface IESLiveVSPauseAnimButton : UIView
@property (nonatomic) IESLiveVSPauseParallel parallelIcon;
@property (nonatomic) IESLiveVSPauseTriangle triangleIcon;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL isParallelAnimate;
@property (nonatomic) BOOL isTriangleAnimate;
@property (nonatomic) NSMutableArray allAnimationArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)parallelAnimate;
- (void)triangleAnimate;
- (id)allAnimationArray;
- (void)isNeedTryAnimation;
- (BOOL)isParallelAnimate;
- (BOOL)isTriangleAnimate;
- (id)parallelIcon;
- (void)pauseWithAnim;
- (void)playWithAnim;
- (id)pluginLayoutContentSize;
- (void)setAllAnimationArray:;
- (void)setIsParallelAnimate:;
- (void)setIsTriangleAnimate:;
- (void)setParallelIcon:;
- (void)setTriangleIcon:;
- (id)triangleIcon;
- (void)tryAnimation;
- (void)updateIsPlaying:IsLandscape:;
- (void)updateIsPlaying:IsLandscape:isForce:;
- (void)updatePauseImage:reStartPlayImage:;
- (id)viewType;
- (BOOL)isPlaying;
- (BOOL)isAnimating;
- (void)setIsPlaying:;
- (BOOL)isLandscape;
- (void)setIsLandscape:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setIsAnimating:;
@end
