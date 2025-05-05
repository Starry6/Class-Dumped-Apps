@interface PKLinedPaperLayer : CALayer
@property (nonatomic) <PKLinedPaperLayerDelegate> linedPaperLayerDelegate;
- (id)_traitCollection;
- (void).cxx_destruct;
- (id)_linedPaper;
- (id)_attachmentContainerView;
- (id)initWithLinedPaperLayerDelegate:;
- (void)updateLinesFromAttachmentBounds:;
- (void)updateSublayersFromAttachmentBounds:;
- (id)linedPaperLayerDelegate;
@end
