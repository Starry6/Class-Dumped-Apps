@interface CIHighlightRecoveryProcessor : CIImageProcessorKernel
+ (int)outputFormat;
+ (id)roiForInput:arguments:outputRect:;
+ (int)formatForInputAtIndex:;
+ (BOOL)processWithInputs:arguments:output:error:;
+ (BOOL)synchronizeInputs;
+ (BOOL)allowPartialOutputRegion;
+ (id)compilePipelineForDevice:functionName:constantValues:;
+ (id)functionConstantValuesTuningParameters:;
@end
