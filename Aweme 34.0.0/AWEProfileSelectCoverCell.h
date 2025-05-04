@interface AWEProfileSelectCoverCell : UICollectionViewCell
@property (nonatomic) BDImageView imageView;
@property (nonatomic) AWEGradientView maskLayer;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel countLabel;
- (void)updateCoverWithModel:;
- (void)refreshWithAwemeModel:isRecommend:;
- (id)initWithFrame:;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (id)maskLayer;
- (void)setupUI;
- (void)setMaskLayer:;
- (id)countLabel;
- (void)setCountLabel:;
+ (id)awemeCoverURLWithAwemeModel:;
@end
