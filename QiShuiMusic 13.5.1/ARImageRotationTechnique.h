@interface ARImageRotationTechnique : ARTechnique
@property (nonatomic) q rotationAngle;
@property (nonatomic) q mirrorMode;
- (void)dealloc;
- (id)processData:;
- (long long)rotationAngle;
- (id)_fullDescription;
- (BOOL)isEqual:;
- (unsigned long long)requiredSensorDataTypes;
- (id)initWithRotation:mirror:;
- (int)_rotateAccelerate:pOutputBuffer:;
- (long long)mirrorMode;
@end
