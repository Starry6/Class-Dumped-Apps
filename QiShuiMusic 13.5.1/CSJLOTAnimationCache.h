@interface CSJLOTAnimationCache : NSObject
- (void)clearCache;
- (id)init;
- (void)disableCaching;
- (void)addAnimation:forKey:;
- (void).cxx_destruct;
- (void)removeAnimationForKey:;
- (id)animationForKey:;
+ (id)sharedCache;
@end
