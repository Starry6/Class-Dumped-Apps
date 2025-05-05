@interface MPSCNNConcatBufferC4 : MPSCNNKernel
- (void)encode:input0:input1:input2:input3:input4:input5:output:params:;
- (void)encode:input0:input1:input2:input3:input4:output:params:;
- (void)encode:input0:input1:input2:input3:output:params:;
- (void)encode:input0:input1:input2:output:params:;
- (void)encode:input0:input1:output:params:;
- (id)initWithDevice:library:inputNum:isMod4:;
- (void).cxx_destruct;
- (id)getPipelineState;
@end
