@interface RBSSavedEndowmentGrant : RBSGrant
@property (nonatomic) NSString endowmentNamespace;
@property (nonatomic) NSString key;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (id)key;
- (unsigned long long)hash;
- (id)endowmentNamespace;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
+ (id)grantWithNamespace:key:;
@end
