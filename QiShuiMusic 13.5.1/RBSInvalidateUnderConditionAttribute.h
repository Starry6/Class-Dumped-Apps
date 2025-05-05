@interface RBSInvalidateUnderConditionAttribute : RBSAttribute
@property (nonatomic) NSString condition;
@property (nonatomic) q minValue;
- (id)condition;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (unsigned long long)hash;
- (long long)minValue;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
+ (id)attributeWithCondition:minValue:;
@end
