@interface PGStashedMaskView : UIView
@property (nonatomic) UIView tabShadowView;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} tabViewBounds;
@property (nonatomic) {CGSize=dd} minimumStashTabSize;
- (void)layoutSubviews;
- (void)_setContinuousCornerRadius:;
- (BOOL)pointInside:withEvent:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (double)_continuousCornerRadius;
- (void)setMinimumStashTabSize:;
- (id)minimumStashTabSize;
- (id)initWithFrame:minimumStashTabSize:;
- (void)setTabHidden:left:;
- (id)tabViewBounds;
- (id)_mainBodyBounds;
- (id)tabShadowView;
- (void)setTabShadowView:;
@end
