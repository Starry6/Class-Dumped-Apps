@interface AWEHomePageBubbleDoubleImageLabelContentView : UIView
@property (nonatomic) AWEHomePageBubbleDoubleImageLabelContentConfig config;
@property (nonatomic) UIImageView firstImageView;
@property (nonatomic) UIImageView secondImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImage firstPlaceHolder;
@property (nonatomic) UIImage secondPlaceHolder;
- (void)awe_themeDidChange:;
- (void)setupWithConfig:;
- (id)firstImageView;
- (id)secondImageView;
- (id)firstPlaceHolder;
- (id)secondPlaceHolder;
- (void)setFirstPlaceHolder:;
- (void)setSecondPlaceHolder:;
- (void)setFirstImageView:;
- (void)setSecondImageView:;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)updateImageView;
- (void)updateUI;
@end
