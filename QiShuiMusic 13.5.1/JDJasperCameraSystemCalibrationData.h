@interface JDJasperCameraSystemCalibrationData : NSObject
@property (nonatomic) NSInteger platform;
@property (nonatomic) NSInteger jasperChipRevision;
@property (nonatomic) JDCameraCalibrationData jasperCamera;
@property (nonatomic) JDCameraCalibrationData fullSensorSuperWideCamera;
@property (nonatomic) JDJasperModuleCalibrationData jasperModule;
- (int)platform;
- (void).cxx_destruct;
- (id)jasperCamera;
- (id)initWithJasperModuleCalibration:platformId:sensorVersion:;
- (id)getSuperWideCameraCalibrationForRawSensorSize:crop:scaledTo:;
- (void)replaceJasperDistortionModelWithWarperMesh:width:height:;
- (int)jasperChipRevision;
- (id)fullSensorSuperWideCamera;
- (id)jasperModule;
+ (id)calibrationDataWithJasperCalibDataDictionary:;
+ (id)calibrationDataWithJasperCalib:platformId:sensorVersion:;
@end
