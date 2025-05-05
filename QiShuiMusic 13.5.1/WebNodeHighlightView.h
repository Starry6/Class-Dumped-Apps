@interface WebNodeHighlightView : WAKView
- (void)dealloc;
- (BOOL)isFlipped;
- (void)_removeAllLayers;
- (id)initWithWebNodeHighlight:;
- (void)detachFromWebNodeHighlight;
- (void)_attach:numLayers:;
- (void)_layoutForNodeHighlight:parent:;
- (void)_layoutForRectsHighlight:parent:;
- (void)layoutSublayers:;
- (id)webNodeHighlight;
@end
