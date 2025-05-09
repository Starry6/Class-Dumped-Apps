@interface UIPrintPageRenderer : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} paperRect;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} printableRect;
@property (nonatomic) q requestedRenderingQuality;
@property (nonatomic) q currentRenderingQuality;
@property (nonatomic) double headerHeight;
@property (nonatomic) double footerHeight;
@property (nonatomic) q numberOfPages;
@property (nonatomic) NSArray printFormatters;
- (void)dealloc;
- (double)headerHeight;
- (long long)numberOfPages;
- (void).cxx_destruct;
- (long long)_numberOfPages;
- (void)setHeaderHeight:;
- (id)printableRect;
- (void)drawPageAtIndex:inRect:;
- (void)setPaperRect:;
- (id)paperRect;
- (void)setPrintableRect:;
- (void)setFooterHeight:;
- (void)addPrintFormatter:startingAtPageAtIndex:;
- (void)drawFooterForPageAtIndex:inRect:;
- (double)footerHeight;
- (id)printFormatters;
- (void)setPrintFormatters:;
- (id)printFormattersForPageAtIndex:;
- (void)_removePrintFormatter:;
- (long long)_maxFormatterPage;
- (BOOL)_numberOfPagesIsCached;
- (long long)currentRenderingQualityForRequestedRenderingQuality:;
- (void)prepareForDrawingPages:;
- (void)drawPrintFormatter:forPageAtIndex:;
- (void)drawHeaderForPageAtIndex:inRect:;
- (void)drawContentForPageAtIndex:inRect:;
- (BOOL)_startPrintContext:printSettings:;
- (void)_startSaveContext:;
- (void)_endSaveContext;
- (void)_drawPage:;
- (void)_endPrintContext:success:;
- (long long)requestedRenderingQuality;
- (void)setRequestedRenderingQuality:;
- (long long)currentRenderingQuality;
- (void)setCurrentRenderingQuality:;
@end
