@interface GEOTileServerProxy : NSObject
@property (nonatomic) <GEOTileServerProxyDelegate> delegate;
- (void)generateRequestedFromTileLoaderEndSignpost:;
- (void)dealloc;
- (void)open;
- (void)reprioritizeKey:newPriority:batchID:;
- (unsigned long long)shrinkDiskCacheToSizeSync:;
- (void)shrinkDiskCacheToSize:callbackQueue:completionHandler:;
- (void)close;
- (unsigned long long)calculateFreeableSizeSync;
- (id)delegate;
- (void)beginPreloadSessionOfSize:;
- (void)flushPendingWrites;
- (void).cxx_destruct;
- (void)endPreloadSession;
- (void)cancel:batchID:;
- (void)calculateFreeableSize;
- (void)loadTiles:batchID:priorities:hasAdditionalInfos:additionalInfos:signpostIDs:createTimes:reason:options:client:;
- (void)reportCorruptTile:;
- (id)initWithCacheLocation:manifestConfiguration:locale:delegateQueue:delegate:;
- (void)generateRequestedFromTileLoaderBeginSignpost:tileKey:options:;
@end
