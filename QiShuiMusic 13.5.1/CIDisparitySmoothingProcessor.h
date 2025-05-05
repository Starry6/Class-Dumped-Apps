@interface CIDisparitySmoothingProcessor : CIImageProcessorKernel
+ (int)outputFormat;
+ (id)roiForInput:arguments:outputRect:;
+ (int)formatForInputAtIndex:;
+ (BOOL)processWithInputs:arguments:output:error:;
+ (BOOL)synchronizeInputs;
+ (BOOL)hasValidPipelines;
+ (void)compilePipelines:;
+ (void)releasePipelines;
+ (void)compilePipelinesIfNeeded:;
+ (BOOL)outputIsOpaque;
@end
