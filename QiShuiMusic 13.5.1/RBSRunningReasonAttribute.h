@interface RBSRunningReasonAttribute : RBSAttribute
@property (nonatomic) Q runningReason;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (unsigned long long)hash;
- (unsigned long long)runningReason;
- (id)description;
- (BOOL)isEqual:;
+ (id)withReason:;
@end
