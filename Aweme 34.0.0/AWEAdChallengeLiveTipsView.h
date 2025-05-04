@interface AWEAdChallengeLiveTipsView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) BDImageView liveAnimationView;
@property (nonatomic) UILabel liveTipsLabel;
@property (nonatomic) UIImageView userImage;
@property (nonatomic) UIView animationContainer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupSubView;
- (void)setLiveAnimationView:;
- (id)liveAnimationView;
- (id)liveTipsLabel;
- (void)updateSubViewWithCardModel:;
- (void)setLiveTipsLabel:;
- (id)init;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (id)animationContainer;
- (void)setAnimationContainer:;
- (void)setUserImage:;
- (id)userImage;
+ (id)formatStringWithUsersCount:;
@end
