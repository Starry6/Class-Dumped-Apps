@interface IESLiveDanmakuSpeedConfiguration : NSObject
@property (nonatomic) double commonSpeed;
@property (nonatomic) double speedForFastest;
@property (nonatomic) double speedForFast;
@property (nonatomic) double speedForMedium;
@property (nonatomic) double speedForSlow;
@property (nonatomic) double speedForSlowest;
- (void)setCommonSpeed:;
- (double)speedForFastest;
- (double)speedForSlowest;
- (double)commonSpeed;
- (id)initWithSettingConfig:;
- (void)setSpeedForFast:;
- (void)setSpeedForFastest:;
- (void)setSpeedForMedium:;
- (void)setSpeedForSlow:;
- (void)setSpeedForSlowest:;
- (void)setupWithConfig:;
- (double)speedForFast;
- (double)speedForMedium;
- (double)speedForSlow;
@end
