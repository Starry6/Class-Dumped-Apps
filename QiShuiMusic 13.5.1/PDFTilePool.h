@interface PDFTilePool : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (int)tileSurfaceSize;
- (void)setTileSurfaceType:;
- (int)tileSurfaceType;
- (void)saveBitmapFiles;
- (void)requestPDFTileSurfaceForTarget:forPage:withRenderingProperties:atZoomFactor:frame:transform:tag:;
- (id)_createTileSurfaceForRequest:;
- (id)_createContextForTileSurface:ofRequest:;
- (void)_renderTileForRequest:;
- (void)releasePDFTileSurface:;
- (int)activeTileCount;
+ (id)sharedPool;
@end
