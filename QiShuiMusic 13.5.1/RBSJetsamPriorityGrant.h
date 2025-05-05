@interface RBSJetsamPriorityGrant : RBSGrant
@property (nonatomic) Q band;
- (unsigned long long)band;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:;
+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)grantWithForegroundPriority;
+ (id)grantWithBackgroundPriority;
+ (id)grantWithBand:;
@end
