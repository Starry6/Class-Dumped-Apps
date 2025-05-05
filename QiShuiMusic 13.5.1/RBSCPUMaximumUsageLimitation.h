@interface RBSCPUMaximumUsageLimitation : RBSLimitation
@property (nonatomic) C role;
@property (nonatomic) Q percentage;
@property (nonatomic) double duration;
@property (nonatomic) Q violationPolicy;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (unsigned long long)hash;
- (unsigned char)role;
- (id)description;
- (double)duration;
- (BOOL)isEqual:;
- (unsigned long long)percentage;
- (unsigned long long)violationPolicy;
+ (id)limitationForRole:withPercentage:duration:violationPolicy:;
@end
