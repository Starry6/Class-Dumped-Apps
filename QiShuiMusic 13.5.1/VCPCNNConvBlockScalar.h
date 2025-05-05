@interface VCPCNNConvBlockScalar : VCPCNNConvBlock
- (int)forward;
- (int)readFromDisk:quantFactor:;
@end
