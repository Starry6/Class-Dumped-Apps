@interface VNHomographicImageRegistrationDetector : VNDetector
- (id)processRegionOfInterest:croppedPixelBuffer:options:qosClass:warningRecorder:error:progressHandler:;
- (BOOL)createRegionOfInterestCrop:options:warningRecorder:pixelBuffer:error:progressHandler:;
- (BOOL)completeInitializationForSession:error:;
- (id)_validatedImageBufferForKey:inOptions:error:;
- (BOOL)_createN:CVPixelBuffers:withPixelFormat:width:height:error:;
- (id)_createHomographicPixelBufferFromImageBuffer:cropRect:options:error:;
- (BOOL)_calculateHomographicWarpTransform:ofFloatingImagePixelBuffer:ontoReferenceImagePixelBuffer:usingImageRegistrationContext:seededWithPreviousWarpTransform:error:;
@end
