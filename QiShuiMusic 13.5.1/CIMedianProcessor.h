@interface CIMedianProcessor : CIImageProcessorKernel
+ (int)outputFormat;
+ (BOOL)allowSRGBTranferFuntionOnInputAtIndex:;
+ (BOOL)canReduceOutputChannels;
+ (BOOL)allowSRGBTranferFuntionOnOutput;
+ (id)roiForInput:arguments:outputRect:;
+ (BOOL)allowCompressedInputsAndOutputs;
+ (int)formatForInputAtIndex:;
+ (BOOL)processWithInputs:arguments:output:error:;
+ (BOOL)synchronizeInputs;
+ (id)applyMedianToImage:width:;
@end
