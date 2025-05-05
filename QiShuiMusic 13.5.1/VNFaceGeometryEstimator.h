@interface VNFaceGeometryEstimator : VNDetector
- (id)processRegionOfInterest:croppedPixelBuffer:options:qosClass:warningRecorder:error:progressHandler:;
- (BOOL)createRegionOfInterestCrop:options:warningRecorder:pixelBuffer:error:progressHandler:;
- (BOOL)_buildCalibrationMatrix:calibrationMatrix:error:;
+ (id)allLandmarksPointsIndexes;
@end
