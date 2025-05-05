@interface SIBoxBlurFilter : NSObject
@property (nonatomic) Q radius;
- (void)setRadius:;
- (unsigned long long)radius;
- (void).cxx_destruct;
- (id)initWithFactory:size:pixelFormat:andRadius:;
- (void)encodeToCommandBuffer:sourceTexture:blurred:;
@end
