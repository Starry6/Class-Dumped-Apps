@interface AWELongPressShareOutsidelCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIView imageBackView;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLable;
@property (nonatomic) AWEShareItem item;
- (id)titleLable;
- (void)setTitleLable:;
- (void)setImageBackView:;
- (id)imageBackView;
- (void)setItem:;
- (id)initWithFrame:;
- (id)item;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (void)updateUI;
- (void)setUpUI;
@end
