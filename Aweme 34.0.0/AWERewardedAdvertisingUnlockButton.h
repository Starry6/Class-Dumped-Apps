@interface AWERewardedAdvertisingUnlockButton : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UIButton unlockButton;
@property (nonatomic) q state;
@property (nonatomic) @? onClickedBlock;
- (id)onClickedBlock;
- (void)setOnClickedBlock:;
- (void)makeConstraint;
- (void)setUnlockText:;
- (void)didClickUnlockButton:;
- (id)init;
- (id)containerView;
- (long long)state;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setState:;
- (void)setupUI;
- (void)setUnlockButton:;
- (id)unlockButton;
@end
