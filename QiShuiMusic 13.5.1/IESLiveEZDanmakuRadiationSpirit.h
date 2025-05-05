@interface IESLiveEZDanmakuRadiationSpirit : IESLiveEZDanmakuSpirit
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} quadrantFrame;
@property (nonatomic) double targetAlphaScale;
@property (nonatomic) double targetSizeScale;
- (double)targetSizeScale;
- (void)updateWithTime:;
- (void)activeWithContext:;
- (void)deactive;
- (id)quadrantFrame;
- (void)setBaseDuration:;
- (void)setQuadrantFrame:;
- (void)setTargetAlphaScale:;
- (void)setTargetSizeScale:;
- (double)targetAlphaScale;
- (BOOL)isActivated;
- (double)baseDuration;
@end
