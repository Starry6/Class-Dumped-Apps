@interface CUIPSDLayerGroupRef : CUIPSDLayerBaseRef
- (void)dealloc;
- (BOOL)isOpen;
- (id)bounds;
- (id)layerNames;
- (unsigned int)numberOfLayers;
- (id)layerRefAtIndex:;
- (BOOL)isLayerGroup;
- (id)initWithImageRef:layerIndex:;
- (BOOL)_isGroupType:;
- (BOOL)isGroupStart;
- (BOOL)isGroupEnd;
- (id)layerEnumerator;
- (void)enumerateLayersUsingBlock:;
@end
