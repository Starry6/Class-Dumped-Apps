@interface CLHidEventMonitorManager : CLHidEventManager
- (id)initWithDelegate:queue:matching:;
- (void)addSystemClientMatching:;
- (void)removeSystemClientmatching:;
@end
