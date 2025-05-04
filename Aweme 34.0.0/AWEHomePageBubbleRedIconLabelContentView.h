@interface AWEHomePageBubbleRedIconLabelContentView : UIView
@property (nonatomic) AWEHomePageBubbleRedIconLabelContentConfig config;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImage placeHolder;
- (void)setupWithConfig:;
- (double)getIconViewWidth;
- (void)setConfig:;
- (id)textFont;
- (id)initWithConfig:;
- (id)config;
- (id)iconView;
- (void)setIconView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)textColor;
- (void)updateImageView;
- (void)updateUI;
- (void)setPlaceHolder:;
- (id)placeHolder;
@end
