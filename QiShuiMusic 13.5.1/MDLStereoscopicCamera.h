@interface MDLStereoscopicCamera : MDLCamera
@property (nonatomic) float interPupillaryDistance;
@property (nonatomic) float leftVergence;
@property (nonatomic) float rightVergence;
@property (nonatomic) float overlap;
@property (nonatomic) {?=[4]} leftViewMatrix;
@property (nonatomic) {?=[4]} rightViewMatrix;
@property (nonatomic) {?=[4]} leftProjectionMatrix;
@property (nonatomic) {?=[4]} rightProjectionMatrix;
- (id)init;
- (float)overlap;
- (void)setOverlap:;
- (id)leftViewMatrix;
- (id)rightViewMatrix;
- (id)leftProjectionMatrix;
- (id)rightProjectionMatrix;
- (float)interPupillaryDistance;
- (void)setInterPupillaryDistance:;
- (float)leftVergence;
- (void)setLeftVergence:;
- (float)rightVergence;
- (void)setRightVergence:;
@end
