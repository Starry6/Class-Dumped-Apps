@interface AWETabListWeakReference : NSObject
@property (nonatomic) <AWETabListViewControllerDelegate> delegate;
@property (nonatomic) <AWETabListViewControllerDataSource> dataSource;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDataSource:;
- (void)setDelegate:;
- (id)dataSource;
- (id)initWithDelegate:dataSource:;
@end
