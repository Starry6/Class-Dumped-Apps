@interface PDFViewLayout : NSObject
@property (nonatomic) @ delegate;
@property (nonatomic) PDFDocument document;
- (id)init;
- (void)dealloc;
- (void)setDocument:;
- (void)setDelegate:;
- (id)delegate;
- (id)document;
- (void).cxx_destruct;
- (id)convertPoint:toPage:;
- (id)convertPoint:fromPage:;
- (id)boundsForPage:;
- (id)contentSizeWithCurrentPage:;
- (id)visiblePageRangeInBounds:currentPage:;
- (id)visiblePagesInBounds:currentPage:;
- (id)pageNearestPoint:currentPage:;
- (id)convertPoint:toPage:forScaleFactor:;
- (id)convertPoint:fromPage:forScaleFactor:;
- (id)convertRect:fromPage:forScaleFactor:;
- (long long)functionalDisplayMode;
- (void)invalidateInternalDocumentGeometry;
- (id)facingPageForPage:;
- (void)generateInternalDocumentGeometry;
- (id)normalizedPageBounds:;
@end
