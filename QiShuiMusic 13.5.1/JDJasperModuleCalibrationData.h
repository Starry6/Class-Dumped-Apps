@interface JDJasperModuleCalibrationData : NSObject
- (id)calib;
- (id)initWithJasperCalib:;
- (id)initWithCalibrationDictionary:;
- (id)operationalSuperWideToJasperTransform;
- (void)setOperationalSuperWideToJasperTransform:;
- (id)operationalWideToJasperTransform;
- (void)setOperationalWideToJasperTransform:;
- (id)binaryRepresentation;
+ (BOOL)isBufferOfExpectedVersion:;
@end
