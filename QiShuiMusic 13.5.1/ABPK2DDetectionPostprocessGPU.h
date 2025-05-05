@interface ABPK2DDetectionPostprocessGPU : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)process:counter:shape:;
- (id)initWithNumberOfChannels:;
- (void)_copyToInputAsFloat16:shape:;
@end
