@interface PAOutOfProcessPickerAccess : PAAccess
@property (nonatomic) q pickerType;
- (id)JSONObject;
- (id)initWithProtoData:;
- (id)proto;
- (id)initWithAuditToken:forType:;
- (BOOL)isEqualToAccess:withOptions:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)hashWithOptions:;
- (id)initWithAccessor:forType:;
- (id)initWithProto:;
- (id)initWithAccessor:identifier:kind:forType:;
- (id)description;
- (long long)pickerType;
- (id)descriptionForCategory;
- (id)category;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)accessWithAuditToken:forType:;
+ (id)eventStreamIdentifier;
+ (id)accessWithAccessor:forType:;
@end
