@interface IESMMAudioFadeConfig : IESMMAudioEffectConfig
@property (nonatomic) double fadeInDuration;
@property (nonatomic) double fadeOutDuration;
@property (nonatomic) double fadeOffset;
@property (nonatomic) double fadeOutOffset;
@property (nonatomic) q fadeInCurve;
@property (nonatomic) q fadeOutCurve;
- (void)setFadeInCurve:;
- (long long)fadeInCurve;
- (double)fadeOffset;
- (long long)fadeOutCurve;
- (double)fadeOutOffset;
- (void)setFadeOffset:;
- (void)setFadeOutCurve:;
- (void)setFadeOutOffset:;
- (void)setupDefaultValues;
- (id)toDicInfo;
- (void)setFadeInDuration:;
- (double)fadeOutDuration;
- (double)fadeInDuration;
- (void)setFadeOutDuration:;
@end
