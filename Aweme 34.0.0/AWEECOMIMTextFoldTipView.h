@interface AWEECOMIMTextFoldTipView : UIControl
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView arrowImgView;
@property (nonatomic) UIImageView gradientView;
@property (nonatomic) <AWEECOMIMTextFoldTipViewDelegate> delegate;
- (id)arrowImgView;
- (void)setArrowImgView:;
- (id)createImageWithMaskLayerColors:;
- (void)flodOrShowFullText;
- (id)textLabel;
- (id)gradientView;
- (id)delegate;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setGradientView:;
- (void)setDelegate:;
- (void)setSelected:;
- (void)setTextLabel:;
+ (double)textFoldTipHeight;
+ (double)textFoldTipWidth;
@end
