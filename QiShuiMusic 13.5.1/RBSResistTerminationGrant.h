@interface RBSResistTerminationGrant : RBSGrant
@property (nonatomic) C resistance;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:;
- (unsigned char)resistance;
+ (id)grantWithResistance:;
@end
