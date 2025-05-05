@interface PDFScannerResult : NSObject
- (void).cxx_destruct;
- (id)bounds;
- (id)rects;
- (BOOL)containsPoint:;
- (id)ddResult;
- (BOOL)resultIsPastDate;
- (BOOL)hasActionsForResult;
- (id)highlightRef;
- (id)initWithDDScannerResult:foundOnPage:;
- (void)setHighlightRef:;
- (double)displayScaleOnPageLayer:;
- (BOOL)containsPoint:onPageLayer:;
- (BOOL)pointIsOnButton:;
- (BOOL)pointIsOnButton:onPageLayer:;
- (void)setButtonPressed:;
@end
