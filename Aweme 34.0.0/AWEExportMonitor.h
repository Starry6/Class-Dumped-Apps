@interface AWEExportMonitor : NSObject
@property (nonatomic) AWEExportCombineBusinessEventConfigModel ecbeConfigModel;
@property (nonatomic) NSMutableArray hookEvents;
- (id)generateCustomsOutInfosWithUrl:;
- (id)generateRouteOutSession;
- (void)reportBackIfNeededIsCold:;
- (id)buildOutParams:authInfo:status:resultMessage:isForeground:fromScene:leaveType:extraInfo:;
- (id)targetAppForURL:leaveType:;
- (id)mapLeaveType:;
- (void)reportOutWithUrl:authInfo:status:resultMessage:isForeground:;
- (void)reportOutWithType:resultMessage:extraInfo:;
- (id)hookEventList;
- (BOOL)enableHookEvent;
- (BOOL)reportOutHookEventV3:params:;
- (id)ecbeConfigModel;
- (void)setExportCombineBusinessEventWithSession:time:;
- (void)reportExportCombineBusinessEventWithSession:time:;
- (void)reportExportCombineBusinessEventIfNeed;
- (id)hookEvents;
- (void)updateExportCombineBusinessEventIfNeed;
- (id)getExportCombineRouteBizEventWithTime:;
- (void)setEcbeConfigModel:;
- (void)setHookEvents:;
- (id)buildOutPageList:timeStamp:;
- (void)setup;
- (void).cxx_destruct;
- (void)appWillEnterForeground;
+ (id)sharedInstance;
@end
