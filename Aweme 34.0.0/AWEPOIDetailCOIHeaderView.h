@interface AWEPOIDetailCOIHeaderView : UICollectionReusableView
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView imageLeft1;
@property (nonatomic) UIImageView imageLeft2;
@property (nonatomic) UIImageView imageRight1;
@property (nonatomic) UIImageView imageRight2;
@property (nonatomic) UIView bottomBGView;
- (void)configWithTitle:;
- (id)bottomBGView;
- (id)imageLeft1;
- (void)setImageLeft1:;
- (id)imageLeft2;
- (void)setImageLeft2:;
- (id)imageRight1;
- (void)setImageRight1:;
- (id)imageRight2;
- (void)setImageRight2:;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
@end
