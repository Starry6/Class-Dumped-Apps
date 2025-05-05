@interface ADAdaptiveCorrectionPipeline : NSObject
@property (nonatomic) NSInteger maxNumPoints;
- (void).cxx_destruct;
- (id)getStatus;
- (id)getConfigFromPipelineParams;
- (id)initWithMaxNumPoints:;
- (id)initWithMaxNumPoints:andParameters:;
- (long long)fullTemporalCorrectionWithCameraCalibrationTele:cameraCalibrationWide:xyPointsTele:xyPointsWide:numPoints:;
- (long long)fullCorrectionWithCameraCalibrationTele:cameraCalibrationWide:xyPointsTele:xyPointsWide:numPoints:;
- (long long)fullCorrectionWithPointsTele:xyPointsWide:numPoints:calModel:;
- (int)maxNumPoints;
+ (void)fillDistortionModel:andUpdateCalModel:forCamera:fromCalib:;
+ (void)updateADCameraCalib:fromDistortionModel:andCalModel:forCamera:;
+ (void)convertExtrinsics:toInternalFormat:;
+ (void)convertInternalExtrinsics:toMatrix:;
+ (void)convertCameraCalibrationTele:cameraCalibrationWide:toDistortionModelTele:toDistortionModelWide:toCalModel:;
+ (void)updateCameraCalibrationTele:cameraCalibrationWide:withDistortionModelTele:withDistortionModelWide:withCalModel:;
+ (id)convertToInternalCalModel:;
+ (void)updateADCalModel:fromInternalCalModel:;
+ (long long)approximateCorrectionWithPointsTele:xyPointsWide:numPoints:calModel:;
+ (long long)computeVerticalBaselineTransform:extrinsicRefToAuxPrime:rotationRefToRefPrime:rotationAuxToAuxPrime:;
+ (long long)rotateCalModel:extrinsicRefToAuxRotated:rotationRef:rotationAux:calRotated:;
+ (long long)rotateDistortionModel:rotation:distRotated:;
+ (long long)transformPointsWithMatrix:numPoints:transformMatrix:xyPointsTransformed:;
+ (double)meanFundamentalEpipolarErrorForCalModel:xyPointsTele:xyPointsWide:numPoints:;
@end
