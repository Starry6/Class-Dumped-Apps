@interface AWEECShoppingAIGuideScreenShotView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView screenShotView;
@property (nonatomic) UIView feedbackView;
@property (nonatomic) IESECGCDTimer dismissTimer;
@property (nonatomic) <AWEECShoppingAIGuideScreenShotViewDelegate> delegate;
- (id)fallbackSchemaSetting;
- (void)tapFeedbackView:;
- (id)screenShotView;
- (void)showScreenShotWithImage:;
- (void)setScreenShotView:;
- (id)delegate;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)dismissTimer;
- (void)setDismissTimer:;
- (id)feedbackView;
- (void)setFeedbackView:;
- (void)setupUI;
@end
