@interface CIIntegralImageProcessorCPU : CIImageProcessorKernel
+ (int)outputFormat;
+ (BOOL)canReduceOutputChannels;
+ (BOOL)processWithInputs:arguments:output:error:;
@end
