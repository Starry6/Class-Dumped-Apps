@interface MPSCNNOnnxop2BufferC4 : MPSCNNKernel
- (void)encode:state:input0:input1:outputs:params:;
- (id)getGridSize:broadcast_type:gather_axis:;
- (id)initWithDevice:library:broadcastType:gatherAxis:;
- (void).cxx_destruct;
- (id)getPipelineState;
@end
