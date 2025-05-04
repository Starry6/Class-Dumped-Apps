@interface AWEHPLifeCycleManager : NSObject
@property (nonatomic) NSPointerArray delegateArray;
@property (nonatomic) BOOL isEnterPublishEntrance;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)delegateArray;
- (void)addNotifications;
- (void)setDelegateArray:;
- (void)callEnterBottomTabChannelWithTabId:enterModel:;
- (void)callLeaveBottomTabChannelWithTabId:leaveModel:;
- (void)callLeaveHPSearchEntrance;
- (void)callEnterTopTabChannelWithTabId:enterModel:;
- (void)callLeaveTopTabChannelWithTabId:leaveModel:;
- (void)setIsEnterPublishEntrance:;
- (void)callLeavePublishEntranceIfNeed;
- (BOOL)isEnterPublishEntrance;
- (void)callLeavePublishEntrance;
- (void)callEnterHPSearchEntrance;
- (void)callEnterPublishEntrance;
- (void)registerDelegate:;
- (id)init;
- (void)dealloc;
- (void)removeNotifications;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
