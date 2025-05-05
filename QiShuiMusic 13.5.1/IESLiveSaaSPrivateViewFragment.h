@interface IESLiveSaaSPrivateViewFragment : IESLiveRoomComponent
@property (nonatomic) IESLiveSaaSLiveRoomModel room;
@property (nonatomic) UILabel privateView;
@property (nonatomic) UILabel clickView;
@property (nonatomic) UIView containerView;
@property (nonatomic) NSTimer debugInfoUpdateTimer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPrivateView:;
- (void)updateDebugInfo;
- (id)clickView;
- (id)debugInfoUpdateTimer;
- (void)didEnterLiveRoom:;
- (void)didSetAttachingDIContext;
- (id)privateView;
- (void)setClickView:;
- (void)setDebugInfoUpdateTimer:;
- (void)tapClickView:;
- (id)init;
- (void)dealloc;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
+ (id)componentWithRoom:trackContext:componentContext:;
+ (long long)preferredLoadPhase;
@end
