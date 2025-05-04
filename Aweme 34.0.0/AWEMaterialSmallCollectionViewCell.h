@interface AWEMaterialSmallCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIView contentBackgroundView;
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView tailImageView;
@property (nonatomic) UIView skeletonView;
- (id)skeletonView;
- (void)setSkeletonView:;
- (id)coverImageView;
- (void)setCoverImageView:;
- (void)setupSkeletonMode;
- (void)configWithModel:coverLoadCompletion:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTailImageView:;
- (id)tailImageView;
- (id)contentBackgroundView;
- (void)setContentBackgroundView:;
- (void)setUpUI;
+ (id)reuseIdentifier;
@end
