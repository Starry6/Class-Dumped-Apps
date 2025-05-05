@interface CIConvolutionProcessor : CIImageProcessorKernel
+ (int)outputFormat;
+ (id)applyConToImage:width:height:bias:weights:;
+ (BOOL)allowSRGBTranferFuntionOnInputAtIndex:;
+ (BOOL)canReduceOutputChannels;
+ (BOOL)allowSRGBTranferFuntionOnOutput;
+ (id)roiForInput:arguments:outputRect:;
+ (BOOL)allowCompressedInputsAndOutputs;
+ (id)applyBoxToImage:width:height:;
+ (int)formatForInputAtIndex:;
+ (BOOL)processWithInputs:arguments:output:error:;
+ (BOOL)synchronizeInputs;
@end
