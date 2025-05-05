@interface GEOSPRMetroAvailabilityFetcher : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)initWithTileLoader:auditToken:;
- (id)initWithTileLoader:auditToken:forceDisableMetros:;
- (void)determineAvailabilityForCoordinate:callbackQueue:completionHandler:;
@end
