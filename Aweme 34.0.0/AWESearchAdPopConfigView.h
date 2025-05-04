@interface AWESearchAdPopConfigView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) BDImageView pendantImageView;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) {CGSize=dd} animationSize;
@property (nonatomic) <AWESearchAdPopConfigViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)closeButtonClicked;
- (void)startAnimationWith:completion:;
- (id)pendantImageView;
- (void)setAnimationSize:;
- (id)animationSize;
- (void)setPendantImageView:;
- (id)delegate;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setupUI;
- (void)handleTap:;
- (void)setCloseButton:;
- (id)closeButton;
- (void)updateWith:;
@end
