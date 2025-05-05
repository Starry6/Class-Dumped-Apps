@interface IESMMAudioSpeedConfig : IESMMAudioEffectConfig
@property (nonatomic) double speedRate;
@property (nonatomic) BOOL reservePitch;
- (BOOL)reservePitch;
- (void)setReservePitch:;
- (void)setSpeedRate:;
- (void)setupDefaultValues;
- (double)speedRate;
- (id)toDicInfo;
- (id)copyWithZone:;
@end
