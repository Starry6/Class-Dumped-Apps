@interface AWEHPMonitorService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)hpTabbarShowMonitorManager;
- (id)hpPerfMetricsMonitorManager;
- (void)rootWindowExecute;
- (BOOL)hpManagerIsReady;
@end
