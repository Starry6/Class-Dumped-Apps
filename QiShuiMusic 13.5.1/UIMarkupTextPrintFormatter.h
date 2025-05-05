@interface UIMarkupTextPrintFormatter : UIPrintFormatter
@property (nonatomic) NSString markupText;
- (void)dealloc;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (long long)_recalcPageCount;
- (id)rectForPageAtIndex:;
- (void)drawInRect:forPageAtIndex:;
- (void)removeFromPrintPageRenderer;
- (id)initWithMarkupText:;
- (void)setMarkupText:;
- (void)_resetPaginationInfo;
- (id)markupText;
@end
