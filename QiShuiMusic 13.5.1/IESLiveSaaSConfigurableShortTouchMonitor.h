@interface IESLiveSaaSConfigurableShortTouchMonitor : NSObject
@property (nonatomic) <IESLiveFullLinkMonitor> innerMonitor;
- (id)categoryWithCode:category1:category2:category3:;
- (void)didSetAttachingDIContext;
- (id)innerMonitor;
- (void)reportContainerDidClickWithStatus:containerType:elementType:extra:;
- (void)reportContainerDidShowWithStatus:containerType:elementType:state:extra:;
- (void)reportDataDidReceivedWithStatus:source:containerType:elementType:extra:;
- (void)reportDowngradeToWebViewWithStatus:elementType:extra:;
- (void)reportEvent:category:metric:extra:;
- (void)reportHybirdLoadResultWithStatus:containerType:elementType:extra:;
- (void)setInnerMonitor:;
- (id)stringForContainerType:;
- (id)stringForDataSource:;
- (id)init;
- (void).cxx_destruct;
+ (id)monitor;
@end
