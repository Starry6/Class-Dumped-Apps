@interface OTOperationConfiguration : NSObject
@property (nonatomic) Q timeoutWaitForCKAccount;
@property (nonatomic) q qualityOfService;
@property (nonatomic) BOOL discretionaryNetwork;
@property (nonatomic) BOOL useCachedAccountStatus;
- (void)setQualityOfService:;
- (id)init;
- (BOOL)useCachedAccountStatus;
- (long long)qualityOfService;
- (BOOL)discretionaryNetwork;
- (id)initWithCoder:;
- (void)setDiscretionaryNetwork:;
- (unsigned long long)timeoutWaitForCKAccount;
- (void)encodeWithCoder:;
- (void)setTimeoutWaitForCKAccount:;
- (void)setUseCachedAccountStatus:;
+ (BOOL)supportsSecureCoding;
@end
