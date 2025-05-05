@interface HTSLiveRoomGiftManagerDIServiceAssignee : NSObject
@property (nonatomic) <IESLiveUserService> userService;
@property (nonatomic) <IESLiveRoomServiceAdapter> roomService;
@property (nonatomic) <IESLiveInteractionModule> socialAdapter;
@property (nonatomic) <IESLiveRevenueInteractModule> revenueInteractModuleAdapter;
@property (nonatomic) BOOL fluencyOptimize;
@property (nonatomic) NSString currentUserID;
- (void)setRoomService:;
- (void)setUserService:;
- (BOOL)fluencyOptimize;
- (void)didSetAttachingDIContext;
- (BOOL)isPushStreamUser;
- (id)revenueInteractModuleAdapter;
- (id)roomService;
- (void)setCurrentUserID:;
- (void)setFluencyOptimize:;
- (void)setRevenueInteractModuleAdapter:;
- (void)setSocialAdapter:;
- (id)socialAdapter;
- (id)userService;
- (void).cxx_destruct;
- (id)currentUserID;
@end
