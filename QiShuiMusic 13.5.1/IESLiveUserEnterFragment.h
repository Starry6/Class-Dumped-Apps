@interface IESLiveUserEnterFragment : IESLiveRoomComponent
@property (nonatomic) IESLiveUserEnterStore store;
@property (nonatomic) HTSLiveUserEnterConfiguration configuration;
@property (nonatomic) UIView<HTSLiveUserEnterViewProtocol> userEnterView;
@property (nonatomic) RACDisposable disposable;
@property (nonatomic) q orientation;
@property (nonatomic) <IESLivePerfSampler> perfSampler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPerfSampler:;
- (void)componentCreate;
- (void)bindConfiguration;
- (void)componentBindService;
- (void)componentOrientationChanged:;
- (void)componentUnmount;
- (id)disposable;
- (id)perfSampler;
- (void)playEffectOnUserEnter:;
- (void)playEffectUseUserEnterQueueWithMessage:;
- (void)receiveMemberMessage:;
- (void)registerUserEnterNodeProcessorWithNodeType:;
- (void)remoteRoomDataReady:;
- (void)removeUserEnterView;
- (void)resetUserEnterFrame;
- (void)setDisposable:;
- (void)setUserEnterEnable:;
- (void)setUserEnterOriginY:;
- (void)setUserEnterView:;
- (id)userEnterView;
- (double)userEnterViewHeight;
- (void)userEnterViewProduced:;
- (double)userEnterViewSpacing;
- (void)willAutoRotateToOrientation:size:;
- (void)dealloc;
- (void)setStore:;
- (long long)orientation;
- (void)setConfiguration:;
- (id)configuration;
- (void).cxx_destruct;
- (id)store;
- (void)setOrientation:;
+ (BOOL)isMixed;
+ (BOOL)componentShouldActive:;
@end
