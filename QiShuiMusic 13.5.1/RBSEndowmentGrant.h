@interface RBSEndowmentGrant : RBSGrant
@property (nonatomic) NSString endowmentNamespace;
@property (nonatomic) NSObject<OS_xpc_object> encodedEndowment;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (unsigned long long)hash;
- (id)endowmentNamespace;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)encodedEndowment;
+ (id)grantWithNamespace:endowment:;
@end
