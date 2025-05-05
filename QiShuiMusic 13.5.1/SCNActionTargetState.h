@interface SCNActionTargetState : NSObject
@property (nonatomic) {SCNVector3=fff} position;
@property (nonatomic) {SCNVector3=fff} euler;
@property (nonatomic) {SCNVector3=fff} scale;
@property (nonatomic) {SCNVector4=ffff} rotation;
@property (nonatomic) BOOL usesEuler;
@property (nonatomic) float opacity;
- (void)setPosition:;
- (id)position;
- (void)setOpacity:;
- (void)setScale:;
- (float)opacity;
- (void)setRotation:;
- (id)rotation;
- (id)scale;
- (id)euler;
- (void)setEuler:;
- (BOOL)usesEuler;
- (void)setUsesEuler:;
@end
