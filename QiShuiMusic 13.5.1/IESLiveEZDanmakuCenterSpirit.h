@interface IESLiveEZDanmakuCenterSpirit : IESLiveEZDanmakuMutexSpirit
@property (nonatomic) BOOL activated;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} targetRect;
@property (nonatomic) double moveDistance;
@property (nonatomic) double heightScale;
- (void)setHeightScale:;
- (void)activeWithContext:;
- (void)confirmOriginWithRect:;
- (void)deactive;
- (double)moveDistance;
- (void)setMoveDistance:;
- (id)init;
- (id)targetRect;
- (double)heightScale;
- (void)setActivated:;
- (BOOL)activated;
- (void)setTargetRect:;
@end
