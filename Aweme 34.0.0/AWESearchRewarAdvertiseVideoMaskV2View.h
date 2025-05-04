@interface AWESearchRewarAdvertiseVideoMaskV2View : UIView
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView tipImageView;
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) UIVisualEffectView effectView;
- (id)coverImageView;
- (void)setCoverImageView:;
- (id)tipImageView;
- (void)setTipImageView:;
- (void)addEffectiveView;
- (void)removeEffectView;
- (void)updateTipLabelText:;
- (id)init;
- (id)effectView;
- (id)containerView;
- (void)setEffectView:;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setTipLabel:;
- (id)tipLabel;
- (void)setupUI;
@end
