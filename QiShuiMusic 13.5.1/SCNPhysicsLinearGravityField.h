@interface SCNPhysicsLinearGravityField : SCNPhysicsField
- (void)setDirection:;
- (id)gravity;
- (id)_createField;
- (BOOL)supportsOffset;
@end
