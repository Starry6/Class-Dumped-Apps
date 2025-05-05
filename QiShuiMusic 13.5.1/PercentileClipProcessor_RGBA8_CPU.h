@interface PercentileClipProcessor_RGBA8_CPU : CIImageProcessorKernel
+ (int)outputFormat;
+ (BOOL)canReduceOutputChannels;
+ (id)roiForInput:arguments:outputRect:;
+ (int)formatForInputAtIndex:;
+ (BOOL)processWithInputs:arguments:output:error:;
+ (BOOL)allowPartialOutputRegion;
+ (id)centerInImg:fromRect:toRect:offset:;
@end
