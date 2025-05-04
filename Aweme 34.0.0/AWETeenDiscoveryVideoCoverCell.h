@interface AWETeenDiscoveryVideoCoverCell : UICollectionViewCell
@property (nonatomic) UIImageView coverView;
@property (nonatomic) YYLabel titleLabel;
@property (nonatomic) UIImageView playIconImageView;
@property (nonatomic) UILabel playCountLabel;
@property (nonatomic) AWEGradientView gradientView;
- (id)playIconImageView;
- (void)setPlayIconImageView:;
- (void)configCellWithModel:;
- (id)playCountLabel;
- (void)setPlayCountLabel:;
- (id)gradientView;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setGradientView:;
- (id)titleLabel;
- (id)coverView;
- (void)setCoverView:;
- (void)setupView;
+ (id)cellSizeWithModel:constraintWidth:;
+ (id)footerSizeWithModel:constraintWidth:;
+ (id)titleAttrStrWithModel:;
+ (double)titleHeightWithAttrStr:cellWidth:;
@end
