@interface GEONavRoutePreloadStep : NSObject
@property (nonatomic) BOOL hasError;
@property (nonatomic) BOOL hasLifetimeError;
- (BOOL)hasError;
- (id)init;
- (void)cancel;
- (void).cxx_destruct;
- (id)description;
- (double)networkDataRateKB;
- (id)initWithAuditToken:highZoomMetrosAvailabilityFetcher:assetMetadataFetcher:preloaderSignpostID:;
- (BOOL)okToLoad;
- (BOOL)hasLifetimeError;
- (void)resetErrors;
- (void)encounteredErrors:;
- (void)loadWithCallbackQueue:requireWiFi:willLoadHandler:progressHandler:finishedHandler:errorHandler:;
- (void)_loadAssetMetadataRequireWiFi:unsuccessfulKeysAccumulator:errorsAccumulator:queue:willLoadHandler:progressHandler:completionHandler:;
- (void)_loadTiles:requireWiFi:unsuccessfulKeysAccumulator:errorsAccumulator:queue:group:willLoadHandler:progressHandler:;
@end
