@interface IESPrefetchRuleTemplate : NSObject
@property (nonatomic) NSMutableDictionary rules;
@property (nonatomic) NSMutableDictionary regexRules;
@property (nonatomic) NSArray children;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addRegexRuleNode:;
- (void)addRuleNode:;
- (unsigned long long)countOfRegexRuleNodes;
- (unsigned long long)countOfRuleNodes;
- (BOOL)matchItemNode:withSchema:;
- (id)matchNodeForName:withSchema:;
- (unsigned long long)p_getStringType:;
- (id)processAPI:withSchema:variables:traceId:;
- (id)regexRuleNodeForName:;
- (id)ruleNodeForName:;
- (void)setRegexRules:;
- (id)jsonRepresentation;
- (id)rules;
- (id)process:;
- (id)children;
- (void)setChildren:;
- (void)setRules:;
- (void).cxx_destruct;
- (id)regexRules;
@end
