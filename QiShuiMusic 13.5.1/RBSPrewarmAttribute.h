@interface RBSPrewarmAttribute : RBSAttribute
@property (nonatomic) RBSProcessIdentity identity;
@property (nonatomic) double interval;
- (id)identity;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (double)interval;
- (id)_initWithidentity:interval:;
+ (id)attributeWithIdentity:interval:;
@end
