@interface MPSCNNCropBufferC4 : MPSCNNKernel
- (void)encode:input:output:params:;
- (id)getGridSize:;
- (void).cxx_destruct;
- (id)initWithDevice:library:;
- (id)getPipelineState;
@end
