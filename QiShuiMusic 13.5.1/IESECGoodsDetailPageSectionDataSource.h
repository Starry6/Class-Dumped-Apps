@interface IESECGoodsDetailPageSectionDataSource : NSObject
@property (nonatomic) IESECGoodsDetailSectionObjectManager sectionObjectManager;
@property (nonatomic) NSString goodsDetailPageIdentifier;
@property (nonatomic) IESECGoodsDetailPageViewProvider viewProvider;
@property (nonatomic) IESECLLDCLynxManager lynxManager;
@property (nonatomic) IESECGoodsDetailSliceManager sliceManager;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLynxManager:;
- (id)emptyViewForListAdapter:;
- (id)goodsDetailPageIdentifier;
- (id)initWithSectionObjectManager:;
- (id)listAdapter:sectionControllerForObject:;
- (id)lynxManager;
- (id)objectsForListAdapter:;
- (id)sectionObjectManager;
- (void)setGoodsDetailPageIdentifier:;
- (void)setSectionObjectManager:;
- (void)setSliceManager:;
- (id)sliceManager;
- (id)viewProvider;
- (void)setViewProvider:;
- (void)setCollectionView:;
- (void).cxx_destruct;
- (id)collectionView;
@end
