@interface AWEMVDislikeRevokableView : UIView
@property (nonatomic) UIVisualEffectView maskingView;
@property (nonatomic) UIView feedbackContainerView;
@property (nonatomic) UILabel feedbackTitleLabel;
@property (nonatomic) UILabel feedbackLDescLabel;
@property (nonatomic) UIButton revokeButton;
- (id)feedbackTitleLabel;
- (id)revokeButton;
- (id)feedbackContainerView;
- (void)setRevokeButton:;
- (void)setFeedbackTitleLabel:;
- (void)setFeedbackContainerView:;
- (id)feedbackLDescLabel;
- (void)setFeedbackLDescLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)setMaskingView:;
- (id)maskingView;
@end
