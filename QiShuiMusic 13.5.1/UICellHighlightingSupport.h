@interface UICellHighlightingSupport : NSObject
- (void)dealloc;
- (id)initWithCell:;
- (void)applyState:toView:;
- (void)cacheState:forView:;
- (void)highlightView:;
- (void).cxx_destruct;
@end
