@interface AXANFDDetectedObject : AXVNEspressoDetectedObject
@property (nonatomic) float rotationAngle;
@property (nonatomic) float yawAngle;
@property (nonatomic) NSInteger labelKey;
- (void)setRotationAngle:;
- (int)labelKey;
- (float)rotationAngle;
- (float)yawAngle;
- (void)setYawAngle:;
- (void)setLabelKey:;
- (id)initWithObjectType:boundingBox:confidence:rotationAngle:yawAngle:labelKey:;
@end
