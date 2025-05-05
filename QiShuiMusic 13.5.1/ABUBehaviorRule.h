@interface ABUBehaviorRule : NSObject
@property (nonatomic) NSString ruleId;
@property (nonatomic) NSString ruleTimestamp;
@property (nonatomic) Q condition;
@property (nonatomic) NSString operateSymbol;
- (id)operateSymbol;
- (id)ruleTimestamp;
- (void)setOperateSymbol:;
- (void)setRuleTimestamp:;
- (unsigned long long)condition;
- (void)setCondition:;
- (void).cxx_destruct;
- (void)setRuleId:;
- (id)ruleId;
@end
