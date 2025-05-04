@interface AWEProfileHeaderColorfulView : UIView
@property (nonatomic) AWEProfileHeaderContext context;
@property (nonatomic) CAGradientLayer radialLayer;
@property (nonatomic) CAGradientLayer linearLayer;
- (void)setLinearLayer:;
- (id)linearLayer;
- (void)setRadialLayer:;
- (id)radialLayer;
- (void)p_refreshColors;
- (id)initWithFrame:;
- (void)setContext:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)context;
- (void)updateWithContext:;
@end
