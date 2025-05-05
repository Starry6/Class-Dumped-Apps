@interface TTVideoEngineCollectorInner : NSObject
@property (nonatomic) q mPlayConsumedSize;
- (long long)getPlayConsumedSize;
- (long long)mPlayConsumedSize;
- (void)setMPlayConsumedSize:;
- (void)updatePlayConsumedSize:;
- (id)init;
+ (id)sharedInstance;
@end
