@interface IESLatchContext : NSObject
@property (nonatomic) <IESLatchJSDataProviderProtocol> jsDataProvider;
@property (nonatomic) <IESLatchMonitorProtocol> monitor;
- (id)jsDataProvider;
- (void)setJsDataProvider:;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
@end
