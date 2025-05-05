@interface RBSAppNapPreventTimerThrottleGrant : RBSAppNapGrant
@property (nonatomic) C tier;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (unsigned char)tier;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:;
+ (id)grant;
+ (id)grantWithTier:;
@end
