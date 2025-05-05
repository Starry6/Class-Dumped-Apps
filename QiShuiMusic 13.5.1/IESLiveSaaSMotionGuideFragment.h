@interface IESLiveSaaSMotionGuideFragment : IESLiveRoomComponent
@property (nonatomic) IESLiveSaaSMotionGuideStore motionGuideCoordinator;
@property (nonatomic) NSMutableArray lockTypeList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)unlockWithType:;
- (void)componentDidAppear;
- (void)didSetAttachingDIContext;
- (id)lockTypeList;
- (void)lockWithType:;
- (id)motionGuideCoordinator;
- (void)setLockTypeList:;
- (void)setMotionGuideCoordinator:;
- (void)showSwipeGuideIfNeeds;
- (id)init;
- (void).cxx_destruct;
+ (id)componentWithRoom:trackContext:componentContext:;
@end
