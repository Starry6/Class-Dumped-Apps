@interface RBSHereditaryGrant : RBSGrant
@property (nonatomic) NSString endowmentNamespace;
@property (nonatomic) NSString sourceEnvironment;
@property (nonatomic) NSObject<OS_xpc_object> encodedEndowment;
@property (nonatomic) NSArray attributes;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (id)sourceEnvironment;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)attributes;
- (id)endowmentNamespace;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)encodedEndowment;
+ (id)grantWithNamespace:sourceEnvironment:endowment:attributes:;
+ (id)grantWithNamespace:endowment:attributes:;
+ (id)grantWithNamespace:sourceEnvironment:attributes:;
@end
