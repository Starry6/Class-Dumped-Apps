@interface AWEHomePageBubbleSingleImageLabelContentView : UIView
@property (nonatomic) AWEHomePageBubbleSingleImageLabelContentConfig config;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImage placeHolder;
- (void)awe_themeDidChange:;
- (void)setupWithConfig:;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setImageView:;
- (id)imageView;
- (void)updateImageView;
- (void)updateUI;
- (void)setPlaceHolder:;
- (id)placeHolder;
@end
