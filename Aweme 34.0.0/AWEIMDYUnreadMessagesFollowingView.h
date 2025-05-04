@interface AWEIMDYUnreadMessagesFollowingView : UIView
@property (nonatomic) YYLabel middleText;
@property (nonatomic) CAGradientLayer leftGradientLayer;
@property (nonatomic) CAGradientLayer rightGradientLayer;
- (id)leftGradientLayer;
- (id)rightGradientLayer;
- (void)setLeftGradientLayer:;
- (void)setRightGradientLayer:;
- (void)setupUnreadLineUI:;
- (void)configMiddleTextWithModel:context:tapMuteHintBlock:;
- (void)configWithModel:context:tapMuteHintBlock:;
- (id)init;
- (id)nextResponder;
- (void).cxx_destruct;
- (id)middleText;
- (void)setMiddleText:;
@end
