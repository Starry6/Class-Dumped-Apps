@interface WebSimpleLayer : CALayer
@property (nonatomic) BOOL isRenderingInContext;
- (void)drawInContext:;
- (id)actionForKey:;
- (void)display;
- (void)setNeedsDisplay;
- (void)renderInContext:;
- (void)setNeedsDisplayInRect:;
- (BOOL)isRenderingInContext;
@end
