@interface CICoreMLKernel : CIImageProcessorKernel
+ (int)outputFormat;
+ (id)roiForInput:arguments:outputRect:;
+ (int)formatForInputAtIndex:;
+ (BOOL)processWithInputs:arguments:output:error:;
@end
