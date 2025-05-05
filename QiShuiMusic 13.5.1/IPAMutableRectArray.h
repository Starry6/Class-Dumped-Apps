@interface IPAMutableRectArray : IPARectArray
- (id)copyWithZone:;
- (void)addRect:;
- (void)removeAllRects;
- (void)setRectArray:;
- (void)insertRect:atIndex:;
- (void)removeRectAtIndex:;
@end
