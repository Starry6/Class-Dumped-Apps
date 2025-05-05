@interface RBSBaseMemoryGrant : RBSGrant
@property (nonatomic) NSString category;
@property (nonatomic) C strength;
- (unsigned char)strength;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)category;
+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)grantWithCategory:strength:;
+ (id)grantWithActiveLimit;
@end
