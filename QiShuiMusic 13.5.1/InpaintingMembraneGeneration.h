@interface InpaintingMembraneGeneration : CIImageProcessorKernel
+ (int)outputFormat;
+ (BOOL)allowSRGBTranferFuntionOnInputAtIndex:;
+ (BOOL)allowSRGBTranferFuntionOnOutput;
+ (id)roiForInput:arguments:outputRect:;
+ (int)formatForInputAtIndex:;
+ (BOOL)processWithInputs:arguments:output:error:;
+ (BOOL)synchronizeInputs;
+ (BOOL)allowPartialOutputRegion;
+ (BOOL)initializeMembraneModelForResolution:error:;
+ (id)getMembraneModelForResolution:error:;
+ (int)selectMembraneProcessingResolutionBasedOnImageSize:;
+ (id)fillSmoothMembraneForSRGBImage:andMask:error:;
@end
