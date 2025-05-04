@interface AWEPreviewViewListContainerViewController : AWEBaseListViewController
@property (nonatomic) NSString bizUIName;
@property (nonatomic) NSArray viewList;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:forSectionViewModel:;
- (id)bizUIName;
- (void)setBizUIName:;
- (void)setViewList:;
- (id)initWithBizUIName:viewList:;
- (id)viewList;
- (id)init;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setupCollectionView:;
@end
