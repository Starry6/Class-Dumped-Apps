@interface GEOMapAssetMetadataFetcher : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)initWithTileLoader:auditToken:enableASTCTextures:;
- (void)fetchAssetMetadataForMetadataKeys:callbackQueue:completionHandler:;
@end
