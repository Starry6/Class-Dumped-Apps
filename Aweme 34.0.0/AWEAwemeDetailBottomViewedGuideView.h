@interface AWEAwemeDetailBottomViewedGuideView : UIView
@property (nonatomic) UIView overlayView;
@property (nonatomic) UIView arrowImageView;
@property (nonatomic) UIView bgView;
@property (nonatomic) @? completionBlock;
- (void)startArrowImageAnimating;
- (void)hideWithAllowUserInteraction:;
- (id)initWithClickbleBottomHeight:;
- (void)showAboveView:dismissBlock:;
- (id)overlayView;
- (void)layoutSublayersOfLayer:;
- (BOOL)pointInside:withEvent:;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (void)setOverlayView:;
- (void).cxx_destruct;
- (id)bgView;
- (void)setBgView:;
- (id)arrowImageView;
- (void)setArrowImageView:;
+ (BOOL)isShowing;
+ (void)setShowing:;
@end
