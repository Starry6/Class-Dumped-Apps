@interface MPSCNNSoftmaxBufferC4 : MPSCNNKernel
- (void)encode:state:inputs:outputs:params:;
- (id)getGridSize:;
- (id)getPipelineState:oc:;
- (id)initWithDevice:library:axis:;
- (void).cxx_destruct;
@end
