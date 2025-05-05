@interface MPSRNNMatrixTrainingState : MPSState
- (void)dealloc;
- (BOOL)isTemporary;
- (void)setReadCount:;
- (id)initForSingleGateWithCommandBuffer:matrixDescriptor:isTemporary:;
@end
