@interface IESLiveSaaSNotificationsFragment : IESLiveRoomComponent
@property (nonatomic) IESLiveSaaSAnimationStore store;
@property (nonatomic) IESLiveSaaSNativeAnimationScheduler engine;
@property (nonatomic) UIView animationContainer;
@property (nonatomic) <IESLiveSaaSURLSchemaHandler> schemaHandler;
@property (nonatomic) <IESLiveSaaSFeedDrawerProvider> drawerProvider;
@property (nonatomic) HTSEventContext context;
@property (nonatomic) IESLiveSaaSComponentContext componentContext;
@property (nonatomic) q orientation;
@property (nonatomic) BOOL isHideComponent;
@property (nonatomic) <IESLiveSaaSMessageOptimizeService> messageOptimizeService;
@property (nonatomic) BOOL enableOptimizeRocket;
@property (nonatomic) NSObject<OS_dispatch_queue> rocketProcessQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dispatchCommonToastWithMessage:;
- (id)getMessageType:;
- (BOOL)isHideComponent;
- (BOOL)_enableShowNotifications;
- (void)addFakeNotifyMessage:bgImageUrlList:;
- (void)componentDidMount;
- (void)componentOrientationChanged:;
- (id)convertBackgroundImageWithImage:;
- (void)didSetAttachingDIContext;
- (void)dispatchActivityPrizeAnimationWithMessage:;
- (void)dispatchFansClubAnimationWithMessage:;
- (void)dispatchFansClubAnimationWithSaaSMessage:;
- (void)dispatchRocketAnimationWithMessage:;
- (void)dispatchToastWithMessage:;
- (void)dispatchTop20AnchorAnimationWithMessage:;
- (id)drawerProvider;
- (void)enableAnimationQueueConsume:;
- (BOOL)enableOptimizeRocket;
- (void)hideComponent;
- (void)hideContainer;
- (BOOL)isAllowNotifyMessageWithStr:;
- (BOOL)isVipNotifyWithName:;
- (id)messageOptimizeService;
- (void)p_dispatchFansClubAnimationWithMessage:onQueue:;
- (void)p_dispatchFansClubAnimationWithSaaSMessage:onQueue:;
- (void)p_dispatchRocketAnimationWithMessage:userModel:onQueue:;
- (void)remakeAnimationContainerConstrants;
- (id)rocketProcessQueue;
- (id)schemaHandler;
- (void)setDrawerProvider:;
- (void)setEnableOptimizeRocket:;
- (void)setFilterPredicateForNotifyMessage:;
- (void)setIsHideComponent:;
- (void)setMessageOptimizeService:;
- (void)setRocketProcessQueue:;
- (void)setSchemaHandler:;
- (void)showComponent;
- (void)showContainer;
- (void)trackLiveShowWithRoomID:params:messageType:anchorId:;
- (void)trackPrizeNoticeAnimationShowWithParams:;
- (void)trackTopMessageWithActionType:params:messageType:;
- (void)updateContentZ;
- (id)engine;
- (void)setEngine:;
- (void)setStore:;
- (id)context;
- (long long)orientation;
- (void).cxx_destruct;
- (id)store;
- (void)setContext:;
- (void)setOrientation:;
- (id)animationContainer;
- (void)setAnimationContainer:;
+ (id)componentWithRoom:trackContext:componentContext:;
+ (long long)preferredLoadPhase;
@end
