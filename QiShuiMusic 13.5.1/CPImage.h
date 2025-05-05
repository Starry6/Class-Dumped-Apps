@interface CPImage : CPGraphicObject
- (id)imageData;
- (id)initWithBounds:;
- (BOOL)isVisible;
- (id)bounds;
- (long long)zOrder;
- (void)accept:;
- (id)renderedBounds;
- (void)recomputeRenderedBounds;
- (id)initWithPDFImage:;
@end
