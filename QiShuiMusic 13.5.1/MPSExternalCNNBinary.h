@interface MPSExternalCNNBinary : MPSExternalPluginBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)encodeWithFilter:encoder:commandBuffer:callInfo:;
- (unsigned long long)encodeBatchWithFilter:encoder:commandBuffer:callInfo:;
- (unsigned long long)encodeToCommandBuffer:computeCommandEncoder:options:primaryTexture:primaryInfo:secondaryTexture:secondaryInfo:destinationTexture:destinationInfo:;
@end
