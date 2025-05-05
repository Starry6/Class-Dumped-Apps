@interface BDRuleEqualQuickExecutor : BDRuleQuickExecutor
@property (nonatomic) NSString identifier;
@property (nonatomic) @ constValue;
@property (nonatomic) BOOL notEqual;
- (BOOL)evaluateWithEnv:error:;
- (id)initWithCel:identifier:constValue:notEqual:;
- (BOOL)notEqual;
- (void)setConstValue:;
- (void)setNotEqual:;
- (id)identifier;
- (void).cxx_destruct;
- (void)setIdentifier:;
- (id)constValue;
@end
