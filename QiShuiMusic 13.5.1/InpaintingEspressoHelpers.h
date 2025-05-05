@interface InpaintingEspressoHelpers : NSObject
+ (id)pathForEspressoNetworkModelFileWithName:error:;
+ (id)performInpaintingOnImage:usingMask:atProcessingResolution:withModel:error:;
+ (BOOL)bindEspressoInputBufferForInputName:buffer:preprocessingParams:network:noAlphaPremultiply:error:;
+ (id)convertEspressoOutput:intoOutputImageWrapper:usingOutputPixelsRange:andOutputFormat:error:;
+ (id)performInpaintingOnBGRA8VImage:usingMask:atProcessingResolution:withOutputFormat:outputImage:andModel:error:;
+ (id)generatePoissonMembraneOnBGRA8VTargetImage:forSourceImage:usingMaskOutline:atProcessingResolution:withOutputFormat:outputImage:andModel:error:;
+ (id)createEspressoContextUsingFastestDevicePresent__engineUsed:;
+ (id)createEspressoContextForCPUEngine:;
+ (BOOL)createSingleNetworkPlanFromResourceDescriptor:resourceFileName:lowPriorityMode:cpuOnlyModel:membraneModel:modelInputPixelFormat:modelOutputPixelFormat:inputBlobNames:outputBlobNames:storeInEspressoResources:error:;
+ (BOOL)selectConfigurationAndBuildPlanForNetwork:configurationName:error:;
+ (int)selectModelProcessingResolutionBasedOnEdgeSize:amongResolutions:;
@end
