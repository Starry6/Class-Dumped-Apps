@interface AWEPluginDiskResourceMetricImpl : NSObject
@property (nonatomic) <AWEStorageServiceFileKitResourceMetricInterface> pkgMetricDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pkgMetricDelegate;
- (void)metricPKGResourceWithAppid:type:;
- (void)setPkgMetricDelegate:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedPlugin;
@end
