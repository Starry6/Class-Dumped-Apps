@interface AWEPOIParamConditionRule : AWEPOIParamsRule
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)formatParamConfig:params:;
- (BOOL)verifyEventParam:ruleItem:error:failedReason:;
- (id)ruleName;
@end
