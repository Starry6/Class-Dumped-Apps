@interface GEOSearchAttributionServerLocalProxy : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)resourceManifestManagerDidChangeActiveTileGroup:;
- (void)loadAttributionInfoForIdentifiers:completionHandler:;
- (id)_attributionManifest;
- (void)_sendInfo:toListener:;
- (void)_sendError:toListener:;
- (void)_loadAttributionInfoForListener:;
@end
