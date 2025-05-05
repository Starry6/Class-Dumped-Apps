@interface IESIMBaseListAdapterDataSource : NSObject
@property (nonatomic) UIViewController viewController;
@property (nonatomic) <IESIMBaseListViewControllerDataSource> dataSource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)emptyViewForListAdapter:;
- (id)listAdapter:sectionControllerForObject:;
- (id)objectsForListAdapter:;
- (id)sectionControllerForSectionViewModelClass:sectionControllerClassArray:;
- (void)setDataSource:;
- (void)setViewController:;
- (id)viewController;
- (id)dataSource;
- (void).cxx_destruct;
+ (id)dataSourceWithViewController:;
@end
