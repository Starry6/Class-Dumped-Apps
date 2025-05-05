@interface GEORegionalResourcesTileRequester : GEOTileRequester
- (void)cancel;
- (void)start;
- (void)_generateEndSignpostEventIfNecessary:;
- (void).cxx_destruct;
- (id)initWithTileRequest:delegateQueue:delegate:;
+ (unsigned char)tileProviderIdentifier;
@end
