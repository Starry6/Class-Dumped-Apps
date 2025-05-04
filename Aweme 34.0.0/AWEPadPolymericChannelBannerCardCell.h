@interface AWEPadPolymericChannelBannerCardCell : UICollectionViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UILabel infoLabel;
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) AWEGradientView coverBottomInfoMaskView;
- (id)coverImageView;
- (void)setCoverImageView:;
- (id)coverBottomInfoMaskView;
- (void)setCoverBottomInfoMaskView:;
- (void)configDescMaskViewAlpha:locations:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)layoutSubviews;
- (id)infoLabel;
- (void)setupView;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (void)setInfoLabel:;
@end
