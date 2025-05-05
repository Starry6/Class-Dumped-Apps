@interface CIGenericMetalProcessor : CIImageProcessorKernel
+ (id)roiForInput:arguments:outputRect:;
+ (int)formatForInputAtIndex:;
+ (BOOL)processWithInputs:arguments:output:error:;
+ (BOOL)synchronizeInputs;
+ (BOOL)outputIsOpaque;
+ (BOOL)skipFormatChecks;
+ (id)applyWithExtent:inputs:arguments:error:;
+ (id)applyWithExtent:shader:inputs:roiMethods:insetRects:scaleFactors:arguments:error:;
+ (id)applyWithExtent:shader:inputs:insetRects:arguments:error:;
+ (id)applyWithExtent:shader:inputs:scaleFactors:arguments:error:;
+ (id)applyWithExtent:shader:inputs:arguments:error:;
+ (id)applyWithExtent:shader:inputs:className:arguments:error:;
@end
