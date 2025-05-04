@interface AWEUGTabSwitchEventListener : NSObject
@property (nonatomic) NSArray eventsList;
@property (nonatomic) NSDictionary tabParams;
@property (nonatomic) NSDictionary installParams;
@property (nonatomic) BOOL isPitayaReady;
- (id)tabParams;
- (BOOL)isPitayaReady;
- (void)startMonitorTabSwitchEvent;
- (void)p_reportPitayaMock;
- (id)eventsList;
- (BOOL)monitorTabSwitchEvent:params:;
- (void)setTabParams:;
- (void)setInstallParams:;
- (id)installParams;
- (void)setEventsList:;
- (void)setIsPitayaReady:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
