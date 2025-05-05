@interface DOMHTMLEmbedElement : DOMHTMLElement
@property (nonatomic) NSString align;
@property (nonatomic) NSInteger height;
@property (nonatomic) NSString name;
@property (nonatomic) NSString src;
@property (nonatomic) NSString type;
@property (nonatomic) NSInteger width;
- (BOOL)showsTapHighlight;
- (void)setName:;
- (void)setType:;
- (void)setWidth:;
- (int)height;
- (int)width;
- (id)type;
- (void)setHeight:;
- (id)name;
- (id)src;
- (void)setSrc:;
- (id)align;
- (void)setAlign:;
@end
