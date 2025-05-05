@interface UIKBRenderFactory_MonolithLinear : UIKBRenderFactory_Monolith
- (double)tldKeyFontSize;
- (double)tldKeyFontWeight;
- (BOOL)forceVariantsInsideKeyplane;
- (void)configureSymbolStyle:forControlKey:;
- (void)configureGeometry:forControlKey:;
- (id)_enabledTraitsForControlKey:;
- (id)_highlightedTraitsForControlKey:;
- (double)pillControlKeyFontSize;
- (double)pillControlKeyHeight;
- (id)pillControlKeyPillBackgroundColor;
- (id)pillControlKeyFocusIncreaseSize;
@end
