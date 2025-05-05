@interface UIKBRenderFactoryEmoji_iPhone : UIKBRenderFactory_Emoji
- (long long)assetIdiom;
- (double)symbolImageControlKeyFontSize;
- (id)_traitsForKey:onKeyplane:;
- (id)traitsHashStringForKey:withGeometry:withSymbolStyle:controlOpacities:blurBlending:;
- (BOOL)shouldClearBaseDisplayStringForVariants:;
- (id)emojiPopupTextOffset;
- (double)emojiInternationalKeySize;
- (id)emojiInternationalKeyOffset;
@end
