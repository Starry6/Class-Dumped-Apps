@interface IESECBackgroundView : IESECGradientView
@property (nonatomic) IESECBackgroundDescribeInfo backgroundInfo;
@property (nonatomic) IESECLLDCImageView backgroundImageView;
@property (nonatomic) UIView maskView;
- (void)addBackgroundImage;
- (id)backgroundInfo;
- (void)setBackgroundInfo:;
- (void)updateBackgroundWithBackgroundInfo:;
- (id)backgroundImageView;
- (id)maskView;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setMaskView:;
- (void)setBackgroundImageView:;
- (void)setImageViewContentMode:;
@end
