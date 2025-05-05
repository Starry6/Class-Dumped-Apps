@interface VCPCNNFlattenBlock : VCPCNNBlock
- (id)initWithParameters:;
- (int)forward;
- (int)constructBlock:context:;
@end
