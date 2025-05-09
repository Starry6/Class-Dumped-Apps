@interface MTLumaDodgePillSettings : PTSettings
@property (nonatomic) double minWidth;
@property (nonatomic) double maxWidth;
@property (nonatomic) double height;
@property (nonatomic) double edgeSpacing;
@property (nonatomic) double colorAddWhiteness;
@property (nonatomic) double brightLumaThreshold;
@property (nonatomic) double darkLumaThreshold;
@property (nonatomic) double initialLumaThreshold;
@property (nonatomic) double cornerRadius;
@property (nonatomic) q cornerMask;
@property (nonatomic) MTLumaDodgePillStyleSettings noneSettings;
@property (nonatomic) MTLumaDodgePillStyleSettings thinSettings;
@property (nonatomic) MTLumaDodgePillStyleSettings graySettings;
@property (nonatomic) MTLumaDodgePillStyleSettings blackSettings;
@property (nonatomic) MTLumaDodgePillStyleSettings whiteSettings;
- (void)setDefaultValues;
- (double)maxWidth;
- (double)darkLumaThreshold;
- (void)setMaxWidth:;
- (id)whiteSettings;
- (void)setBlackSettings:;
- (id)thinSettings;
- (void)setWhiteSettings:;
- (long long)cornerMask;
- (double)height;
- (double)brightLumaThreshold;
- (id)graySettings;
- (void)setEdgeSpacing:;
- (void)setThinSettings:;
- (void)setCornerRadius:;
- (void)setHeight:;
- (id)noneSettings;
- (double)minWidth;
- (void).cxx_destruct;
- (void)setBrightLumaThreshold:;
- (double)edgeSpacing;
- (void)setNoneSettings:;
- (void)setGraySettings:;
- (double)colorAddWhiteness;
- (id)blackSettings;
- (void)setCornerMask:;
- (double)cornerRadius;
- (void)setColorAddWhiteness:;
- (void)setMinWidth:;
- (void)setDarkLumaThreshold:;
- (void)setInitialLumaThreshold:;
- (double)initialLumaThreshold;
+ (id)sharedInstance;
+ (id)settingsControllerModule;
@end
