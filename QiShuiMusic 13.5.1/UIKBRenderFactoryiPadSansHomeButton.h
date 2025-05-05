@interface UIKBRenderFactoryiPadSansHomeButton : UIKBRenderFactoryiPad
- (double)symbolImageControlKeyFontSize;
- (double)keyCornerRadius;
- (id)_traitsForKey:onKeyplane:;
- (id)displayContentsForKey:;
- (double)stringKeyFontSize;
- (id)symbolImageControlKeyOffset;
- (BOOL)iPadSansHomeButtonLayout;
- (void)_customizeGeometry:forKey:contents:;
- (double)controlKeyFontSize;
- (id)iPadFudgeControlKeyOffset;
- (double)dualStringKeyBottomFontSize;
- (id)dualStringKeyBottomTextOffset;
- (double)dualStringKeyTopFontSize;
- (id)dualStringKeyTopTextOffset;
- (BOOL)_displaysAsControlKeyStyle:;
@end
