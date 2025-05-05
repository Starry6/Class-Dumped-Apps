@interface PSPointerSettings : PTSettings
@property (nonatomic) double materialAlphaDot;
@property (nonatomic) double materialAlphaIBeam;
@property (nonatomic) double materialAlphaSmallItemLight;
@property (nonatomic) double materialAlphaSmallItemDark;
@property (nonatomic) double materialAlphaSmallItemDarkHighContrast;
- (void)setDefaultValues;
- (double)materialAlphaDot;
- (void)setMaterialAlphaDot:;
- (double)materialAlphaIBeam;
- (void)setMaterialAlphaIBeam:;
- (double)materialAlphaSmallItemLight;
- (void)setMaterialAlphaSmallItemLight:;
- (double)materialAlphaSmallItemDark;
- (void)setMaterialAlphaSmallItemDark:;
- (double)materialAlphaSmallItemDarkHighContrast;
- (void)setMaterialAlphaSmallItemDarkHighContrast:;
+ (id)settingsControllerModule;
@end
