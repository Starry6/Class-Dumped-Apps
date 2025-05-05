@interface IESLiveSaaSCloseDrawTaskFragment : IESLiveRoomComponent
@property (nonatomic) NSDate enterTime;
@property (nonatomic) IESLiveSaaSMotionGuideStore motionGuideCoordinator;
@property (nonatomic) BOOL isDrawTaskGuideShowed;
@property (nonatomic) BOOL isDrawTaskRemainShowed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)closeGuidePriority;
- (void)componentDidMount;
- (id)drawTaskGuideAlertSchema;
- (id)enterTime;
- (BOOL)isDrawTaskGuideShowed;
- (BOOL)isDrawTaskRemainShowed;
- (id)motionGuideCoordinator;
- (void)setEnterTime:;
- (void)setIsDrawTaskGuideShowed:;
- (void)setIsDrawTaskRemainShowed:;
- (void)setMotionGuideCoordinator:;
- (BOOL)shouldShowCloseDialog;
- (BOOL)shouldShowRemianDialog;
- (BOOL)shouldTriggerNotOnlyOnce;
- (void)showCloseDrawTaskGuideDialog;
- (void)showCloseDrawTaskRemainDialog;
- (BOOL)triggerCloseGuideIfNeed;
- (void).cxx_destruct;
+ (id)componentWithRoom:trackContext:componentContext:;
@end
