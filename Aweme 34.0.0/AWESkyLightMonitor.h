@interface AWESkyLightMonitor : NSObject
@property (nonatomic) NSMutableDictionary monitorDic;
- (id)monitorDic;
- (void)setMonitorDic:;
- (id)actionNameForAction:;
- (id)tabNameForType:;
- (void)startQueryTabType:action:;
- (void)didQueryEndTabType:error:;
- (void)didRenderEndTabType:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
