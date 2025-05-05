@interface IESLatchRuleTemplate : NSObject
@property (nonatomic) NSMutableArray rules;
@property (nonatomic) NSArray children;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addRuleNode:;
- (unsigned long long)countOfRuleNodes;
- (BOOL)matchItemNode:withSchema:globalProps:;
- (unsigned long long)p_getStringType:;
- (id)processAPI:withSchema:globalProps:variables:traceId:ruleItemNode:;
- (id)jsonRepresentation;
- (id)rules;
- (id)process:;
- (id)children;
- (void)setChildren:;
- (void)setRules:;
- (void).cxx_destruct;
+ (id)sharedOperatorMap;
+ (id)sharedFormatter;
@end
