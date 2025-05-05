@interface DOMHTMLHRElement : DOMHTMLElement
@property (nonatomic) NSString align;
@property (nonatomic) BOOL noShade;
@property (nonatomic) NSString size;
@property (nonatomic) NSString width;
- (void)setWidth:;
- (id)width;
- (void)setSize:;
- (id)size;
- (id)align;
- (void)setAlign:;
- (BOOL)noShade;
- (void)setNoShade:;
@end
