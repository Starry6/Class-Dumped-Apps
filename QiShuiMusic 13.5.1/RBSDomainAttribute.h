@interface RBSDomainAttribute : RBSAttribute
@property (nonatomic) NSString domain;
@property (nonatomic) NSString name;
@property (nonatomic) NSString sourceEnvironment;
@property (nonatomic) NSString fullyQualifiedName;
- (void)setName:;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (id)fullyQualifiedName;
- (id)sourceEnvironment;
- (unsigned long long)hash;
- (void)setSourceEnvironment:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)domain;
- (void)setDomain:;
- (BOOL)isEqual:;
+ (id)attributeWithDomain:name:sourceEnvironment:;
+ (id)attributeWithDomain:name:;
@end
