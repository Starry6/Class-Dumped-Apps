@interface AWEPlayInteractionRetrieveDisableRecommendUserBottomView : UIView
@property (nonatomic) UIView backgroundContainerView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel titleLabelAfterClickedConfirm;
@property (nonatomic) DUXBaseButton confirmButton;
@property (nonatomic) @? tappedConfirmButtonBlock;
- (void)didTapConfirmButton:;
- (void)performSuccessAnimated:;
- (void)setTappedConfirmButtonBlock:;
- (id)titleLabelAfterClickedConfirm;
- (id)tappedConfirmButtonBlock;
- (void)setTitleLabelAfterClickedConfirm:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (id)confirmButton;
- (void)setConfirmButton:;
- (id)backgroundContainerView;
- (void)setBackgroundContainerView:;
@end
