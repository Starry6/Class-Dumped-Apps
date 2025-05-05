@interface IESLiveDanmakuSupremeSettings : NSObject
@property (nonatomic) double atmosphereFontSize;
@property (nonatomic) double atmosphereSpacingMax;
@property (nonatomic) double atmosphereSpacingMin;
@property (nonatomic) double mainDanmakuHeight;
@property (nonatomic) double atmosphereDanmakuHeight;
- (double)atmosphereDanmakuHeight;
- (double)atmosphereFontSize;
- (double)atmosphereSpacingMax;
- (double)atmosphereSpacingMin;
- (double)mainDanmakuHeight;
- (void)setAtmosphereDanmakuHeight:;
- (void)setAtmosphereFontSize:;
- (void)setAtmosphereSpacingMax:;
- (void)setAtmosphereSpacingMin:;
- (void)setMainDanmakuHeight:;
@end
