@interface PNGRenderer : CGRenderer
- (void)setFileURL:;
- (id)init;
- (void)dealloc;
- (BOOL)setCanvasWidth:height:;
- (void)flushRender;
- (id)cgimage;
@end
