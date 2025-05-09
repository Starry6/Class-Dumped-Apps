@interface AWENearbyTaskServiceImpl : NSObject
@property (nonatomic) AWENearbyTaskCenter taskCenter;
@property (nonatomic) AWENearbyTaskCommonContext commonContext;
@property (nonatomic) AWENearbyTaskStateManager stateManager;
@property (nonatomic) NSMutableDictionary timers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trigger:;
- (id)initWithPageType:;
- (void)onShowComponentWithType:componentID:coldStartLimited:;
- (void)onHideComponentWithType:componentID:;
- (void)trigger:triggerSource:;
- (void)commitTask:;
- (id)parseTaskWithConfig:;
- (void)commitTasks:;
- (void)addActionForKey:value:;
- (void)revertTasksWithConfig:;
- (BOOL)canComponentShowWithType:componentID:;
- (BOOL)isColdStartShowLimited;
- (void)commitTask:needTrigger:;
- (void)revertTaskWithKey:;
- (id)getCommonContext;
- (BOOL)requestComponentShowWithType:componentID:coldStartLimited:;
- (void)addBasicUiComponentKey;
- (id)taskCenter;
- (id)parseTaskWithConfigString:;
- (void)revertTasksWithConfigString:;
- (void)setTaskCenter:;
- (id)timers;
- (void).cxx_destruct;
- (id)stateManager;
- (id)commonContext;
- (void)setCommonContext:;
- (void)setTimers:;
- (void)setStateManager:;
@end
