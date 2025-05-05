@interface DOMHTMLTableSectionElement : DOMHTMLElement
@property (nonatomic) NSString align;
@property (nonatomic) NSString ch;
@property (nonatomic) NSString chOff;
@property (nonatomic) NSString vAlign;
@property (nonatomic) DOMHTMLCollection rows;
- (id)rows;
- (id)align;
- (void)setAlign:;
- (id)ch;
- (void)setCh:;
- (id)chOff;
- (void)setChOff:;
- (id)vAlign;
- (void)setVAlign:;
- (id)insertRow:;
- (void)deleteRow:;
@end
