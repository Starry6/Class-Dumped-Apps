@interface RBSAcquisitionCompletionAttribute : RBSAttribute
@property (nonatomic) Q policy;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (unsigned long long)policy;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:;
+ (id)attributeWithCompletionPolicy:;
@end
