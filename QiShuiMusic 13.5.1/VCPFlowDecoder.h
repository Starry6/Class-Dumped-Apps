@interface VCPFlowDecoder : VCPEspressoModel
- (void).cxx_destruct;
- (id)initModule:config:cancel:;
- (int)bindWithBuffers:correlation:flow:outputFlow:;
- (int)estimateFlow:correlation:flow:outputFlow:callback:;
@end
