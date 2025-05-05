@interface CSJLOTCompositionContainer : CSJLOTLayerContainer
@property (nonatomic) NSArray childLayers;
@property (nonatomic) NSDictionary childMap;
- (id)keysForKeyPath:;
- (id)_layerForKeypath:;
- (void)addSublayer:toKeypathLayer:;
- (id)childMap;
- (id)convertPoint:fromKeypathLayer:withParentLayer:;
- (id)convertPoint:toKeypathLayer:withParentLayer:;
- (id)convertRect:fromKeypathLayer:withParentLayer:;
- (id)convertRect:toKeypathLayer:withParentLayer:;
- (void)displayWithFrame:forceUpdate:;
- (id)findTextLayerInLayer:;
- (id)initWithModel:inLayerGroup:withLayerGroup:withAssestGroup:withDatasource:;
- (void)initializeWithChildGroup:withAssetGroup:;
- (void)maskSublayer:toKeypathLayer:;
- (void)searchNodesForKeypath:;
- (void)setValueDelegate:forKeypath:;
- (void)setViewportBounds:;
- (void)updateText:layerId:;
- (void).cxx_destruct;
- (id)childLayers;
@end
