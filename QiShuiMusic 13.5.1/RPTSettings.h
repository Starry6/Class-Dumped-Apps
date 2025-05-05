@interface RPTSettings : NSObject
@property (nonatomic) NSURL recapOverrideFileURL;
@property (nonatomic) q activationIterationCount;
- (id)init;
- (long long)activationIterationCount;
- (void)setRecapOverrideFileURL:;
- (void)setActivationIterationCount:;
- (void).cxx_destruct;
- (id)initFromDictionary:;
- (id)recapOverrideFileURL;
+ (id)processEnvironment;
@end
