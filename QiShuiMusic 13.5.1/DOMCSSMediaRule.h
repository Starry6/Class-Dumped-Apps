@interface DOMCSSMediaRule : DOMCSSRule
@property (nonatomic) DOMMediaList media;
@property (nonatomic) DOMCSSRuleList cssRules;
- (id)media;
- (id)cssRules;
- (unsigned int)insertRule:index:;
- (void)deleteRule:;
- (unsigned int)insertRule::;
@end
