@interface AWEIMStrangerMultiTabHeaderView : UIView
@property (nonatomic) NSArray dataSource;
@property (nonatomic) NSArray tabViewArray;
@property (nonatomic) <AWEIMStrangerMultiTabHeaderViewDelegate> delegate;
- (void)__buildTabViews;
- (id)tabViewArray;
- (void)__didClickTabView:;
- (void)setTabViewArray:;
- (void)configWithDataArray:;
- (void)refresh;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDataSource:;
- (void)setDelegate:;
- (id)dataSource;
+ (id)reuseIdentifier;
@end
