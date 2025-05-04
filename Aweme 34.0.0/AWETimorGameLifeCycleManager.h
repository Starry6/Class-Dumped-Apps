@interface AWETimorGameLifeCycleManager : NSObject
@property (nonatomic) NSMapTable serviceDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)viewDidLoad:uniqueID:;
- (void)viewWillAppear:uniqueID:;
- (void)viewDidAppear:uniqueID:;
- (void)viewWillDisappear:uniqueID:;
- (void)viewDidDisappear:uniqueID:;
- (void)applicationFirstFrameDidShow:;
- (void)applicationSCFirstFrameDidShow:;
- (void)applicationWarmBootDoneWithUniqueID:;
- (void)applicationWorkBeforeCloseWithUniqueID:closeType:;
- (void)interfaceOrientationChange:targetOrientation:uniqueID:;
- (void)registerLifeCycleService:;
- (void)onGameFirstFrameDidShow:;
- (id)init;
- (void).cxx_destruct;
- (void)setServiceDict:;
- (id)serviceDict;
+ (void)bootstrapLaunch;
+ (id)shareInstance;
@end
