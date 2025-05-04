@interface AWEUGFCollectShareSuccessToast : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
- (void)setupSubViews;
- (id)init;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setImageView:;
- (id)imageView;
+ (void)showToastWithGoldAmount:text:size:;
+ (void)showToastWithGoldAmount:;
+ (id)viewSize;
+ (id)iconSize;
+ (double)iconTitlePadding;
@end
