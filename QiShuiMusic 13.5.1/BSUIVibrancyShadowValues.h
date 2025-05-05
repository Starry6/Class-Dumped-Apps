@interface BSUIVibrancyShadowValues : BSUIVibrancyValues
@property (nonatomic) {CAColorMatrix=ffffffffffffffffffff} vibrantColorMatrix;
- (void)calculateValuesForConfiguration:;
- (id)transformShadowColor:;
- (id)vibrantColorMatrix;
+ (id)_darkeningShadowMatrix;
+ (id)_shadowColorMatrixForType:heroColor:backgroundType:;
+ (id)_lighteningShadowMatrix;
+ (id)_colorizedShadowColorMatrixForType:heroColor:backgroundType:;
@end
