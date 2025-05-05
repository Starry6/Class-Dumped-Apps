@interface AWEIMShareSendView : UIView
@property (nonatomic) UIButton shareButton;
@property (nonatomic) UIView gradientMask;
- (id)gradientMask;
- (void)p_setupUI;
- (void)setGradientMask:;
- (void)updateUIWithSelectedCount:;
- (void)layoutSubviews;
- (id)hitTest:withEvent:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)shareButton;
- (void)setShareButton:;
@end
