@interface FigCameraCalibrationDataCaptureConnectionConfiguration : FigCaptureConnectionConfiguration
@property (nonatomic) BOOL mirroringEnabled;
@property (nonatomic) NSInteger orientation;
- (id)initWithXPCEncoding:;
- (BOOL)mirroringEnabled;
- (id)copyXPCEncoding;
- (void)setMirroringEnabled:;
- (int)orientation;
- (id)description;
- (BOOL)isEqual:;
- (void)setOrientation:;
- (id)copyWithZone:;
@end
