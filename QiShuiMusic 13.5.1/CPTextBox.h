@interface CPTextBox : CPRegion
- (id)init;
- (void)setRotationAngle:;
- (double)rotationAngle;
- (id)description;
- (id)bounds;
- (id)copyWithZone:;
- (BOOL)isRotated;
- (void)accept:;
- (BOOL)isBoxRegion;
@end
