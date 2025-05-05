@interface MPSCNNLossLabels : MPSState
- (id)init;
- (void)dealloc;
- (id)lossImage;
- (id)initWithDevice:lossImageSize:labelsImage:weightsImage:;
- (id)initWithDevice:lossImageSize:labelsDescriptor:weightsDescriptor:;
- (id)labelsImage;
- (id)weightsImage;
- (id)initWithDevice:labelsDescriptor:;
@end
