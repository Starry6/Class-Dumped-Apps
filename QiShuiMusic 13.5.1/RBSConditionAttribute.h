@interface RBSConditionAttribute : RBSAttribute
@property (nonatomic) NSString condition;
@property (nonatomic) q value;
- (id)condition;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (long long)value;
- (BOOL)isEqual:;
+ (id)attributeWithCondition:value:;
@end
