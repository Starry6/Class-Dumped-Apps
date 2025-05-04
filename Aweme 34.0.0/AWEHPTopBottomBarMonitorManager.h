@interface AWEHPTopBottomBarMonitorManager : NSObject
@property (nonatomic) AWEHPTabbarShowMonitorManager<AWEHPTopBottombarShowMonitorProtocol> tabbarManager;
- (id)tabbarManager;
- (void)setTabbarManager:;
- (void)setup;
- (void).cxx_destruct;
- (void)startMonitor;
+ (id)shareManager;
@end
