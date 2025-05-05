@interface BWStreamingCameraCalibrationDataNode : BWNode
@property (nonatomic) NSInteger rotationDegrees;
@property (nonatomic) BOOL mirroringEnabled;
@property (nonatomic) NSInteger horizontalSensorBinningFactor;
@property (nonatomic) NSInteger verticalSensorBinningFactor;
- (BOOL)mirroringEnabled;
- (void)dealloc;
- (int)rotationDegrees;
- (void)setMirroringEnabled:;
- (id)nodeType;
- (void)setVerticalSensorBinningFactor:;
- (void)setHorizontalSensorBinningFactor:;
- (int)verticalSensorBinningFactor;
- (int)horizontalSensorBinningFactor;
- (void)renderSampleBuffer:forInput:;
- (void)setRotationDegrees:;
- (id)nodeSubType;
- (id)initWithCameraInfoByPortType:;
@end
