@interface AWEExpExitPanGestureConfigModel : NSObject
@property (nonatomic) BOOL enable;
@property (nonatomic) NSString referString;
@property (nonatomic) double rightUpAngle;
@property (nonatomic) double rightDownAngle;
@property (nonatomic) double effectScreenScope;
- (id)referString;
- (void)setReferString:;
- (double)rightUpAngle;
- (void)setRightUpAngle:;
- (double)rightDownAngle;
- (void)setRightDownAngle:;
- (double)effectScreenScope;
- (void)setEffectScreenScope:;
- (BOOL)enable;
- (id)init;
- (void).cxx_destruct;
- (void)setEnable:;
@end
