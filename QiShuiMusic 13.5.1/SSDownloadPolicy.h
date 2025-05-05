@interface SSDownloadPolicy : NSObject
@property (nonatomic) NSString downloadKind;
@property (nonatomic) q URLBagType;
@property (nonatomic) NSArray policyRules;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (void)dealloc;
- (id)copyXPCEncoding;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setPolicyRules:;
- (id)policyRules;
- (id)initWithDownloadKind:URLBagType:;
- (long long)URLBagType;
- (id)downloadKind;
- (void)unionPolicyRule:;
- (id)initWithNetworkConstraints:;
- (void)setPolicyRule:;
- (void)unionNetworkConstraints:;
- (id)_policyRuleForSizeLimit:;
+ (BOOL)supportsSecureCoding;
@end
