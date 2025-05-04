@interface AWEPublishSuccessViewModern : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UIStackView textContainerView;
@property (nonatomic) @? bindAction;
- (id)coverImageView;
- (void)setCoverImageView:;
- (void)setupContainerView;
- (id)initWithAweme:type:title:;
- (void)setBindAction:;
- (void)setupCoverWithModel:;
- (void)setupTextWithModel:type:title:;
- (void)setupButtonsWithType:;
- (id)bindAction;
- (id)intrinsicContentSize;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)actionButtonTapped;
- (void)setTextContainerView:;
- (id)textContainerView;
@end
