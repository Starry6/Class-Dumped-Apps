@interface AWEIMShareSendView : UIView
@property (nonatomic) UIButton shareButton;
@property (nonatomic) UIView gradientMask;
- (void)p_setupUI;
- (void)updateUIWithSelectedCount:;
- (id)gradientMask;
- (void)setGradientMask:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (void)layoutSubviews;
- (void)setShareButton:;
- (id)shareButton;
@end
