@interface QLPreviewPrinter : UIPrintPageRenderer
@property (nonatomic) <QLPrintingProtocol> printer;
- (id)printer;
- (long long)numberOfPages;
- (void).cxx_destruct;
- (void)drawPageAtIndex:inRect:;
- (void)prepareForDrawingPages:;
- (id)initWithPreviewPrinter:;
@end
