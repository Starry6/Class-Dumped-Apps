@interface AWEIMMsgTailStateView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) AWEIMMessageSendProgressView sendingProgress;
@property (nonatomic) @? tapAction;
- (void)configWithModel:;
- (void)addSubviews;
- (void)setSendingProgress:;
- (id)sendingProgress;
- (id)initWithTapGestureAndFrame:;
- (void)showSendingProgressView:;
- (void)updateSendingProgress:;
- (void)p_viewDidTapped;
- (void)removeRotateAnimation;
- (void)addRotateAnimationIfNeed:;
- (id)initWithFrame:;
- (void)commonInit;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setIconImageView:;
- (id)tapAction;
- (void)setTapAction:;
@end
