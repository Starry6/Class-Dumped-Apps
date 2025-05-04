@interface AWEHomePageBubbleIconLabelContentView : UIView
@property (nonatomic) AWEHomePageBubbleIconLabelContentConfig config;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImage placeHolder;
- (void)awe_themeDidChange:;
- (void)setupWithConfig:;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (id)iconView;
- (void)setIconView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)updateImageView;
- (void)updateUI;
- (void)setPlaceHolder:;
- (id)placeHolder;
@end
