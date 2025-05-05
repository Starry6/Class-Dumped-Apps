@interface UIKBRenderFactoryEmoji_iPad : UIKBRenderFactoryEmoji_iPhone
- (long long)assetIdiom;
- (id)lightKeycapsFontName;
- (double)symbolImageControlKeyFontSize;
- (double)keyCornerRadius;
- (id)_traitsForKey:onKeyplane:;
- (id)messagesWriteboardKeyImageName;
- (BOOL)shouldClearBaseDisplayStringForVariants:;
- (id)thinKeycapsFontName;
- (void)_customizeTraits:forPopupForKey:withRenderingContext:keycapsFontName:;
- (id)emojiPopupTextOffset;
- (double)emojiInternationalKeySize;
- (id)emojiInternationalKeyOffset;
@end
