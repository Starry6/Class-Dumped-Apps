@interface UIKBRenderFactoryEmoji_iPad_Split : UIKBRenderFactory_Emoji
- (long long)assetIdiom;
- (id)lightKeycapsFontName;
- (double)symbolImageControlKeyFontSize;
- (double)keyCornerRadius;
- (id)backgroundTraitsForKeyplane:;
- (id)_traitsForKey:onKeyplane:;
- (id)messagesWriteboardKeyImageName;
- (BOOL)shouldClearBaseDisplayStringForVariants:;
- (id)thinKeycapsFontName;
- (void)_customizeTraits:forPopupForKey:withRenderingContext:keycapsFontName:;
- (id)emojiPopupTextOffset;
- (double)emojiInternationalKeySize;
- (id)emojiInternationalKeyOffset;
@end
