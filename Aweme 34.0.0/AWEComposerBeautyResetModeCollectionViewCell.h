@interface AWEComposerBeautyResetModeCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIView backView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) double iconWidth;
- (void)addSubviews;
- (void)setAvailable:;
- (void)setIconImage:;
- (id)initWithFrame:;
- (double)iconWidth;
- (id)iconImageView;
- (id)nameLabel;
- (id)backView;
- (void).cxx_destruct;
- (void)setBackView:;
- (void)setTitle:;
- (void)setIconImageView:;
- (void)setNameLabel:;
- (void)setIconWidth:;
+ (id)identifier;
@end
