@interface STExecutableIdentity : NSObject
@property (nonatomic) {?=[8I]} auditToken;
@property (nonatomic) NSString bundlePath;
@property (nonatomic) NSString executablePath;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)executablePath;
- (id)bundlePath;
- (id)initWithExecutablePath:;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)auditToken;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithAuditToken:;
- (id)initWithAuditToken:bundlePath:executablePath:;
- (id)succinctDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:;
- (BOOL)isEqual:;
- (id)descriptionWithMultilinePrefix:;
- (id)initWithBundlePath:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
