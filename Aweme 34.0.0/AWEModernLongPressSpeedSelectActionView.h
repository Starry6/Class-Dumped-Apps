@interface AWEModernLongPressSpeedSelectActionView : UIView
@property (nonatomic) NSArray speedItems;
@property (nonatomic) q selectedIndex;
@property (nonatomic) NSMutableArray itemViews;
@property (nonatomic) <AWEModernLongPressSpeedSelectActionViewDelegate> delegate;
- (void)setSpeedItems:;
- (id)initWithSpeedItems:selectedIndex:;
- (id)speedItems;
- (void)actionItemClick:;
- (void)setSelectedIndex:;
- (id)delegate;
- (id)intrinsicContentSize;
- (long long)selectedIndex;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setupUI;
- (id)itemViews;
- (void)setItemViews:;
@end
