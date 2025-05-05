@interface QLPreviewExtensionRenderer : NSObject
@property (nonatomic) @ preview;
- (void)setPreview:;
- (void).cxx_destruct;
- (id)preview;
- (id)initWithPreview:;
- (void)drawInContextOfSize:drawingBlock:completionHandler:;
- (void)drawInPDFContextOfSize:drawingBlock:completionHandler:;
- (id)_failedToDrawError;
@end
