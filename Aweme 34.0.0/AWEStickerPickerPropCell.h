@interface AWEStickerPickerPropCell : AWEStickerPickerStickerPropNameCell
@property (nonatomic) UIView bgView;
@property (nonatomic) UIView iconContainerView;
- (void)setStickerSelected:animated:;
- (void)tapAnimation;
- (id)placeholderImageName;
- (void)willStartUpdateIcon;
- (void)didEndUpdateIcon;
- (void)modifyConstraints;
- (void)setupPlaceholderView;
- (void)setupCornerRadiusForView:cornerRadius:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)bgView;
- (void)setBgView:;
- (void)updateViews;
- (void)updateCornerRadius;
- (id)iconContainerView;
- (void)setIconContainerView:;
@end
