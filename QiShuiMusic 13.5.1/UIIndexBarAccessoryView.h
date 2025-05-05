@interface UIIndexBarAccessoryView : UIIndexBarView
@property (nonatomic) <UIIndexBarAccessoryViewDelegate> delegate;
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) q edge;
@property (nonatomic) BOOL overlay;
- (void)setEntries:;
- (BOOL)overlay;
- (void)setScrollView:;
- (void)setEdge:;
- (id)scrollView;
- (void).cxx_destruct;
- (void)update;
- (BOOL)_selectEntry:atIndex:;
- (BOOL)_shouldAnimatePropertyWithKey:;
- (long long)edge;
- (id)displayEntryNearestToContentOffset:;
@end
