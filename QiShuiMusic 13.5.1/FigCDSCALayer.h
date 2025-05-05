@interface FigCDSCALayer : FigBaseCALayer
- (void)drawInContext:;
- (id)actionForLayer:forKey:;
- (id)init;
- (void)dealloc;
- (void)layoutSublayers;
- (void)setCallbacks:userEvent:viewportChanged:drawInContext:;
- (void)clear:;
- (void)setVideoBounds:;
@end
