@interface AWEBaseListAdapterDataSource : NSObject
@property (nonatomic) UIViewController viewController;
@property (nonatomic) <AWEBaseListViewControllerDataSource> dataSource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sectionControllerForSectionViewModelClass:sectionControllerClassArray:;
- (id)objectsForListAdapter:;
- (id)listAdapter:sectionControllerForObject:;
- (id)emptyViewForListAdapter:;
- (id)viewController;
- (void).cxx_destruct;
- (void)setDataSource:;
- (id)dataSource;
- (void)setViewController:;
+ (id)dataSourceWithViewController:;
@end
