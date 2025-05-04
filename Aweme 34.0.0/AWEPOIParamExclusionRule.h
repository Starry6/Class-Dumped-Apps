@interface AWEPOIParamExclusionRule : AWEPOIParamsRule
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)verifyEventParam:ruleItem:error:failedReason:;
- (id)ruleName;
@end
