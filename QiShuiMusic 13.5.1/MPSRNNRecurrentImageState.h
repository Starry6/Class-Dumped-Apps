@interface MPSRNNRecurrentImageState : MPSState
- (void)dealloc;
- (BOOL)isTemporary;
- (void)setReadCount:;
- (id)getRecurrentOutputImageForLayerIndex:;
- (id)getMemoryCellImageForLayerIndex:;
- (id)initWithCommandBuffer:recurrentImageDescriptors:cellImageDescriptors:isTemporary:layerCount:;
@end
