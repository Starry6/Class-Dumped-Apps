@interface VNTorsoprintGeneratorFaceBased : VNTorsoprintGeneratorBase
- (id)internalProcessUsingQualityOfServiceClass:options:regionOfInterest:warningRecorder:error:progressHandler:;
- (id)processRegionOfInterest:croppedPixelBuffer:options:qosClass:warningRecorder:error:progressHandler:;
- (BOOL)createRegionOfInterestCrop:options:warningRecorder:pixelBuffer:error:progressHandler:;
- (id)torsoprintForImageBuffer:requestRevision:error:;
- (BOOL)_calculateTorsoBBoxFromFaceBBox:insideImageWithSize:faceOrientationRelativeToUpright:torsoBBox:error:;
+ (id)torsoprintInputImageSizeForFaceOrientation:;
+ (id)torsoprintDescriptorSize;
+ (float)minimumTorsoInsideInputImageThreshold;
+ (float)magnifiedBBoxScaleFactor;
@end
