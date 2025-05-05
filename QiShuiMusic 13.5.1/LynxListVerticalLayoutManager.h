@interface LynxListVerticalLayoutManager : LynxListLayoutManager
- (double)crossUpperInset;
- (double)crossSize:;
- (id)defaultModelFrame:;
- (id)generateModelFrame:crossAxisOffset:itemMainSize:itemCrossSize:;
- (id)getContentSize;
- (BOOL)isVerticalLayout;
- (BOOL)layoutModelVisibleInIndex:;
- (double)layoutOffsetForFullSpanItem:;
- (double)mainSize:;
- (long long)nearestFullspanItem:;
@end
