@interface AWEIMLiveRedPacketView : UIView
@property (nonatomic) UIView layoutContainerView;
@property (nonatomic) UILabel liveStateLabel;
@property (nonatomic) LOTAnimationView livingLottieView;
@property (nonatomic) @? tapAction;
@property (nonatomic) AWEIMDouyinRedPacketView redView;
- (id)redView;
- (void)setRedView:;
- (void)p_addGesture;
- (void)p_constraintSubViews;
- (void)p_addSubViews;
- (void)p_onTapCard;
- (id)livingLottieView;
- (void)setLivingLottieView:;
- (id)liveStateLabel;
- (void)setLiveStateLabel:;
- (void)setLayoutContainerView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)layoutContainerView;
- (id)tapAction;
- (void)setTapAction:;
@end
