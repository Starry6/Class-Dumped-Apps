@interface UIPDFHighlighter : NSObject
@property (nonatomic) double inset;
- (void)addAnimation:;
- (id)init;
- (void)dealloc;
- (void)drawLayer:inContext:;
- (void)setNeedsDisplay;
- (void)clear;
- (double)inset;
- (void)setInset:;
- (void)unhide;
- (void)addRectPath:toView:layer:rectangle:upright:;
- (void)makeTheClipPath:layer:rectangle:upright:;
- (void)makeTheBorderPath:layer:rectangle:upright:;
- (void)addHighlightLayerFor:atIndex:to:animated:;
- (void)addHighlightFor:to:animated:;
@end
