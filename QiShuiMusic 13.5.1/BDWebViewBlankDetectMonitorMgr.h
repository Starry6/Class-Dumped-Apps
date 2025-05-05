@interface BDWebViewBlankDetectMonitorMgr : NSObject
@property (nonatomic) NSMutableSet monitors;
- (void)addBlankDetectMonitorListener:;
- (void)reportDetectResult:isBlank:detectType:detectImage:error:detectStartTime:;
- (id)monitors;
- (void).cxx_destruct;
- (void)setMonitors:;
+ (id)shareInstance;
@end
