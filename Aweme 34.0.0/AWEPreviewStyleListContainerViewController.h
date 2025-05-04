@interface AWEPreviewStyleListContainerViewController : AWEBaseListViewController
@property (nonatomic) NSString viewName;
@property (nonatomic) NSArray styleList;
- (id)sectionControllerClassArray;
- (void)setViewName:;
- (void)setStyleList:;
- (id)initWithViewName:styleList:;
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (id)viewName;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setupCollectionView:;
- (id)styleList;
@end
