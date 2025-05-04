@interface AWENearbyDialogLynxContainer : NSObject
@property (nonatomic) AWENearbyResourceOfPopupModel lastModel;
@property (nonatomic) BOOL isLeaveNearbyLifeTab;
@property (nonatomic) NSMutableArray subscribeList;
@property (nonatomic) @? closeBlk;
@property (nonatomic) @? showBlk;
- (id)subscribeList;
- (void)setSubscribeList:;
- (id)lastModel;
- (void)setLastModel:;
- (void)showLynxDialogContainerWithContainerModel:showBlk:closeBlk:isFromTask:;
- (void)enterNearbyLifeTab;
- (void)leaveNearbyLifeTab;
- (void)setCloseBlk:;
- (id)closeBlk;
- (void)setIsLeaveNearbyLifeTab:;
- (void)registerDialogLynxContainerJSEvent;
- (void)execShowLynxDialogContainerWithContainerModel:isFromTask:;
- (BOOL)isLeaveNearbyLifeTab;
- (void)setShowBlk:;
- (BOOL)avoidOtherDialogWithModel:isFromTask:;
- (id)handleSceneSchemaWithModel:;
- (id)showBlk;
- (BOOL)shouldLynxPopAvoidColdLaunch:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)addExtraParams:;
@end
