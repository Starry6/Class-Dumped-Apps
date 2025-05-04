@interface AWEDCFeedDislikeRevokableView : UIView
@property (nonatomic) UIVisualEffectView maskingView;
@property (nonatomic) UIView feedbackContainerView;
@property (nonatomic) UIButton revokeButton;
@property (nonatomic) UILabel feedbackTitleLabel;
@property (nonatomic) UILabel feedbackDescLabel;
- (void)p_setupUI;
- (void)p_addGesture;
- (id)feedbackTitleLabel;
- (id)feedbackDescLabel;
- (id)revokeButton;
- (void)showFeedbackMask;
- (id)feedbackContainerView;
- (void)blockTap;
- (void)setRevokeButton:;
- (void)setFeedbackTitleLabel:;
- (void)setFeedbackDescLabel:;
- (void)setFeedbackContainerView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setMaskingView:;
- (id)maskingView;
@end
