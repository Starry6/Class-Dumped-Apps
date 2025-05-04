@interface AWEBigBubbleContainerView : UIView
@property (nonatomic) BDImageView leftIcon;
@property (nonatomic) UILabel popoverLabel;
@property (nonatomic) double intrinsicContentSizeWidth;
@property (nonatomic) AWEHomePageBubbleBigLabelContentConfig config;
- (void)setLeftIcon:;
- (void)setupUIWithConfig:;
- (id)popoverLabel;
- (void)setIntrinsicContentSizeWidth:;
- (double)intrinsicContentSizeWidth;
- (void)setPopoverLabel:;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)intrinsicContentSize;
- (id)config;
- (void).cxx_destruct;
- (id)leftIcon;
@end
