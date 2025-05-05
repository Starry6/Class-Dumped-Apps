@interface CIIntegralImageProcessorGPU : CIImageProcessorKernel
+ (int)outputFormat;
+ (BOOL)canReduceOutputChannels;
+ (BOOL)processWithInputs:arguments:output:error:;
@end
