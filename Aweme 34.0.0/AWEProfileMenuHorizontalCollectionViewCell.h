@interface AWEProfileMenuHorizontalCollectionViewCell : UICollectionViewCell
@property (nonatomic) Q modelShapeType;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView bgView;
@property (nonatomic) Q type;
- (void)configWithModel:;
- (void)__setupUI;
- (void)setModelShapeType:;
- (unsigned long long)modelShapeType;
- (id)iconView;
- (unsigned long long)type;
- (void)setHighlighted:;
- (void)setIconView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)bgView;
- (void)setBgView:;
@end
