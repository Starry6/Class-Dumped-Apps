@interface MPSRNNRecurrentMatrixState : MPSState
- (void)dealloc;
- (BOOL)isTemporary;
- (void)setReadCount:;
- (id)getMemoryCellMatrixForLayerIndex:;
- (id)getRecurrentOutputMatrixForLayerIndex:;
- (id)initWithCommandBuffer:recurrentMatrixDescriptors:cellMatrixDescriptors:isTemporary:layerCount:;
- (id)initWithDevice:commandBuffer:recurrentMatrixDescriptors:cellMatrixDescriptors:isTemporary:layerCount:;
@end
