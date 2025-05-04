@interface AWEStickerPickerOneClickFilmCell : AWEStickerPickerStickerPropNameCell
@property (nonatomic) AWEScrollStringLabel ocfNameLabel;
@property (nonatomic) UIView cutContainerView;
@property (nonatomic) UIImageView cutIconView;
@property (nonatomic) UILabel cutLabel;
- (void)updateUIConfig:;
- (id)propNameLabel;
- (id)cutContainerView;
- (id)cutIconView;
- (id)cutLabel;
- (void)setCutContainerView:;
- (void)setCutIconView:;
- (void)setCutLabel:;
- (double)propNameFontSize;
- (id)ocfNameLabel;
- (void)setOcfNameLabel:;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)setSticker:;
@end
