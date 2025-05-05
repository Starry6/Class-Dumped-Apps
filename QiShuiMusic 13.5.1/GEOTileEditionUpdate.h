@interface GEOTileEditionUpdate : NSObject
@property (nonatomic) BOOL flushEverything;
@property (nonatomic) BOOL invalidateEverything;
- (id)init;
- (void).cxx_destruct;
- (BOOL)flushEverything;
- (BOOL)invalidateEverything;
- (id)initWithActiveTileGroup:oldActiveTileGroup:dataSetDiffers:flushEverything:;
- (void)addTileset:edition:provider:invalidateOnly:;
- (unsigned long long)tilesetCount;
- (void)tileset:edition:provider:invalidateOnly:atIndex:;
- (void)setFlushEverything:;
- (void)setInvalidateEverything:;
@end
