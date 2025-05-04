@interface AWEVideoProductTipsTagView : UIView
@property (nonatomic) UILabel label;
@property (nonatomic) CAShapeLayer backgroundLayer;
@property (nonatomic) NSString textInfo;
- (void)reloadBackground;
- (void)setLabel:;
- (id)initWithFrame:;
- (void)setup;
- (id)label;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)backgroundLayer;
- (void)setBackgroundLayer:;
- (void)setTextInfo:;
- (id)textInfo;
@end
