@interface ANFDDetectedObject : VNEspressoDetectedObject
@property (nonatomic) float rotationAngle;
@property (nonatomic) float yawAngle;
@property (nonatomic) float pitchAngle;
@property (nonatomic) NSInteger labelKey;
- (void)setRotationAngle:;
- (int)labelKey;
- (float)rotationAngle;
- (id)description;
- (float)yawAngle;
- (void)setYawAngle:;
- (id)initWithObjectType:boundingBox:confidence:rotationAngle:yawAngle:pitchAngle:labelKey:;
- (float)pitchAngle;
- (void)setPitchAngle:;
- (void)setLabelKey:;
@end
