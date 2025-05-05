@interface PDFCoachMarkManager : NSObject
- (void).cxx_destruct;
- (void)_cleanCoachMarks;
- (id)initWithPDFRenderingProperties:;
- (void)createCoachMarkForPage:atFrame:;
- (void)pageLayerDidAppear:;
- (void)pageLayerWillRemove:;
- (id)_pageLayerForPage:;
@end
