@interface PKCanvasAttachmentView : PKAttachmentView
@property (nonatomic) PKCanvasView canvasView;
@property (nonatomic) BOOL _wantsFullyRenderedNotification;
@property (nonatomic) double drawingWidth;
@property (nonatomic) NSMutableArray fullyRenderedCompletionBlocks;
- (void).cxx_destruct;
- (id)canvasView;
- (void)setCanvasView:;
- (BOOL)wantsFullyRendered;
- (void)fullyRendered;
- (BOOL)disableTileAnimations;
- (id)drawingTransform;
- (void)drawingDidChangeVisibleStrokes:;
- (BOOL)_wantsFullyRenderedNotification;
- (void)set_wantsFullyRenderedNotification:;
- (double)drawingWidth;
- (void)setDrawingWidth:;
- (id)fullyRenderedCompletionBlocks;
- (void)setFullyRenderedCompletionBlocks:;
@end
