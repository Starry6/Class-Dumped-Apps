@interface FigCaptureCameraCalibrationDataSinkConfiguration : FigCaptureSinkConfiguration
@property (nonatomic) BOOL discardsLateCameraCalibrationData;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (int)sinkType;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setDiscardsLateCameraCalibrationData:;
- (BOOL)discardsLateCameraCalibrationData;
@end
