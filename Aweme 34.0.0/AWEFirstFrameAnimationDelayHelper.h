@interface AWEFirstFrameAnimationDelayHelper : NSObject
@property (nonatomic) BOOL isDuringDelayPhase;
@property (nonatomic) NSMutableArray animationNames;
@property (nonatomic) NSMutableDictionary animations;
- (void)setIsDuringDelayPhase:;
- (id)animationNames;
- (BOOL)isDuringDelayPhase;
- (void)triggerAnimationAfterFirstFrame;
- (void)addAnimation:withName:;
- (void)removeAnimationsWithName:;
- (void)setAnimationNames:;
- (id)animations;
- (void).cxx_destruct;
- (void)setAnimations:;
+ (double)animationDelayTimeAfterFirstFrame;
+ (BOOL)enableAnimationDelayAfterFirstFrame;
@end
