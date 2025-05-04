@interface AWEUserButtonState : BDStateMachineState
@property (nonatomic) UIButton button;
@property (nonatomic) @? clickBlock;
@property (nonatomic) @? accessibilityClickBlock;
@property (nonatomic) @? customRefreshButtonBlock;
- (void)setClickBlock:;
- (id)clickBlock;
- (void)refreshWithTitle:isAttention:;
- (void)refreshWithTitle:image:isAttention:;
- (void)setCustomRefreshButtonBlock:;
- (void)refreshWithTitle:image:padding:isAttention:;
- (id)accessibilityClickBlock;
- (id)customRefreshButtonBlock;
- (void)updateAccessibilityName:;
- (void)accessibilityClick;
- (void)setAccessibilityClickBlock:;
- (void).cxx_destruct;
- (id)button;
- (void)click;
+ (id)stateWithID:enterBlock:leaveBlock:clickBlock:;
@end
