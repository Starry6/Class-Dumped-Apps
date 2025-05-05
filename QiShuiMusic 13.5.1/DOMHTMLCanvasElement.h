@interface DOMHTMLCanvasElement : DOMHTMLElement
@property (nonatomic) NSInteger width;
@property (nonatomic) NSInteger height;
- (void)setWidth:;
- (int)height;
- (int)width;
- (void)setHeight:;
- (id)toDataURL:;
@end
