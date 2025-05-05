@interface DOMCSSStyleSheet : DOMStyleSheet
@property (nonatomic) DOMCSSRule ownerRule;
@property (nonatomic) DOMCSSRuleList cssRules;
@property (nonatomic) DOMCSSRuleList rules;
- (id)rules;
- (void)removeRule:;
- (id)cssRules;
- (unsigned int)insertRule:index:;
- (void)deleteRule:;
- (unsigned int)insertRule::;
- (id)ownerRule;
- (int)addRule:style:index:;
@end
