@interface RBSDurationAttribute : RBSAttribute
@property (nonatomic) double invalidationDuration;
@property (nonatomic) double warningDuration;
@property (nonatomic) Q startPolicy;
@property (nonatomic) Q endPolicy;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (unsigned long long)startPolicy;
- (void)setEndPolicy:;
- (void)setWarningDuration:;
- (unsigned long long)hash;
- (void)setInvalidationDuration:;
- (unsigned long long)endPolicy;
- (double)warningDuration;
- (double)invalidationDuration;
- (id)description;
- (void)setStartPolicy:;
- (BOOL)isEqual:;
+ (id)invalidateAfterInterval:;
+ (id)attributeWithDuration:warningDuration:startPolicy:endPolicy:;
+ (id)attributeWithDuration:;
+ (id)terminateAfterInterval:;
@end
