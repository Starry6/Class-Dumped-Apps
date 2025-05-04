@interface AWEFirstFrameAnimationDelayManager : NSObject
@property (nonatomic) BOOL isDuringDelayPhase;
@property (nonatomic) NSMutableDictionary helpers;
@property (nonatomic) NSMutableDictionary animationMap;
- (void)setIsDuringDelayPhase:;
- (BOOL)isDuringDelayPhase;
- (id)animationMap;
- (void)setHelpers:;
- (void)setAnimationMap:;
- (void).cxx_destruct;
- (id)helpers;
+ (void)addAnimationWithName:videoIdentifier:animation:;
+ (void)removeAnimationWithName:videoIdentifier:;
+ (void)triggerAnimationAfterFirstFrameWithIdentifier:;
+ (id)shared;
@end
