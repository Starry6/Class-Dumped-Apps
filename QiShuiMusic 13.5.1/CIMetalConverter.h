@interface CIMetalConverter : NSObject
- (void)dealloc;
- (id)initWithDevice:kernelName:;
- (void)encodeToCommandBuffer:sourceBuffer:sourceRowBytes:destinationTexture:;
- (void)encodeToCommandBuffer:sourceBuffer:sourceRowBytes:destinationBuffer:destinationRowBytes:destinationSize:;
@end
