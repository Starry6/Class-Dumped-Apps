@interface CIMetalProcessor : CIImageProcessorKernel
+ (int)outputFormat;
+ (BOOL)allowSRGBTranferFuntionOnInputAtIndex:;
+ (BOOL)allowSRGBTranferFuntionOnOutput;
+ (id)roiForInput:arguments:outputRect:;
+ (int)formatForInputAtIndex:;
+ (BOOL)processWithInputs:arguments:output:error:;
+ (BOOL)synchronizeInputs;
+ (BOOL)allowPartialOutputRegion;
+ (void)setFilterParams:arguments:filter:;
+ (void)setFilterParamsAndImages:arguments:filter:;
@end
