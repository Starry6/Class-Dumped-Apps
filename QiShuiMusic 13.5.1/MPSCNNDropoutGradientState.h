@interface MPSCNNDropoutGradientState : MPSNNGradientState
- (id)init;
- (void)dealloc;
- (void)synchronizeOnCommandBuffer:;
- (id)maskData;
@end
