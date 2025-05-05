@interface UtilsForTests : NSObject
+ (unsigned long long)preferredEspressoEngine;
+ (id)compareBuffer:toRefBuffer:ignoreRefZeros:;
+ (id)compareBuffer:toRefBuffer:ignoreResultZeros:ignoreRefZeros:;
+ (id)compareBuffer:offset:toRefBuffer:ignoreRefZeros:;
+ (id)compareBuffer:toRefBuffer:ignoreRefZeros:outlierPercentile:;
+ (id)compareBuffer:offset:toRefBuffer:ignoreResultZeros:ignoreRefZeros:outlierPercentile:;
+ (id)compareResults:toBaseLineInPath:ignoreRefZeros:;
+ (id)compareResults:toBaseLineInPath:ignoreRefZeros:outlierPercentile:;
+ (id)getJasperPointCloudFromPath:;
+ (id)pointsVectorFromFilePath:;
+ (id)pointsArrayFromFilePath:;
+ (id)createJasperCameraCalibration;
+ (id)createSuperWideCameraCalibration;
+ (id)createWideCameraCalibrationWithPolynomials;
+ (id)createSyntheticCameraCalibrationWithDistortion:;
+ (id)createSyntheticCameraCalibrationNilDistortion;
+ (id)createSyntheticCameraCalibrationXThetaDistortion;
+ (id)getTempDirPath;
+ (id)getNewTempFilePathWithExtension:;
@end
