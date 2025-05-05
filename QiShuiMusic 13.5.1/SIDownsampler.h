@interface SIDownsampler : NSObject
- (void).cxx_destruct;
- (void)encodeToCommandBuffer:input:output:;
- (id)initWithFactory:scaleFactor:;
@end
