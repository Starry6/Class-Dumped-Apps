@interface AWESettingBaseViewModel : NSObject
@property (nonatomic) q colorStyle;
@property (nonatomic) <AWESettingBaseViewModelDelegate> controllerDelegate;
@property (nonatomic) NSArray sectionDataArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)insertItemModelWithType:toPath:;
- (void)refreshAllCells;
- (void)viewDidDisapper;
- (id)itemModelIndexWithType:;
- (id)itemModelWithType:;
- (void)listControlDidChange;
- (void)removeItemModelWithTypeIfNeed:;
- (id)sectionDataArray;
- (void)setControllerDelegate:;
- (id)init;
- (id)controllerDelegate;
- (void)dealloc;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (long long)colorStyle;
- (void)setColorStyle:;
@end
