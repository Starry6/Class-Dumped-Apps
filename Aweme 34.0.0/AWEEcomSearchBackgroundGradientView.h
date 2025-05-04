@interface AWEEcomSearchBackgroundGradientView : UIView
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) AWESearchBackgroundGradientModel model;
- (void)updateGradientColor;
- (void)setModel:;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)gradientLayer;
- (void)setGradientLayer:;
- (void)updateWithModel:;
@end
