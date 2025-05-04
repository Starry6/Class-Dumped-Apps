@interface AWEDPlayerVolumeControllerConfig : AWEDPlayerGeneralControllerConfig
@property (nonatomic) double barWidth;
@property (nonatomic) double barActiveWidth;
@property (nonatomic) double barHeight;
- (double)barActiveWidth;
- (void)setBarActiveWidth:;
- (double)barHeight;
- (void)setBarHeight:;
- (double)barWidth;
- (void)setBarWidth:;
@end
