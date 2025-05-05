@interface RBSGPUAccessGrant : RBSGrant
@property (nonatomic) C role;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (unsigned long long)hash;
- (unsigned char)role;
- (id)description;
- (BOOL)isEqual:;
- (id)_initWithRole:;
+ (id)grant;
+ (id)grantWithRole:;
@end
