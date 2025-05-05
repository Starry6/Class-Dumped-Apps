@interface YYTextContainerView : UIView
@property (nonatomic) UIView hostView;
@property (nonatomic) YYTextDebugOption debugOption;
@property (nonatomic) q textVerticalAlignment;
@property (nonatomic) YYTextLayout layout;
@property (nonatomic) double contentsFadeDuration;
- (void)setDebugOption:;
- (double)contentsFadeDuration;
- (id)debugOption;
- (void)setContentsFadeDuration:;
- (void)setLayout:withFadeDuration:;
- (void)setTextVerticalAlignment:;
- (long long)textVerticalAlignment;
- (id)hostView;
- (void)setHostView:;
- (void)drawRect:;
- (void)setFrame:;
- (void)setLayout:;
- (id)initWithFrame:;
- (id)layout;
- (BOOL)canBecomeFirstResponder;
- (void)setBounds:;
- (void).cxx_destruct;
- (BOOL)canPerformAction:withSender:;
- (id)forwardingTargetForSelector:;
@end
