@interface FBSProcessor : CIImageProcessorKernel
+ (int)outputFormat;
+ (id)roiForInput:arguments:outputRect:;
+ (int)formatForInputAtIndex:;
+ (BOOL)synchronizeInputs;
+ (BOOL)allowPartialOutputRegion;
+ (BOOL)skipFormatChecks;
@end
