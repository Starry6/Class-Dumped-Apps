@interface IESECListKitBaseListAdapterDataSource : NSObject
@property (nonatomic) IESECListKitBFFViewController viewController;
@property (nonatomic) <IESECListKitBaseListViewControllerDataSource> dataSource;
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
