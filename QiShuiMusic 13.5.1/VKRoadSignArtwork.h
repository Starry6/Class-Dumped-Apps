@interface VKRoadSignArtwork : NSObject
- (id)glyph;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)image;
- (id)initWithFramesetter:signMetrics:textMetrics:signColoring:glyph:cgGlyph:;
- (id)initWithLine:signMetrics:textMetrics:signColoring:glyph:cgGlyph:;
- (id)offsetPixelForPixel:;
- (id)localRenderBounds;
- (id)localSignBounds;
- (id)localCollisionBounds;
- (id)generatedMetrics;
- (id)textMetrics;
- (void)addDebugPoint:color:;
- (void)addDebugRect:color:;
@end
