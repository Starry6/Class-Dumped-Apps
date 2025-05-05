@interface PDFRenderer : CGRenderer
- (void)setFileURL:;
- (id)init;
- (void)dealloc;
- (BOOL)setCanvasWidth:height:;
- (void)setFileTitle:;
- (void)flushRender;
- (id)pdfdata;
@end
