@interface VCPCorrelation : NSObject
- (void).cxx_destruct;
- (id)initWithDevice:;
- (int)configureGPU;
- (int)encodeToCommandBuffer:firstInput:secondInput:correlation:;
@end
