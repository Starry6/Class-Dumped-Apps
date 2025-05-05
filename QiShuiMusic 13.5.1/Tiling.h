@interface Tiling : FRCMetalBase
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDevice:commmandQueue:;
- (void)encodeTilingToCommandBuffer:from:to:verticalOffset:sourceHeight:;
- (void)encodeTileBufferToCommandBuffer:from:to:channels:tileInfo:numTiles:;
- (id)createTileInfoArrayForFrameWithWidth:height:numTiles:;
- (void)assembleTiles:to:tileInfo:numTiles:;
- (void)assemble3TilesToCommandBuffer:from:to:tileInfo:;
- (void)assemble2TilesToCommandBuffer:from:to:tileInfo:;
@end
