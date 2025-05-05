@interface GEOSearchAttributionManifestManager : NSObject
@property (nonatomic) <GEOSearchAttributionServerProxy> serverProxy;
- (id)serverProxy;
- (id)init;
- (void).cxx_destruct;
- (void)loadAttributionInfoForIdentifiers:completionHandler:;
+ (void)useLocalProxy;
+ (id)sharedManager;
+ (void)useProxy:;
+ (void)setUseLocalProxy:;
+ (void)useRemoteProxy;
@end
