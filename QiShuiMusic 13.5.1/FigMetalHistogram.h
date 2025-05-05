@interface FigMetalHistogram : NSObject
- (int)singleComponentCPUAverageInputPixelBuffer:validRect:outputAverage:;
- (int)singleComponentGPUAverageInputPixelBuffer:validRect:outputAverage:;
- (void).cxx_destruct;
- (id)initWithMetalContext:;
- (int)singleComponentCPUHistogramInputPixelBuffer:validRect:outputHistogram:;
- (int)singleComponentGPUHistogramInputPixelBuffer:validRect:outputHistogram:;
- (int)singleComponentCPUHistogramInputPixelBuffer:validRect:subSampleX:subSampleY:outputHistogram:;
@end
