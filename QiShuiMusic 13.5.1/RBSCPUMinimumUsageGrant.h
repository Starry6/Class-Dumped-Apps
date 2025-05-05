@interface RBSCPUMinimumUsageGrant : RBSGrant
@property (nonatomic) C role;
@property (nonatomic) Q percentage;
@property (nonatomic) double duration;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (unsigned long long)hash;
- (unsigned char)role;
- (id)description;
- (double)duration;
- (BOOL)isEqual:;
- (unsigned long long)percentage;
+ (id)grantForRole:withPercentage:duration:;
@end
