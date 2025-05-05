@interface MPDispatchQueueExclusiveAccessToken : NSObject
- (void).cxx_destruct;
- (id)_init;
- (void)assertHasExclusiveAccessForOwner:;
+ (id)tokenWithQueue:owner:;
@end
