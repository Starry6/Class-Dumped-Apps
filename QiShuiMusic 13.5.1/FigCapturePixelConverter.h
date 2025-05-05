@interface FigCapturePixelConverter : NSObject
@property (nonatomic) BWVideoFormat outputFormat;
- (id)outputFormat;
- (id)init;
- (void)dealloc;
- (id)initWithPrefetchPool:;
- (int)updateOutputPixelFormat:dimensions:poolCapacity:colorSpaceProperties:alwaysUseHardwareForConversion:;
- (int)convertSampleBuffer:cropRect:outputSampleBuffer:;
- (int)convertPixelBuffer:cropRect:allocateOutputFromBufferPool:outputPixelBuffer:;
@end
