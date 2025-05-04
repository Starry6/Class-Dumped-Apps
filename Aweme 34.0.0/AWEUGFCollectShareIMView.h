@interface AWEUGFCollectShareIMView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIImageView capsuleView;
@property (nonatomic) UILabel capsuleLabel;
@property (nonatomic) UILabel titleLabel;
- (id)capsuleLabel;
- (void)setCapsuleLabel:;
- (id)capsuleView;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setCapsuleView:;
- (void)setImageView:;
- (void)updateWithItem:;
- (id)imageView;
- (void)setupSubviews;
+ (id)titleTextColorForStyle:;
+ (id)imageBadgeColor;
+ (id)capsuleSize;
+ (id)iconSize;
+ (double)iconTitlePadding;
@end
