@interface GDCTransform : NSObject
- (id)_legacyParametersToUniforms:withScale:andMode:;
- (int)_compileShaders;
- (id)initWithOptionalCommandQueue:;
- (void).cxx_destruct;
- (int)transformFrom:to:withParameters:withScale:withMode:andCommandBuffer:;
- (int)_setSamplersWithNormalizedCoordinates:;
@end
