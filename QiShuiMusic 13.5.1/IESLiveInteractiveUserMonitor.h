@interface IESLiveInteractiveUserMonitor : NSObject
@property (nonatomic) Q scene;
@property (nonatomic) <IESLiveFullLinkMonitor> fullLinkMonitor;
- (void)monitorInformationReport:extra:;
- (id)fullLinkMonitor;
- (id)initWithDIContext:scene:;
- (unsigned long long)moduleForScene;
- (void)setFullLinkMonitor:;
- (void)setScene:;
- (unsigned long long)scene;
- (void).cxx_destruct;
@end
