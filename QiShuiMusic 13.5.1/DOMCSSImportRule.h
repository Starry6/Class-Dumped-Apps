@interface DOMCSSImportRule : DOMCSSRule
@property (nonatomic) NSString href;
@property (nonatomic) DOMMediaList media;
@property (nonatomic) DOMCSSStyleSheet styleSheet;
- (id)href;
- (id)styleSheet;
- (id)media;
@end
