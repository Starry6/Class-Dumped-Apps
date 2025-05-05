@interface InpaintingSinglePassFilter : CIImageProcessorKernel
+ (int)outputFormat;
+ (BOOL)allowSRGBTranferFuntionOnInputAtIndex:;
+ (BOOL)allowSRGBTranferFuntionOnOutput;
+ (id)roiForInput:arguments:outputRect:;
+ (int)formatForInputAtIndex:;
+ (BOOL)processWithInputs:arguments:output:error:;
+ (BOOL)synchronizeInputs;
+ (BOOL)allowPartialOutputRegion;
+ (id)performSinglePassInpaintingPipelineOnImage:usingMask:boundingBox:additionalParameters:espressoResources:executionContext:;
+ (id)performInpaintingAndBlendingOnSRGBImage:usingThresholdedMask:blendingRadius:inpaintingResourceDescriptor:espressoResources:executionContext:;
+ (id)runInpaintingNeuralNetworkOnSRGBImage:usingThresholdedMask:inpaintingResourceDescriptor:espressoResources:executionContext:error:;
@end
