@interface AWEHPTabbarShowAutoRecoverManager : NSObject
@property (nonatomic) AWEHPTabbarShowMonitorManager monitorManager;
- (id)monitorManager;
- (void)setMonitorManager:;
- (void)p_recoverWhenException:timingType:isRoot:;
- (id)initWithMonitorManager:;
- (void)recoverWhenException:timingType:isRoot:;
- (void).cxx_destruct;
@end
