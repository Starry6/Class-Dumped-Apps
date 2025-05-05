@interface LOTCompositionContainer : LOTLayerContainer
@property (nonatomic) NSArray childLayers;
@property (nonatomic) NSDictionary childMap;
@property (nonatomic) q asyncLoadingCount;
@property (nonatomic) LOTAnimationView referencedAnimationView;
- (id)keysForKeyPath:;
- (id)_layerForKeypath:;
- (void)addSublayer:toKeypathLayer:;
- (long long)asyncLoadingCount;
- (id)childMap;
- (id)convertPoint:fromKeypathLayer:withParentLayer:;
- (id)convertPoint:toKeypathLayer:withParentLayer:;
- (id)convertRect:fromKeypathLayer:withParentLayer:;
- (id)convertRect:toKeypathLayer:withParentLayer:;
- (void)displayWithFrame:forceUpdate:;
- (id)initWithModel:inLayerGroup:withLayerGroup:withAssestGroup:;
- (void)initializeWithChildGroup:withAssetGroup:;
- (void)maskSublayer:toKeypathLayer:;
- (id)referencedAnimationView;
- (void)searchNodesForKeypath:;
- (void)setAsyncLoadingCount:;
- (void)setReferencedAnimationView:;
- (void)setValueDelegate:forKeypath:;
- (void)setViewportBounds:;
- (void).cxx_destruct;
- (id)childLayers;
@end
