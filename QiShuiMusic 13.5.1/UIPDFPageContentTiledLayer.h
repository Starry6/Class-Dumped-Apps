@interface UIPDFPageContentTiledLayer : CATiledLayer
- (id)init;
- (void)dealloc;
- (void)drawLayer:inContext:;
- (void)layoutSublayers;
- (void)setNeedsDisplay;
- (void)setSelectionNeedsDisplay;
@end
