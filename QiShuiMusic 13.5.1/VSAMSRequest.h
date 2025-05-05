@interface VSAMSRequest : NSObject
@property (nonatomic) NSString methodName;
@property (nonatomic) Q requestType;
@property (nonatomic) NSString providerIdentifier;
@property (nonatomic) NSDictionary parameters;
@property (nonatomic) VSAuditToken auditToken;
- (unsigned long long)requestType;
- (void)setRequestType:;
- (id)providerIdentifier;
- (id)init;
- (void)setAuditToken:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)auditToken;
- (id)parameters;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setProviderIdentifier:;
- (void)setParameters:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)methodName;
- (void)setMethodName:;
+ (BOOL)supportsSecureCoding;
@end
