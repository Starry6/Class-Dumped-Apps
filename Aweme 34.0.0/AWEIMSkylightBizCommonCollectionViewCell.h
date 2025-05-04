@interface AWEIMSkylightBizCommonCollectionViewCell : AWEIMSkylightBaseCollectionViewCell
@property (nonatomic) AWEIMSkylightDotView commonDotView;
- (void)awe_themeReload;
- (void)renderWithModel:;
- (id)commonDotView;
- (void)createComponents;
- (void)setCommonDotView:;
- (void)renderColorRingViewWithModel:;
- (id)p_initAvatarView;
- (void)cancelAvatarImageRequestAndHidden;
- (void)renderAvatarWithModel:;
- (void)renderIconWithModel:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)layoutComponents;
@end
