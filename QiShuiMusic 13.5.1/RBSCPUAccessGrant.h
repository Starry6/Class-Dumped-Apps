@interface RBSCPUAccessGrant : RBSGrant
@property (nonatomic) C role;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (unsigned long long)hash;
- (unsigned char)role;
- (id)description;
- (BOOL)isEqual:;
+ (id)grantUserInitiated;
+ (id)grant;
+ (id)grantWithRole:;
+ (id)grantWithUserInteractivityAndFocus;
+ (id)grantWithUserInteractivity;
@end
