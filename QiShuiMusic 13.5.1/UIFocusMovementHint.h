@interface UIFocusMovementHint : NSObject
@property (nonatomic) double translationAmount;
@property (nonatomic) double rotationAmount;
@property (nonatomic) {CGVector=dd} movementDirection;
@property (nonatomic) {CATransform3D=dddddddddddddddd} perspectiveTransform;
@property (nonatomic) {CGVector=dd} rotation;
@property (nonatomic) {CGVector=dd} translation;
@property (nonatomic) {CATransform3D=dddddddddddddddd} interactionTransform;
- (id)perspectiveTransform;
- (id)translation;
- (id)rotation;
- (id)copyWithZone:;
- (id)initWithMovementDirection:itemSize:;
- (id)interactionTransform;
- (id)movementDirection;
- (double)translationAmount;
- (void)setTranslationAmount:;
- (double)rotationAmount;
- (void)setRotationAmount:;
@end
