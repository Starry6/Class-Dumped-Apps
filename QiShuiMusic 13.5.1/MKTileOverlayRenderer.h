@interface MKTileOverlayRenderer : MKOverlayRenderer
@property (nonatomic) NSNumber visibleKeyframeOverride;
@property (nonatomic) Q visibleKeyframeIndex;
@property (nonatomic) UIImage colorMap;
- (void)setColorMap:;
- (void)reloadData;
- (id)colorMap;
- (void)dealloc;
- (void)setAlpha:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)initWithOverlay:;
- (void).cxx_destruct;
- (void)drawMapRect:zoomScale:inContext:;
- (BOOL)canDrawMapRect:zoomScale:;
- (BOOL)_mayExtendOutsideBounds;
- (BOOL)overlayCanProvideRasterTileData:;
- (id)rasterTileProviderForOverlay:;
- (void)_updateRenderColors;
- (id)initWithTileOverlay:;
- (unsigned long long)_visibleKeyframeIndex;
- (void)setVisibleKeyframeOverride:;
- (void)_playWithLoopCount:;
- (void)_updateColorMap;
- (id)visibleKeyframeOverride;
+ (BOOL)_externalSubclassOverridesDrawingMethods;
+ (id)keyPathsForValuesAffectingVisibleKeyframeIndex;
@end
