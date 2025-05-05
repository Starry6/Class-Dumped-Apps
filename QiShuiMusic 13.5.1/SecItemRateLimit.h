@interface SecItemRateLimit : NSObject
@property (nonatomic) NSInteger roCapacity;
@property (nonatomic) double roRate;
@property (nonatomic) NSInteger rwCapacity;
@property (nonatomic) double rwRate;
@property (nonatomic) double limitMultiplier;
@property (nonatomic) NSDate roBucket;
@property (nonatomic) NSDate rwBucket;
- (id)init;
- (id)rwBucket;
- (BOOL)consumeTokenFromBucket:;
- (int)roCapacity;
- (double)limitMultiplier;
- (BOOL)shouldCountAPICalls;
- (id)roBucket;
- (void)forceEnabled:;
- (int)rwCapacity;
- (double)rwRate;
- (BOOL)isReadOnlyAPICallWithinLimits;
- (void).cxx_destruct;
- (double)roRate;
- (BOOL)isModifyingAPICallWithinLimits;
- (BOOL)isEnabled;
+ (id)instance;
+ (id)getStaticRateLimit;
+ (void)resetStaticRateLimit;
@end
