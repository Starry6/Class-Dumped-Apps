@interface SFSSLServerTrustPolicy : SFTrustPolicy
@property (nonatomic) NSString serverName;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)serverName;
- (void)setServerName:;
- (id)initWithServerName:;
+ (BOOL)supportsSecureCoding;
@end
