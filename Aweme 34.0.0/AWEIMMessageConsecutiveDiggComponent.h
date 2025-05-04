@interface AWEIMMessageConsecutiveDiggComponent : AWEIMComponentBase
@property (nonatomic) NSMutableDictionary pathCache;
@property (nonatomic) NSDictionary indexTransition;
@property (nonatomic) q maxInterval;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (BOOL)canStartPlayAnimationOnHeartView:;
- (id)diggAnimationPathOfIndex:;
- (long long)nextAnimationIndex:digged:interval:;
- (void)setPathCache:;
- (void)setIndexTransition:;
- (id)p_diggFirstAnimationPath;
- (id)p_diggConsecutiveAnimationPathOfIndex:;
- (id)indexTransition;
- (id)pathCache;
- (void).cxx_destruct;
- (void)setMaxInterval:;
- (long long)maxInterval;
+ (id)lazyComponentWakeupInterface;
@end
