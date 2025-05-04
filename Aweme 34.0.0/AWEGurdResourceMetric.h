@interface AWEGurdResourceMetric : NSObject
@property (nonatomic) <AWEStorageServiceFileKitResourceMetricInterface> resourceMetric;
@property (nonatomic) NSDictionary geckoPathMetricChannelDictionary;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)gurdDidFinishApplyingPackageForAccessKey:channel:succeed:error:;
- (void)gurdDidAccessInternalPackageWithAccessKey:channel:path:dataAccessPolicy:;
- (void)gurdDidAccessCachePackageWithAccessKey:channel:path:;
- (void)setResourceMetric:;
- (id)resourceMetric;
- (void)setGeckoPathMetricChannelDictionary:;
- (id)geckoPathMetricChannelDictionary;
- (void)setup;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
