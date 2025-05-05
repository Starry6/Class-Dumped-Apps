@interface DOMHTMLBodyElement : DOMHTMLElement
@property (nonatomic) NSString aLink;
@property (nonatomic) NSString background;
@property (nonatomic) NSString bgColor;
@property (nonatomic) NSString link;
@property (nonatomic) NSString text;
@property (nonatomic) NSString vLink;
- (id)link;
- (id)background;
- (void)setBackground:;
- (void)setText:;
- (void)setLink:;
- (id)text;
- (id)bgColor;
- (void)setBgColor:;
- (id)aLink;
- (void)setALink:;
- (id)vLink;
- (void)setVLink:;
- (int)structuralComplexityContribution;
@end
