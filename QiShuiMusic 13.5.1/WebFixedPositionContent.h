@interface WebFixedPositionContent : NSObject
- (void)dealloc;
- (id)initWithWebView:;
- (void)didFinishScrollingOrZooming;
- (void)scrollOrZoomChanged:;
- (void)overflowScrollPositionForLayer:changedTo:;
- (BOOL)hasFixedOrStickyPositionLayers;
- (void)setViewportConstrainedLayers:stickyContainerMap:;
@end
