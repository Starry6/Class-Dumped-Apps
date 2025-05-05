@interface UIKeyboardGlobeKeyIntroductionView : UIView
@property (nonatomic) @? completionBlock;
@property (nonatomic) _UIBackdropView backdropView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UITextView descriptionLabel;
@property (nonatomic) UIButton continueButton;
@property (nonatomic) NSDate startDate;
- (id)backdropView;
- (id)startDate;
- (void)setTitleLabel:;
- (void)setStartDate:;
- (void)layoutSubviews;
- (void)setCompletionBlock:;
- (void)setBackdropView:;
- (void)setDescriptionLabel:;
- (id)descriptionLabel;
- (void).cxx_destruct;
- (id)completionBlock;
- (id)titleLabel;
- (void)continueButtonTapped;
- (id)initWithFrame:completion:;
- (long long)backdropStyleForRenderConfig:;
- (id)continueButton;
- (void)setContinueButton:;
@end
