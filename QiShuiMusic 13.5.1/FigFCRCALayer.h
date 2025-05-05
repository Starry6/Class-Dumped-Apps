@interface FigFCRCALayer : FigBaseCALayer
- (id)actionForLayer:forKey:;
- (id)init;
- (void)dealloc;
- (void)compose;
- (void)layoutSublayers;
- (void)setCallbacks:userEvent:viewportChanged:drawInContext:;
- (void)clear:;
- (void)setVideoBounds:;
@end
