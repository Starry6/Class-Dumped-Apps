@interface AWEECPrefetchManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)gurdAccessKey;
+ (void)syncShopGeckoResources;
+ (void)prefetchDataForXTab;
+ (id)triggerMallPrefetch:;
+ (void)prefetchDataForMallInProfileIfNeeded;
+ (void)runPitayaTask:inputParams:completion:;
@end
