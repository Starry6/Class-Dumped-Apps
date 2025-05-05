@interface CSJNativeExpressRewardUpSwipBottomView : UIView
@property (nonatomic) UIView arrowView;
@property (nonatomic) UIImageView arrowUp;
@property (nonatomic) UIImageView arrowBottom;
@property (nonatomic) UILabel label;
- (id)arrowUp;
- (void)setArrowBottom:;
- (id)arrowAnimationGroup:;
- (id)arrowBottom;
- (void)setArrowUp:;
- (void)setLabel:;
- (id)label;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)arrowView;
- (void)setArrowView:;
- (void)setupViews;
@end
