@interface AWESMSLoginHalfDisplayBackgroudView : UIView
@property (nonatomic) double cornerRadii;
@property (nonatomic) CAShapeLayer contentVievMaskLayer;
- (void)setContentVievMaskLayer:;
- (id)contentVievMaskLayer;
- (id)initWithFrame:cornerRadii:;
- (void)setCornerRadii:;
- (void).cxx_destruct;
- (double)cornerRadii;
- (void)layoutSubviews;
+ (BOOL)isNotchScreen;
@end
