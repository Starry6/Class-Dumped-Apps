@interface NEAOVPNException : NSObject
@property (nonatomic) NSString serviceName;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSArray limitToProtocols;
@property (nonatomic) q action;
- (BOOL)checkValidityAndCollectErrors:;
- (id)bundleIdentifier;
- (id)descriptionWithIndent:options:;
- (void)setServiceName:;
- (long long)action;
- (id)serviceName;
- (id)initWithCoder:;
- (void)setAction:;
- (void)setBundleIdentifier:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)isLimitedToUDP;
- (id)limitToProtocols;
- (void)setLimitToProtocols:;
+ (BOOL)supportsSecureCoding;
@end
