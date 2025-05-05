@interface MPPThreadKeyExclusiveAccessToken : NSObject
- (id)_init;
- (void)assertHasExclusiveAccessForOwner:;
+ (id)tokenWithKey:owner:;
@end
