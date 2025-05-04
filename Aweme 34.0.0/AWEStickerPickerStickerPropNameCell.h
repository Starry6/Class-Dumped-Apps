@interface AWEStickerPickerStickerPropNameCell : AWEStickerPickerStickerCell
@property (nonatomic) AWEScrollStringLabel propNameLabel;
@property (nonatomic) CAGradientLayer propNameGradientLayer;
- (void)updateUIConfig:;
- (void)setStickerSelected:animated:;
- (id)propNameLabel;
- (id)propNameGradientLayer;
- (void)setPropNameLabel:;
- (void)setPropNameGradientLayer:;
- (double)propNameFontSize;
- (id)propNameDefaultColor;
- (id)propNameDefaultFont;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSticker:;
@end
