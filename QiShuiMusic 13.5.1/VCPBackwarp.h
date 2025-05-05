@interface VCPBackwarp : NSObject
- (void).cxx_destruct;
- (id)initWithDevice:;
- (int)configureGPU;
- (int)encodeToCommandBuffer:input:output:flow:upscaledFlow:;
@end
