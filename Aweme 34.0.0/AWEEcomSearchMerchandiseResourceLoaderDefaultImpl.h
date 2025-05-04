@interface AWEEcomSearchMerchandiseResourceLoaderDefaultImpl : NSObject
@property (nonatomic) <AWEEcomSearchMerchandiseResourceLoaderDelegate> delegate;
@property (nonatomic) <AWESearchCachalotDynamicResourceProtocol> dynamicResourceManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)prepareGeckoResource;
- (void)ecomPreloadWithURLArray:;
- (void)getGeckoResourceImageWithName:complete:;
- (void)checkSearchChannelStatusWithForce:;
- (void)prefetchGSImageForResponse:firstScreen:;
- (void)prefetchDynamicPatchImageForResponse:;
- (void)preloadLynxResourceForResponse:isLoadMore:completion:;
- (id)dynamicResourceManager;
- (void)checkDynamicDataList:isLoadMore:completion:;
- (void)setDynamicResourceManager:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
