@interface DOMCSSStyleRule : DOMCSSRule
@property (nonatomic) NSString selectorText;
@property (nonatomic) DOMCSSStyleDeclaration style;
- (id)style;
- (id)selectorText;
- (void)setSelectorText:;
@end
