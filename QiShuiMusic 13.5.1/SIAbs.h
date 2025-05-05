@interface SIAbs : NSObject
- (void).cxx_destruct;
- (void)encodeToCommandBuffer:sourceTexture:destinationTexture:;
- (id)initWithFactory:;
- (void)encodeInPlaceToCommandBuffer:texture:;
@end
