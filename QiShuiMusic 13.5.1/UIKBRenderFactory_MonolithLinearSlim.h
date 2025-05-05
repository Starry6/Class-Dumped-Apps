@interface UIKBRenderFactory_MonolithLinearSlim : UIKBRenderFactory_MonolithLinear
- (id)variantTextColor;
- (id)_textOffsetForKey:;
- (void)configureSymbolStyle:forControlKey:;
- (void)configureCornersOnGeometry:forKey:;
- (void)configureGeometry:forControlKey:;
- (id)_enabledTraitsForControlKey:;
- (id)_highlightedTraitsForControlKey:;
- (id)_variantTraitsForControlKey:onKeyplane:;
- (double)variantPlatterHeight;
- (id)variantPillBackgroundColor;
- (id)highlightedVariantPillBackgroundColor;
- (id)highlightedVariantLayeredBackgroundColor;
@end
