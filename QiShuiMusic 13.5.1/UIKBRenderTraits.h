@interface UIKBRenderTraits : NSObject
@property (nonatomic) UIKBRenderGeometry geometry;
@property (nonatomic) UIKBGradient backgroundGradient;
@property (nonatomic) UIKBGradient layeredBackgroundGradient;
@property (nonatomic) UIKBGradient layeredForegroundGradient;
@property (nonatomic) UIKBTextStyle symbolStyle;
@property (nonatomic) UIKBTextStyle fallbackSymbolStyle;
@property (nonatomic) NSArray secondarySymbolStyles;
@property (nonatomic) NSArray renderEffects;
@property (nonatomic) NSArray foregroundRenderEffects;
@property (nonatomic) NSArray variantGeometries;
@property (nonatomic) UIKBRenderTraits variantTraits;
@property (nonatomic) UIKBRenderTraits highlightedVariantTraits;
@property (nonatomic) BOOL controlOpacities;
@property (nonatomic) BOOL blurBlending;
@property (nonatomic) q blendForm;
@property (nonatomic) NSArray renderFlags;
@property (nonatomic) BOOL renderSecondarySymbolsSeparately;
@property (nonatomic) q renderFlagsForAboveEffects;
@property (nonatomic) NSString hashString;
@property (nonatomic) BOOL usesDarkAppearance;
@property (nonatomic) double floatingContentViewCornerRadius;
@property (nonatomic) {CGSize=dd} floatingContentViewFocusedIncreaseSize;
@property (nonatomic) double floatingContentViewShadowVerticalOffset;
@property (nonatomic) double floatingContentViewShadowRadius;
@property (nonatomic) double floatingContentViewShadowOpacity;
- (id)geometry;
- (void)setRenderFlags:;
- (id)renderFlags;
- (void)setFloatingContentViewShadowRadius:;
- (void)setGeometry:;
- (id)symbolStyle;
- (void)setRenderSecondarySymbolsSeparately:;
- (void)setFallbackSymbolStyle:;
- (long long)renderFlagsForAboveEffects;
- (id)layeredForegroundGradient;
- (long long)blendForm;
- (void)modifyForMasking;
- (id)variantGeometries;
- (void)removeAllRenderEffects;
- (void)setLayeredForegroundGradient:;
- (double)floatingContentViewShadowRadius;
- (id)highlightedVariantTraits;
- (void)setVariantTraits:;
- (void)overlayWithTraits:;
- (id)layeredBackgroundGradient;
- (double)floatingContentViewCornerRadius;
- (id)floatingContentViewFocusedIncreaseSize;
- (id)foregroundRenderEffects;
- (id)secondarySymbolStyles;
- (void)setHashString:;
- (void)setSecondarySymbolStyles:;
- (void)setBlendForm:;
- (void)setRenderFlagsForAboveEffects:;
- (id)variantTraits;
- (BOOL)controlOpacities;
- (id)renderEffects;
- (double)floatingContentViewShadowVerticalOffset;
- (void).cxx_destruct;
- (void)setVariantGeometries:;
- (id)fallbackSymbolStyle;
- (void)setSymbolStyle:;
- (void)setFloatingContentViewFocusedIncreaseSize:;
- (double)floatingContentViewShadowOpacity;
- (id)description;
- (id)hashString;
- (id)backgroundGradient;
- (void)setFloatingContentViewShadowOpacity:;
- (void)setHighlightedVariantTraits:;
- (void)setFloatingContentViewCornerRadius:;
- (void)setFloatingContentViewShadowVerticalOffset:;
- (BOOL)blurBlending;
- (void)addForegroundRenderEffect:;
- (BOOL)renderSecondarySymbolsSeparately;
- (void)setControlOpacities:;
- (void)setBlurBlending:;
- (BOOL)isEqual:;
- (void)setUsesDarkAppearance:;
- (void)setBackgroundGradient:;
- (void)setLayeredBackgroundGradient:;
- (id)copyWithZone:;
- (void)addRenderEffect:;
- (BOOL)usesDarkAppearance;
+ (id)emptyTraits;
+ (id)traitsWithGeometry:;
+ (id)traitsWithSymbolStyle:;
@end
