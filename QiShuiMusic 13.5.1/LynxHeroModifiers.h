@interface LynxHeroModifiers : NSObject
@property (nonatomic) double duration;
@property (nonatomic) double delay;
@property (nonatomic) float opacity;
@property (nonatomic) {CATransform3D=dddddddddddddddd} transform;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) CAMediaTimingFunction timingFunction;
- (id)translateX:y:z:;
- (id)rotateX:y:z:;
- (id)scaleX:y:z:;
- (void)setOpacity:;
- (id)init;
- (void)setTimingFunction:;
- (void)setTransform:;
- (double)delay;
- (float)opacity;
- (void)setDelay:;
- (void)setDuration:;
- (id)timingFunction;
- (id)transform;
- (double)duration;
- (void)setSize:;
- (id)size;
@end
