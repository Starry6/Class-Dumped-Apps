@interface UIKBRenderFactoryNumberPadLandscape : UIKBRenderFactoryNumberPad
- (double)numberFontSize;
- (double)letterFontSize;
- (id)deleteGlyphOffset;
- (id)dictationGlyphOffset;
- (id)leftColumnNumberOffset;
- (id)leftColumnLetterOffset;
- (id)centerColumnNumberOffset;
- (id)centerColumnLetterOffset;
- (id)rightColumnNumberOffset;
- (id)rightColumnLetterOffset;
- (id)loneZeroOffset;
- (id)specialSymbolOffset;
- (void)_customizeSymbolStyle:secondaryStyle:forKey:contents:;
@end
