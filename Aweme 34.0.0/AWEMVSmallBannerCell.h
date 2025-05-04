@interface AWEMVSmallBannerCell : AWEDCFeedBaseCell
@property (nonatomic) UIVisualEffectView dislikeMaskView;
@property (nonatomic) UIView feedbackContainerView;
@property (nonatomic) UILabel feedbackTitleLabel;
@property (nonatomic) UILabel feedbackLDescLabel;
@property (nonatomic) UIButton revokeButton;
- (void)configWithModel:context:;
- (id)feedbackTitleLabel;
- (id)revokeButton;
- (void)showFeedbackMask;
- (void)dismissFeedbackMask;
- (id)feedbackContainerView;
- (void)setRevokeButton:;
- (void)setFeedbackTitleLabel:;
- (void)setFeedbackContainerView:;
- (id)feedbackLDescLabel;
- (void)setFeedbackLDescLabel:;
- (void)onClickCloseBtn;
- (void)addFeedbackViews;
- (void)revokeButtonPressed:;
- (id)mvPageContext;
- (id)dislikeMaskView;
- (void)setDislikeMaskView:;
- (void).cxx_destruct;
+ (id)elementArray;
@end
