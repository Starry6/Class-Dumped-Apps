@interface LegacyTileLayer : CALayer
@property (nonatomic) I paintCount;
@property (nonatomic) ^v tileGrid;
@property (nonatomic) BOOL isRenderingInContext;
- (void)drawInContext:;
- (id)actionForKey:;
- (void)layoutSublayers;
- (void)renderInContext:;
- (void)setNeedsDisplayInRect:;
- (BOOL)isRenderingInContext;
- (unsigned int)paintCount;
- (void)setPaintCount:;
- (id)tileGrid;
- (void)setTileGrid:;
@end
