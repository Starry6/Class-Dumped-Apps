@interface AWEHomePageRemoteBaseModuleController : NSObject
@property (nonatomic) AWEHomePageRemoteManager manager;
@property (nonatomic) AWEHomePageRemoteModuleModel model;
@property (nonatomic) AWEHomePageRemoteModuleContext context;
@property (nonatomic) NSArray itemControllers;
@property (nonatomic) NSArray itemModels;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setItemModels:;
- (id)itemModels;
- (void)homePageRemotePanelWillShow;
- (void)homePageRemotePanelDidShow;
- (void)homePageRemotePanelWillDismissWithReason:;
- (void)homePageRemotePanelDidDismissWithReason:;
- (void)rootVCWillAppear;
- (id)consumedBusinessIDArray;
- (long long)canShowItemCount;
- (void)reloadModuleControllerView;
- (BOOL)shouldShowModuleView;
- (void)moduleControllerThemeDidChange:;
- (double)moduleControllerHeightByWidth:withSection:;
- (id)initWithManager:withModel:withContext:;
- (id)supportBusinessTypes;
- (long long)collectionViewNumberOfItems:;
- (id)getItemModelAtRow:;
- (id)collectionView:sizeForItemAtRow:withCollectionWidth:;
- (double)collectionViewMinimumInteritemSpacing:;
- (double)collectionViewMinimumLineSpacing:;
- (id)collectionView:referenceSizeForHeaderInSection:withCollectionWidth:;
- (void)setItemControllers:;
- (void)setModel:;
- (void)setManager:;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)manager;
- (id)model;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)itemControllers;
- (void)updateWithModel:;
@end
