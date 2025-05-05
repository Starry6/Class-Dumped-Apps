@interface FigSubtitleWebVTTRegionCALayer : FigBaseCALayer
- (void)setRenderer:;
- (void)setContent:;
- (id)init;
- (void)dealloc;
- (void)layoutSublayers;
- (void)setNeedsDisplay;
- (void)setViewport:;
- (void)handleNeedsLayoutNotification;
- (id)getContentID;
- (void)setReLayout;
@end
