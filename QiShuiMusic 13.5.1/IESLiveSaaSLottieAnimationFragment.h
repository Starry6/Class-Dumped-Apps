@interface IESLiveSaaSLottieAnimationFragment : IESLiveRoomComponent
@property (nonatomic) LOTAnimationView lotAnimationView;
@property (nonatomic) IESLiveSaaSLiveRoomModel room;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMount;
- (void)createAnimation:;
- (void)didSetAttachingDIContext;
- (void)finishAnimationAndRemoveAnimationView;
- (id)lotAnimationView;
- (id)p_getLottieJsonFile:;
- (void)p_showAnimationWithPath:autoFinished:startPlay:endPlay:failPlay:;
- (id)pp_getLottieJsonFile:;
- (void)setLotAnimationView:;
- (void)showLottieAnimationWithLottieId:autoFinished:startPlay:endPlay:failPlay:;
- (void).cxx_destruct;
+ (id)componentWithRoom:trackContext:componentContext:;
@end
