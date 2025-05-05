@interface SIUpsampler : NSObject
- (void).cxx_destruct;
- (id)initWithFactory:;
- (void)encodeToCommandBuffer:input:output:;
@end
