@interface DOMCSSRule : DOMObject
@property (nonatomic) S type;
@property (nonatomic) NSString cssText;
@property (nonatomic) DOMCSSStyleSheet parentStyleSheet;
@property (nonatomic) DOMCSSRule parentRule;
- (void)dealloc;
- (unsigned short)type;
- (void)setCssText:;
- (id)cssText;
- (id)parentStyleSheet;
- (id)parentRule;
@end
