@interface AWEGrouponHalfScreenContainerArrowView : UIView
@property (nonatomic) UIImageView noarmoalArrowImageView;
@property (nonatomic) UIImageView targetImageView;
@property (nonatomic) UIImageView arrowHeadImgView;
@property (nonatomic) UIImageView arrowNockImgView;
@property (nonatomic) @? touchTargetBlk;
- (id)targetImageView;
- (void)setTargetImageView:;
- (id)arrowHeadImgView;
- (void)setArrowHeadImgView:;
- (id)arrowNockImgView;
- (void)setArrowNockImgView:;
- (id)touchTargetBlk;
- (id)noarmoalArrowImageView;
- (void)setNoarmoalArrowImageView:;
- (void)setTouchTargetBlk:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
@end
