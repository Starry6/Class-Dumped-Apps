@interface PDFPageLayerSelectionEffect : PDFPageLayerEffect
- (void)update;
- (void)updateColor:;
- (void)addSelection:;
- (id)initWithPDFPageLayer:;
- (void)setSelections:;
- (void)_generateRects;
@end
