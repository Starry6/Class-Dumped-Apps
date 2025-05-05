@interface VCPCNNConvBlockGPU : VCPCNNConvBlock
- (void)dealloc;
- (int)forward;
- (void).cxx_destruct;
- (int)readFromDisk:quantFactor:;
- (int)gpuForward;
- (int)fillConvWeightsGPU;
- (void)releaseBatchNormMemory;
- (int)readBatchNormParam:quantFactor:;
@end
