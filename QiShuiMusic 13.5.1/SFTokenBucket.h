@interface SFTokenBucket : NSObject
- (id)init;
- (id)initWithBucketSize:tokensPerSec:;
- (id)initWithBucketSize:tokenDurationTicks:;
- (BOOL)acquireToken;
- (id)initWithBucketSize:tokenDurationSec:;
@end
