@interface CIAreaAverageProcessor : CIImageProcessorKernel
+ (int)outputFormat;
+ (BOOL)allowSRGBTranferFuntionOnInputAtIndex:;
+ (BOOL)canReduceOutputChannels;
+ (BOOL)allowSRGBTranferFuntionOnOutput;
+ (id)roiForInput:arguments:outputRect:;
+ (int)formatForInputAtIndex:;
+ (BOOL)processWithInputs:arguments:output:error:;
+ (BOOL)synchronizeInputs;
@end
