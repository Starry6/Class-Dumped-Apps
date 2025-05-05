@interface MAAutoAssetInfoDesire : NSObject
@property (nonatomic) NSString updateCategoryDesiredByClient;
@property (nonatomic) MAAutoAssetPolicy clientAssetPolicy;
@property (nonatomic) q checkWaitTimeoutSecs;
@property (nonatomic) NSString desireReason;
@property (nonatomic) q lockWaitTimeoutSecs;
@property (nonatomic) BOOL downloadProgressDesired;
- (id)updateCategoryDesiredByClient;
- (long long)checkWaitTimeoutSecs;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)summary;
- (long long)lockWaitTimeoutSecs;
- (id)desireReason;
- (void).cxx_destruct;
- (id)clientAssetPolicy;
- (id)description;
- (BOOL)downloadProgressDesired;
- (id)initWithDesiredCategory:forClientAssetPolicy:reasonDesired:withCheckWaitTimeout:withLockWaitTimeout:desiringProgress:;
+ (BOOL)supportsSecureCoding;
@end
