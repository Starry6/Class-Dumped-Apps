@interface DOMCSSValue : DOMObject
@property (nonatomic) NSString cssText;
@property (nonatomic) S cssValueType;
- (void)dealloc;
- (void)setCssText:;
- (unsigned short)cssValueType;
- (id)cssText;
@end
