@interface VNEspressoHelpers : NSObject
+ (id)pathForEspressoNetworkModelFileWithName:error:;
+ (BOOL)getWidth:height:ofBlobNamed:forNetworkModelFileWithPath:error:;
+ (id)createCVPixelBufferWithPixelFormat:fromImageInEspressoBuffer:error:;
+ (BOOL)getWidth:height:ofBlobNamed:forNetworkModelFileWithName:error:;
+ (BOOL)createSingleNetworkPlanFromResourceName:usingProcessingDevice:lowPriorityMode:inputBlobNames:outputBlobNames:networkConfiguration:memoryPoolId:espressoResources:error:;
+ (id)_locateFrameworkBundleForResourceWithName:resourceDirectory:error:;
+ (BOOL)createSingleNetworkPlanFromResourceName:usingProcessingDevice:lowPriorityMode:inputBlobNames:outputBlobNames:networkConfiguration:explicitNetworkLayersStorageType:memoryPoolId:espressoResources:error:;
+ (unsigned long long)pixelValueSizeInBytesForBuffer:error:;
+ (BOOL)renderEspressoBufferImage:intoCVPixelBuffer:error:;
+ (BOOL)feedForwardEspressoBufferForNetwork:fromBufferWithName:toBufferWithName:firstFrame:error:;
+ (id)pathForEspressoResource:ofType:error:;
+ (id)pathForEspressoResourceWithFilename:error:;
+ (id)_alternatePathForEspressoResource:ofType:error:;
@end
