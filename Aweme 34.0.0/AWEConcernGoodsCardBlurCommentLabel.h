@interface AWEConcernGoodsCardBlurCommentLabel : UIView
@property (nonatomic) AWEConcernGoodsCardInsetsLabel commentLabel;
@property (nonatomic) AWEBlurGradientView backgroundView;
@property (nonatomic) UIColor leftColor;
@property (nonatomic) UIColor rightColor;
- (void)__setupUI;
- (void)__buildUI;
- (void)setLeftColor:;
- (id)leftColor;
- (void)setRightColor:;
- (id)rightColor;
- (void)configWithComment:andColors:;
- (void)setBackgroundView:;
- (id)initWithFrame:;
- (id)backgroundView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)commentLabel;
- (void)setCommentLabel:;
@end
