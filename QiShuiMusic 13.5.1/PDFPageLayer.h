@interface PDFPageLayer : CALayer
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)page;
- (void)dealloc;
- (void)layoutSublayers;
- (void)setBounds:;
- (void)clearTiles;
- (void).cxx_destruct;
- (BOOL)isVisible;
- (long long)displayBox;
- (void)setEnableTileUpdates:;
- (id)renderingProperties;
- (id)geometryInterface;
- (unsigned long long)visibilityDelegateIndex;
- (void)_renderingPropertyUpdate:;
- (void)_pageDidRotate:;
- (void)_pageChangedPageRef:;
- (void)_forceTileUpdate;
- (id)initWithPage:geometryInterface:andRenderingProperties:;
- (void)setNeedsTilesUpdate;
- (void)addPageLayerEffect:;
- (void)removePageLayerEffectForID:;
- (id)pageLayerEffectForID:;
- (void)updatePageLayerEffectForID:;
- (void)updatePageLayerEffects;
- (id)layerEffectTransform;
- (void)scalePageLayerEffects:;
- (BOOL)enablesTileUpdates;
- (void)forceTileUpdate;
- (void)saveOriginalTileLayout;
- (void)restoreOriginalTileLayout;
- (void)applyTileLayoutScale:;
- (void)willStartLiveResize;
- (void)willEndStartLiveResize;
- (void)setVisibilityDelegateIndex:;
- (void)_tileUpdateComplete;
- (id)_pageLayerEffects;
- (void)_updateLayerEffect:withPageTransform:;
- (void)_releaseTiles;
- (void)_releasePageLayerEffects;
- (void)_hideTileLayer:;
- (void)_setEnablePageShadows:;
- (void)tileDrawingComplete:;
- (BOOL)_isTile:occludedByTiles:;
- (id)_subtractRectB:fromRectA:;
- (id)_layerTileToRootViewBounds:;
- (id)_pageLayerVisibleRect;
- (BOOL)_hasTileWithFrameInLayer:;
- (void)_printRectsArray:;
- (void)_updateTiles;
@end
