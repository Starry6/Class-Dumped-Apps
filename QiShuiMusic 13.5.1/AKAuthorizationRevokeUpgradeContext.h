@interface AKAuthorizationRevokeUpgradeContext : NSObject
@property (nonatomic) NSString transactionID;
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSString teamID;
- (id)transactionID;
- (id)teamID;
- (id)initWithCoder:;
- (void)setTransactionID:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)bundleID;
- (id)copyWithZone:;
- (void)setBundleID:;
- (void)setTeamID:;
+ (BOOL)supportsSecureCoding;
@end
