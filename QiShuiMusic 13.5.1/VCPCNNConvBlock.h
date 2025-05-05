@interface VCPCNNConvBlock : VCPCNNBlock
- (void).cxx_destruct;
- (BOOL)useGPU;
- (BOOL)supportGPU;
- (id)initWithParameters:filterNum:chunk:reLU:padding:groups:stride:batchNorm:;
- (int)constructBlock:context:;
+ (Class)convBlockClass:;
+ (id)convBlockWithFilterSize:filterNum:chunk:reLU:padding:;
+ (id)convBlockWithFilterSize:filterNum:chunk:reLU:padding:groups:stride:batchNorm:;
@end
