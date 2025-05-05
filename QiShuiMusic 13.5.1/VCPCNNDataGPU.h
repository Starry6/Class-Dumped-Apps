@interface VCPCNNDataGPU : VCPCNNData
- (int)allocBuffers:;
- (int)reallocGPUTemporalBuffers;
- (int)bufferAllocGPU;
- (int)convertCPUData2GPU;
- (int)convertGPUData2CPU;
@end
