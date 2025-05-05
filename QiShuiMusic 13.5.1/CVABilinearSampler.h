@interface CVABilinearSampler : NSObject
@property (nonatomic) {?=[4]} sourceQuad;
- (void).cxx_destruct;
- (id)initWithDevice:;
- (void)encodeToCommandBuffer:sourceTexture:destinationTexture:;
- (id)sourceQuad;
- (void)setSourceQuad:;
@end
