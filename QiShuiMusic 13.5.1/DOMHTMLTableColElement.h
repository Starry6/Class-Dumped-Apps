@interface DOMHTMLTableColElement : DOMHTMLElement
@property (nonatomic) NSString align;
@property (nonatomic) NSString ch;
@property (nonatomic) NSString chOff;
@property (nonatomic) NSInteger span;
@property (nonatomic) NSString vAlign;
@property (nonatomic) NSString width;
- (void)setWidth:;
- (id)width;
- (int)span;
- (void)setSpan:;
- (id)align;
- (void)setAlign:;
- (id)ch;
- (void)setCh:;
- (id)chOff;
- (void)setChOff:;
- (id)vAlign;
- (void)setVAlign:;
@end
