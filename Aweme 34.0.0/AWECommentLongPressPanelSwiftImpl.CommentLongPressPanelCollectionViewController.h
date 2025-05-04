@interface AWECommentLongPressPanelSwiftImpl.CommentLongPressPanelCollectionViewController : AWEBaseListViewController
- (void)customLayoutCollectionView:;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:forSectionViewModel:;
- (id)emptySectionsPlaceholderView;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:bundle:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)setupCollectionView:;
+ (Class)viewModelClass;
@end
