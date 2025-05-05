@interface UIWebDocumentViewPrintFormatter : UIViewPrintFormatter
@property (nonatomic) WebFrame frameToPrint;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)_webDocumentView;
- (id)frameToPrint;
- (void)setFrameToPrint:;
- (long long)_recalcPageCount;
- (id)rectForPageAtIndex:;
- (void)drawInRect:forPageAtIndex:;
- (void)removeFromPrintPageRenderer;
- (void)_resetPaginationInfo;
@end
