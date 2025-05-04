@interface AWELongPressAdAttitudeContainerCellV2V3 : AWELongPressAdAttitudeContainerCell
@property (nonatomic) UIView reasonContainerView;
@property (nonatomic) UIButton submitFeedbackButton;
@property (nonatomic) UIView bubbleView;
- (void)feedbackReasonOnClick:;
- (void)buttonClickUIChangeHelper:;
- (void)likeButtonOnClick:;
- (void)notInterestionButtonOnClick:;
- (id)submitFeedbackButton;
- (id)reasonContainerView;
- (void)setReasonContainerView:;
- (void)layoutReasonViewAtIndex:;
- (void)resetReasonHelper;
- (void)setSubmitFeedbackButton:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)bubbleView;
- (void)setBubbleView:;
@end
