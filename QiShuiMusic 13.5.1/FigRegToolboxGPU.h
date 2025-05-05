@interface FigRegToolboxGPU : NSObject
- (id)init;
- (void)dealloc;
- (int)warpTargetImage:outTexChma:inTexLuma:inTexChma:solverSelector:histogram:roi:doWaitForIdle:;
- (id)initWithCommandQueue:;
- (int)allocateResourcesSimple:imageHeight:numberOfCorners:;
- (int)computeTransformInternal:solverKernel:solverOutputResults:histogram:roi:waitForCompletion:;
- (int)allocateResources:imageWidth:imageHeight:gridWidth:gridHeight:templateRadius:searchRadius:minNCCThreshold:;
- (int)specialImageConverterA:outTexture1:outTexture2:outTexture3:doWaitForIdle:;
- (int)releaseResources;
- (void).cxx_destruct;
- (int)processReferenceImage:histogram:doWaitForIdle:;
- (int)computeTransform:transform:outputCorners:solverSelector:histogram:roi:;
@end
