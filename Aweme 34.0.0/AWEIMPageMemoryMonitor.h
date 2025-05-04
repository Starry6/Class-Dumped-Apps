@interface AWEIMPageMemoryMonitor : AWEIMPageEnvironmentMonitor
- (id)initWithPageName:;
- (id)trackerEventName;
- (id)fetchEnvironmentWithSession:fireType:;
- (void).cxx_destruct;
- (void)setupSession:;
@end
