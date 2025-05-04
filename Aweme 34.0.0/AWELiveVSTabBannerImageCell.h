@interface AWELiveVSTabBannerImageCell : UICollectionViewCell
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) AWEGradientView coverBottomInfoMaskView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel descLabel;
- (id)coverImageView;
- (void)setCoverImageView:;
- (id)descLabel;
- (void)setDescLabel:;
- (void)updateImgeUrl:mainTitle:subTitle:;
- (void)updateImgeViewHightWithImage:;
- (id)coverBottomInfoMaskView;
- (void)setCoverBottomInfoMaskView:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)layoutSubviews;
- (void)setupView;
@end
