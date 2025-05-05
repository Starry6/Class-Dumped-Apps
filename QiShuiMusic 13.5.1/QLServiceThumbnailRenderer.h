@interface QLServiceThumbnailRenderer : NSObject
@property (nonatomic) QLFileThumbnailRequest request;
@property (nonatomic) QLThumbnailReply reply;
@property (nonatomic) @? completionHandler;
@property (nonatomic) <QLThumbnailServiceSurfaceGeneratorProtocol> surfaceGenerator;
- (id)reply;
- (void)setReply:;
- (void)setCompletionHandler:;
- (id)request;
- (void).cxx_destruct;
- (void)setRequest:;
- (id)completionHandler;
- (id)initWithRequest:reply:completionHandler:surfaceGenerator:;
- (void)generateThumbnailAndPerformCompletionHandler;
- (void)_drawInContextOfSize:colorSpace:drawingBlock:;
- (void)_drawInCurrentContextOfSize:colorSpace:drawingBlock:;
- (void)_thumbnailGenerationDidFailWithError:;
- (void)_didGenerateThumbnailWithData:bitmapFormat:drawingContextSize:;
- (void)_didReceiveThumbnailURL:;
- (void)_drawInIOSurface;
- (void)_afterGeneratingIOSurfaceThumbnail:surface:;
- (id)_IOSurfaceSizeFromThumbnailReply:;
- (void)_executeCompletionHandlerWithThumbnailData:thumbnailURL:ioSurface:drawingContextSize:bitmapFormat:didGenerateThumbnail:error:;
- (BOOL)_canCreateContextOfSize:forRequest:;
- (id)_thumbnailDataDestructionConcurrenQueue;
- (id)surfaceGenerator;
- (void)setSurfaceGenerator:;
@end
