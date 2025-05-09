@interface UIKBRenderFactory10Key : UIKBRenderFactory
- (long long)assetIdiom;
- (double)symbolImageControlKeyFontSize;
- (double)keyCornerRadius;
- (void)modifyTraitsForDetachedInputSwitcher:withKey:;
- (id)_traitsForKey:onKeyplane:;
- (id)displayContentsForKey:;
- (long long)lightHighQualityEnabledBlendForm;
- (id)controlKeyBackgroundColorName;
- (id)controlKeyForegroundColorName;
- (id)defaultKeyDividerColorName;
- (id)controlKeyDividerColorName;
- (id)symbolImageControlKeyOffset;
- (id)controlKeyTraits;
- (id)activeControlKeyTraits;
- (id)shiftedControlKeyTraits;
- (id)_preferredScriptFontForRendering:;
- (id)topEdgeAdjustmentInsets;
- (double)interkeyGapsCenterXOfKeyplaneFrame:;
- (unsigned long long)edgesAdjustedForTranslucentGapsForGeometry:key:onKeyplane:;
- (id)abcKeyTextOffset;
- (double)capitalAbcSymbolSize;
- (id)globeKeyTextOffset;
- (id)dictationKeyTextOffset;
- (id)longVowelSignKeyTextOffset;
- (double)numberPadKeyPrimarySymbolSize;
- (id)numberPadKeyPrimaryTextOffset;
- (id)numberPadKeySecondaryTextOffset;
- (id)numberPadVBarSecondaryTextOffset;
- (BOOL)shouldShowBottomRowEdge;
- (BOOL)shouldShowTopRowEdge;
- (BOOL)useRoundCorner;
- (unsigned long long)roundCornersForKey:onKeyplane:;
- (id)shiftedWhiteControlKeyTraits;
- (void)setupColumnLayoutSegmentsWithControlWidth:;
- (void)populateFlickGuide:forKey:from:;
+ (BOOL)_isActiveKeyplaneSwitchKey:;
@end
