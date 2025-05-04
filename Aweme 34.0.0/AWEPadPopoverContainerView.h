@interface AWEPadPopoverContainerView : UIView
@property (nonatomic) UIView targetView;
@property (nonatomic) double marginBottom;
@property (nonatomic) double cornerRadius;
- (void)updateMaskLayer;
- (id)bezierPathPoints;
- (id)targetView;
- (void)setCornerRadius:;
- (id)initWithFrame:;
- (void)setTargetView:;
- (void).cxx_destruct;
- (double)cornerRadius;
- (void)layoutSubviews;
- (double)marginBottom;
- (void)setMarginBottom:;
@end
