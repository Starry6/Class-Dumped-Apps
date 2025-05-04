@interface AWEFeedDisasterRecoveryManager : NSObject
@property (nonatomic) Q continuousRequestFailedCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)disasterRecoveryCacheExpireTime;
- (BOOL)enableDisasterRecovery;
- (BOOL)enableForegroundDisasterRecoveryRequest;
- (void)requestDisasterRecoveryCache;
- (void)fetchDisasterRecoveryCacheWithError:requestID:completionBlock:;
- (void)setContinuousRequestFailedCount:;
- (unsigned long long)continuousRequestFailedCount;
- (BOOL)enableContinuousFaultScene;
- (id)disasterRecoveryConfig;
- (void)clearDisasterRecoveryCache;
- (long long)disasterRecoveryCacheCount;
+ (id)sharedInstance;
@end
