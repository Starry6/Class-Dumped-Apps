@interface AWEExportCombineBusinessEventHelper : NSObject
@property (nonatomic) AWEExportCombineBusinessEventConfigModel ecbeConfigModel;
@property (nonatomic) NSMutableArray hookEvents;
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
- (void)reportOutExportCombineBusinessEventIfNeededWithSession:time:;
- (void)reportBackExportCombineBusinessEventIfNeeded:;
- (void)setEcbeConfigModel:;
- (void)setHookEvents:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
