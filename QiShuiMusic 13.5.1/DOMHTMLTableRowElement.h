@interface DOMHTMLTableRowElement : DOMHTMLElement
@property (nonatomic) NSInteger rowIndex;
@property (nonatomic) NSInteger sectionRowIndex;
@property (nonatomic) DOMHTMLCollection cells;
@property (nonatomic) NSString align;
@property (nonatomic) NSString bgColor;
@property (nonatomic) NSString ch;
@property (nonatomic) NSString chOff;
@property (nonatomic) NSString vAlign;
- (int)rowIndex;
- (id)cells;
- (id)bgColor;
- (void)setBgColor:;
- (id)align;
- (void)setAlign:;
- (id)ch;
- (void)setCh:;
- (id)chOff;
- (void)setChOff:;
- (id)vAlign;
- (void)setVAlign:;
- (int)sectionRowIndex;
- (id)insertCell:;
- (void)deleteCell:;
@end
