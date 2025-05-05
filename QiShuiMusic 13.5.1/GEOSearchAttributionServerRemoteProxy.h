@interface GEOSearchAttributionServerRemoteProxy : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)loadAttributionInfoForIdentifiers:completionHandler:;
- (id)_attributionManifest;
- (void)_loadAttributionInfoForIdentifiers:completionHandler:;
@end
