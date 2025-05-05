@interface DOMRGBColor : DOMObject
@property (nonatomic) DOMCSSPrimitiveValue red;
@property (nonatomic) DOMCSSPrimitiveValue green;
@property (nonatomic) DOMCSSPrimitiveValue blue;
@property (nonatomic) DOMCSSPrimitiveValue alpha;
- (void)dealloc;
- (id)red;
- (id)blue;
- (id)green;
- (id)color;
- (id)alpha;
@end
