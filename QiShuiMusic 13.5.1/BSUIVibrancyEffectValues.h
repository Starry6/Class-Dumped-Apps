@interface BSUIVibrancyEffectValues : BSUIVibrancyValues
@property (nonatomic) {CAColorMatrix=ffffffffffffffffffff} backdropColorMatrix;
@property (nonatomic) {CAColorMatrix=ffffffffffffffffffff} vibrantColorMatrix;
@property (nonatomic) NSString groupName;
- (id)transformColor:withVibrantMask:;
- (void)calculateValuesForConfiguration:;
- (id)transformVibrantColor:;
- (void).cxx_destruct;
- (id)backdropColorMatrix;
- (id)groupName;
- (id)transformBackdropColor:;
- (id)vibrantColorMatrix;
+ (id)_vibrancyMatrixForType:heroColor:backgroundType:;
+ (id)_materialBackdropColorMatrixForType:heroColor:backgroundType:;
+ (id)_colorizedMaterialBackdropMatrixForType:heroColor:backgroundType:;
+ (id)_colorizedVibrancyMatrixForType:heroColor:backgroundType:;
@end
