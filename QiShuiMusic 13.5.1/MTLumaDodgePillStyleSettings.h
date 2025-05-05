@interface MTLumaDodgePillStyleSettings : PTSettings
@property (nonatomic) double colorAddOpacity;
@property (nonatomic) double lumaMapPlusColorOpacity;
@property (nonatomic) double overlayBlendOpacity;
@property (nonatomic) double blur;
@property (nonatomic) double brightness;
@property (nonatomic) double saturation;
- (void)setDefaultValues;
- (double)overlayBlendOpacity;
- (void)setColorAddOpacity:;
- (double)brightness;
- (void)setBrightness:;
- (double)colorAddOpacity;
- (double)lumaMapPlusColorOpacity;
- (void)setBlur:;
- (void)setLumaMapPlusColorOpacity:;
- (void)setSaturation:;
- (double)saturation;
- (double)blur;
- (void)setOverlayBlendOpacity:;
+ (id)settingsControllerModule;
@end
