@interface IESLiveAudioThemeUploadCell : UICollectionViewCell
@property (nonatomic) UIView bgView;
@property (nonatomic) UIView centerContainer;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) UILabel titleLabel;
- (void)setTitleLabel:;
- (void)setDescriptionLabel:;
- (id)initWithFrame:;
- (id)descriptionLabel;
- (void).cxx_destruct;
- (id)imageView;
- (id)titleLabel;
- (void)setImageView:;
- (id)bgView;
- (void)setBgView:;
- (void)setupViews;
- (id)centerContainer;
- (void)setCenterContainer:;
@end
