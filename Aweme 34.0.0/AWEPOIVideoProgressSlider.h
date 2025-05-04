@interface AWEPOIVideoProgressSlider : UISlider
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} lastBounds;
@property (nonatomic) BOOL isBigMode;
@property (nonatomic) AWEProgressSliderConfig normalConfig;
@property (nonatomic) AWEProgressSliderConfig bigModeConfig;
- (id)normalConfig;
- (void)setNormalConfig:;
- (void)changeBigMode:animation:;
- (void)setBigModeConfig:;
- (void)changeBigMode:;
- (void)setIsBigMode:;
- (BOOL)isBigMode;
- (id)bigModeConfig;
- (BOOL)pointInside:withEvent:;
- (id)trackRectForBounds:;
- (id)thumbRectForBounds:trackRect:value:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (id)currentConfig;
- (id)lastBounds;
- (void)setLastBounds:;
@end
