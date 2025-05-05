@interface PDFPageLayerEffect : CALayer
- (id)annotation;
- (void).cxx_destruct;
- (void)update;
- (id)UUID;
- (void)updateColor:;
- (void)addSelection:;
- (id)pageFrame;
- (BOOL)shouldRotateContent;
- (id)pdfResult;
- (id)initWithPDFPageLayer:;
- (void)setSelections:;
- (void)setPageFrame:;
+ (id)createPDFSelectionLayerEffectsForSelections:withLayer:;
+ (id)createPDFCoachmarkLayerEffectsWithFrame:withLayer:;
+ (id)createPDFAnnotationLayerEffectForAnnotation:withLayer:;
+ (id)createPDFMarkupLayerEffectsForAnnotation:withLayer:;
+ (id)createPDFNoteLayerEffectForAnnotation:withLayer:;
+ (id)createFlashEffectForPDFLinkAnnotation:withLayer:forType:;
@end
