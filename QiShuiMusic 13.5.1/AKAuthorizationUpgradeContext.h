@interface AKAuthorizationUpgradeContext : NSObject
@property (nonatomic) NSString appName;
@property (nonatomic) NSString appID;
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSString serviceID;
@property (nonatomic) NSString teamID;
@property (nonatomic) NSString nonce;
@property (nonatomic) NSString state;
- (id)teamID;
- (id)serviceID;
- (void)setServiceID:;
- (void)setState:;
- (id)nonce;
- (id)initWithCoder:;
- (void)setAppName:;
- (id)appName;
- (void)encodeWithCoder:;
- (void)setAppID:;
- (id)state;
- (id)appID;
- (void).cxx_destruct;
- (id)bundleID;
- (id)copyWithZone:;
- (void)setBundleID:;
- (void)setNonce:;
- (void)setTeamID:;
+ (BOOL)supportsSecureCoding;
@end
