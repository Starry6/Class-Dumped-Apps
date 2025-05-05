@interface RBSPreventLaunchLimitation : RBSLimitation
@property (nonatomic) RBSProcessPredicate predicate;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (unsigned long long)hash;
- (id)predicate;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
+ (id)limitationWithPredicate:;
@end
