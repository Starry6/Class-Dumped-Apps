@interface MPSExternalCNNUnary : MPSExternalPluginBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)encodeToCommandBuffer:computeCommandEncoder:options:sourceTexture:sourceInfo:destinationTexture:destinationInfo:;
- (unsigned long long)encodeToCommandBuffer:computeCommandEncoder:options:pluginOptions:sourceTexture:sourceInfo:destinationTexture:destinationInfo:;
- (unsigned long long)encodeWithFilter:encoder:commandBuffer:callInfo:;
- (unsigned long long)encodeBatchWithFilter:encoder:commandBuffer:callInfo:;
@end
