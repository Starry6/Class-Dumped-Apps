@interface IESLiveSaaSFeedAdItemModel : BDDynamicModel
@property (nonatomic) IESLiveSaaSFeedAdModel adModel;
@property (nonatomic) # cellClass;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)adModel;
- (void)setEnterMethod:;
- (id)enterFrom;
- (id)enterMethod;
- (id)initWithModel:store:;
- (id)itemSizeInCollectionView:;
- (void)setAdModel:;
- (void)setEnterFrom:;
- (void).cxx_destruct;
@end
