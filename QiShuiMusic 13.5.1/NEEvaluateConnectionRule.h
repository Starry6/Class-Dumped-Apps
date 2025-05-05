@interface NEEvaluateConnectionRule : NSObject
@property (nonatomic) q action;
@property (nonatomic) NSArray matchDomains;
@property (nonatomic) NSArray useDNSServers;
@property (nonatomic) NSURL probeURL;
- (BOOL)checkValidityAndCollectErrors:;
- (id)matchDomains;
- (id)probeURL;
- (id)initFromLegacyDictionary:;
- (id)descriptionWithIndent:options:;
- (id)copyLegacyDictionary;
- (long long)action;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setProbeURL:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithMatchDomains:andAction:;
- (id)useDNSServers;
- (void)setUseDNSServers:;
+ (BOOL)supportsSecureCoding;
@end
