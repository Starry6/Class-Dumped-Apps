@interface CIImageProcessorKernel : NSObject
+ (int)outputFormat;
+ (BOOL)allowSRGBTranferFuntionOnInputAtIndex:;
+ (BOOL)canReduceOutputChannels;
+ (BOOL)allowSRGBTranferFuntionOnOutput;
+ (id)roiForInput:arguments:outputRect:;
+ (BOOL)allowCompressedInputsAndOutputs;
+ (int)formatForInputAtIndex:;
+ (BOOL)processWithInputs:arguments:output:error:;
+ (BOOL)synchronizeInputs;
+ (BOOL)outputIsOpaque;
+ (BOOL)allowPartialOutputRegion;
+ (BOOL)skipFormatChecks;
+ (id)applyWithExtent:inputs:arguments:error:;
+ (int)outputFormatWithArguments:;
+ (int)formatForInputAtIndex:arguments:;
+ (BOOL)canOutputLossyCompressed;
+ (unsigned long long)_digestForArgs:;
@end
