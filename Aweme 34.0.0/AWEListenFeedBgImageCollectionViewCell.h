@interface AWEListenFeedBgImageCollectionViewCell : UICollectionViewCell
@property (nonatomic) AWEGradientView gradientView;
@property (nonatomic) UIImageView bgImageView;
@property (nonatomic) UIImage defaultBgImage;
@property (nonatomic) UIView bgColorMaskView;
@property (nonatomic) BOOL shouldUseMask;
- (void)setShouldUseMask:;
- (id)defaultBgImage;
- (void)updateWithModel:playModel:placeholderImage:context:;
- (void)setDefaultBgImage:;
- (id)bgColorMaskView;
- (void)updateBackgroundImageViewWithModel:playModel:placeholderImage:;
- (id)getBlendColorFromImage:;
- (id)convertImage:withBlendColor:;
- (id)convertImage:withBlur:;
- (id)convertImage:;
- (BOOL)shouldUseMask;
- (void)setBgColorMaskView:;
- (id)gradientView;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setGradientView:;
- (void)layoutSubviews;
- (id)initWithCoder:;
- (void)setupUI;
- (void)setBgImageView:;
- (id)bgImageView;
@end
