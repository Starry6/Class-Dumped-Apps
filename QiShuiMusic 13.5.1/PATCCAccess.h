@interface PATCCAccess : PAAccess
@property (nonatomic) NSString tccService;
- (id)initWithProtoData:;
- (id)proto;
- (id)initWithAccessor:forService:assetIdentifiers:;
- (BOOL)isEqualToAccess:withOptions:;
- (id)initWithCoder:;
- (id)initWithAccessor:identifier:kind:forService:;
- (id)tccService;
- (void)encodeWithCoder:;
- (unsigned long long)hashWithOptions:;
- (id)initWithAuthorization:;
- (id)initWithProto:;
- (id)initWithInsecureProcessIdentifier:forService:;
- (void).cxx_destruct;
- (id)description;
- (id)descriptionForCategory;
- (id)initWithAccessor:forService:;
- (id)initWithAuditToken:forService:;
- (id)category;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)accessWithAccessor:forService:;
+ (id)accessWithAuditToken:forService:;
+ (id)accessWithAuthorization:;
+ (id)eventStreamIdentifier;
+ (id)accessWithInsecureProcessIdentifier:forService:;
@end
