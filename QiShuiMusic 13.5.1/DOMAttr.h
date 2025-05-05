@interface DOMAttr : DOMNode
@property (nonatomic) NSString name;
@property (nonatomic) BOOL specified;
@property (nonatomic) NSString value;
@property (nonatomic) DOMElement ownerElement;
@property (nonatomic) DOMCSSStyleDeclaration style;
- (void)setValue:;
- (id)value;
- (id)name;
- (id)style;
- (BOOL)specified;
- (id)ownerElement;
- (BOOL)isId;
@end
