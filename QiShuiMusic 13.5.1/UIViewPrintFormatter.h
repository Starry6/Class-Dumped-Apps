@interface UIViewPrintFormatter : UIPrintFormatter
@property (nonatomic) UIView view;
- (id)view;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (long long)_recalcPageCount;
- (id)rectForPageAtIndex:;
- (void)drawInRect:forPageAtIndex:;
- (id)_initWithView:;
@end
