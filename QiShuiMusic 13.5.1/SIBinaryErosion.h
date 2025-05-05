@interface SIBinaryErosion : NSObject
- (void).cxx_destruct;
- (void)encodeToCommandBuffer:sourceTexture:destinationTexture:;
- (id)initWithFactory:kernelRadius:;
@end
