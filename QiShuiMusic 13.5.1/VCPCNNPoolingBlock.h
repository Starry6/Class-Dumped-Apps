@interface VCPCNNPoolingBlock : VCPCNNBlock
- (int)forward;
- (BOOL)useGPU;
- (BOOL)supportGPU;
- (int)constructBlock:context:;
- (id)initWithParameters:poolY:chunk:;
+ (id)poolingBlockWithPoolX:poolY:chunk:;
@end
