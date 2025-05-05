@interface ConvexFillProcessor : CIImageProcessorKernel
+ (int)outputFormat;
+ (BOOL)canReduceOutputChannels;
+ (id)roiForInput:arguments:outputRect:;
+ (int)formatForInputAtIndex:;
+ (BOOL)processWithInputs:arguments:output:error:;
+ (BOOL)allowPartialOutputRegion;
@end
