@interface AWEAssetsCropMaskView : UIView
@property (nonatomic) UIVisualEffectView blurView;
@property (nonatomic) UIView frameView;
@property (nonatomic) {CGSize=dd} frameSize;
@property (nonatomic) {CGPoint=dd} offset;
- (void)setFrameView:;
- (id)initWithFrame:isBlackMask:;
- (void)animateForBlurEffect:animate:;
- (void)refresh;
- (id)blurView;
- (void)setOffset:;
- (id)offset;
- (void)setBlurView:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)frameSize;
- (void)setFrameSize:;
- (id)frameView;
@end
