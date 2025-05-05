@interface MPSCNNSplit2WayBufferC4 : MPSCNNKernel
- (void)encode:input:output0:output1:params:;
- (void)encode:state:input:output0:output1:output2:params:;
- (id)getPipelineState:axis:;
- (void).cxx_destruct;
- (id)initWithDevice:library:;
@end
