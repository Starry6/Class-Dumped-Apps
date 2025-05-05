@interface USDeviceActivityEvent : NSObject
@property (nonatomic) NSSet applicationTokens;
@property (nonatomic) NSSet categoryTokens;
@property (nonatomic) NSSet webDomainTokens;
@property (nonatomic) NSSet bundleIdentifiers;
@property (nonatomic) NSSet categoryIdentifiers;
@property (nonatomic) NSSet webDomains;
@property (nonatomic) NSDateComponents threshold;
@property (nonatomic) BOOL includesAllActivity;
@property (nonatomic) BOOL isUntokenized;
- (id)threshold;
- (id)webDomains;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)categoryIdentifiers;
- (BOOL)isEqual:;
- (id)bundleIdentifiers;
- (id)initWithApplicationTokens:categoryTokens:webDomainTokens:threshold:;
- (id)initWithBundleIdentifiers:categoryIdentifiers:webDomains:threshold:;
- (id)applicationTokens;
- (id)categoryTokens;
- (id)webDomainTokens;
- (BOOL)includesAllActivity;
- (BOOL)isUntokenized;
+ (BOOL)supportsSecureCoding;
@end
