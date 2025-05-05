@interface DOMHTMLOptionsCollection : DOMObject
@property (nonatomic) NSInteger selectedIndex;
@property (nonatomic) I length;
- (void)dealloc;
- (int)selectedIndex;
- (void)remove:;
- (unsigned int)length;
- (void)setLength:;
- (void)setSelectedIndex:;
- (id)item:;
- (id)namedItem:;
- (void)add:index:;
@end
