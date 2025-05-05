@interface VCPCNNConvBlockVector : VCPCNNConvBlock
- (int)forward;
- (id)initWithParameters:filterNum:chunk:reLU:padding:groups:stride:batchNorm:;
- (int)readFromDisk:quantFactor:;
- (int)straightForwardForChunkFour;
- (int)chunkFourForward;
+ (BOOL)isFilterSizeSupported:;
@end
