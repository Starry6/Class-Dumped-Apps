@interface AWEIMSmallCardView : UIView
@property (nonatomic) UIView imageContainer;
@property (nonatomic) AWEIMRefreshImageView imageView;
@property (nonatomic) AWEIMShapeView imageBorderShapeView;
@property (nonatomic) UIView<IESIMGradientViewProtocol> imageGradientView;
@property (nonatomic) UIStackView titleContainer;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) @? tapActionBlock;
@property (nonatomic) AWEIMAlphaTapGesture alphaTapGesture;
- (id)tapActionBlock;
- (void)setTapActionBlock:;
- (void)p_addSubViews;
- (void)p_didTappedCard:;
- (id)alphaTapGesture;
- (void)p_setupUIWithConfig:;
- (void)p_setupConstraintsWithConfig:;
- (void)p_createViewsWithConfig:;
- (void)setImageBorderShapeView:;
- (id)imageBorderShapeView;
- (void)setImageGradientView:;
- (id)imageGradientView;
- (void)p_updateImageContainerWithConfig:;
- (void)p_updateTitleContainerWithConfig:;
- (id)initWithConfig:;
- (void)updateWithConfig:;
- (void)setSubtitleLabel:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setImageView:;
- (id)subtitleLabel;
- (id)imageView;
- (id)imageContainer;
- (void)setImageContainer:;
- (void)setTitleContainer:;
- (id)titleContainer;
@end
