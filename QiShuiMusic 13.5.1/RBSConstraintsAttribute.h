@interface RBSConstraintsAttribute : RBSAttribute
@property (nonatomic) Q constraints;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (unsigned long long)constraints;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:;
+ (id)attributeWithConstraints:;
@end
