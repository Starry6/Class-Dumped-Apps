@interface SIPixelwiseComparison : NSObject
- (void).cxx_destruct;
- (id)initWithFactory:comparisonOperator:;
- (void)encodeToCommandBuffer:sourceTexture:value:destinationTexture:;
@end
