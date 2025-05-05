@interface VCPCNNConvBlockBinary : VCPCNNBlock
- (void)dealloc;
- (int)forward;
- (void).cxx_destruct;
- (BOOL)useGPU;
- (BOOL)supportGPU;
- (int)readFromDisk:quantFactor:;
- (id)initWithParameters:filterNum:convType:reLU:padding:;
- (int)constructBlock:context:;
- (int)gpuForward;
- (int)fillConvWeightsGPU;
@end
