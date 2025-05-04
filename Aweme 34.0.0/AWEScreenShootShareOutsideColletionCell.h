@interface AWEScreenShootShareOutsideColletionCell : UICollectionViewCell
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLable;
@property (nonatomic) AWEScreenShootBaseViewModel screenShootViewModel;
- (id)titleLable;
- (void)setTitleLable:;
- (id)screenShootViewModel;
- (void)setScreenShootViewModel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (void)updateUI;
- (void)setUpUI;
@end
