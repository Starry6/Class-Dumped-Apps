@interface AWELiveVSTabViewModel : NSObject
@property (nonatomic) AWEListDataController dataController;
@property (nonatomic) IGListAdapter listAdapter;
@property (nonatomic) AWEBaseListAdapterDataSource dataSource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sectionViewModels;
- (void)setDataController:;
- (id)sectionControllerClassArray;
- (id)initWithDataController:;
- (void)viewDidDisAppear;
- (id)listAdapter;
- (void)setListAdapter:;
- (void)trackFormatCenterPageShow;
- (void)bindListAdapter:dataSource:;
- (void).cxx_destruct;
- (void)setDataSource:;
- (void)viewDidAppear;
- (id)dataSource;
- (id)dataController;
@end
