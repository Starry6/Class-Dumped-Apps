@interface AWEMVPadAuthorRecommendIconCell : UICollectionViewCell
@property (nonatomic) BDImageView coverImgView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UIView errorView;
@property (nonatomic) UIImageView errorImage;
@property (nonatomic) UILabel errorTitle;
@property (nonatomic) UILabel errorSubTitle;
- (void)setupSubViews;
- (id)errorImage;
- (void)setErrorImage:;
- (id)coverImgView;
- (void)setCoverImgView:;
- (id)errorSubTitle;
- (void)configWithUserModel:context:;
- (void)setErrorSubTitle:;
- (id)initWithFrame:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setNameLabel:;
- (id)errorTitle;
- (void)setErrorTitle:;
- (id)errorView;
- (void)setErrorView:;
@end
