@interface IESECGoodsDetailHeaderContentCollectionDataSource : NSObject
@property (nonatomic) NSArray cells;
@property (nonatomic) IESECGoodsDetailHeaderFooter footerModel;
@property (nonatomic) IESECGoodsDetailHeaderServiceProvider serviceProvider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setFooterModel:;
- (id)footerModel;
- (id)initWithCells:serviceProvider:;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void).cxx_destruct;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (id)serviceProvider;
- (void)setServiceProvider:;
- (id)cells;
- (void)setCells:;
@end
