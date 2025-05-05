@interface QLPreviewItemPrinter : QLPreviewPrinter
@property (nonatomic) <QLPrintingProtocol> itemPrinter;
@property (nonatomic) QLItemPresenterViewController presenter;
- (id)printer;
- (void)setPresenter:;
- (id)presenter;
- (long long)numberOfPages;
- (void).cxx_destruct;
- (id)initWithItem:;
- (void)drawPageAtIndex:inRect:;
- (void)prepareForDrawingPages:;
- (void)_didReceivePrinter:;
- (void)_waitForPrinterSynchronously;
- (id)itemPrinter;
- (void)setItemPrinter:;
@end
