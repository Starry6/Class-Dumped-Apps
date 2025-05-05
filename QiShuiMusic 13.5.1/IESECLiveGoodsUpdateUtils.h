@interface IESECLiveGoodsUpdateUtils : NSObject
+ (id)IDsOfQueryType:IDType:inGoodsViewModes:;
+ (id)IDsOfQueryType:IDType:inModelList:;
+ (id)goodsModelIDMapFromGoodsList:IDType:;
+ (id)goodsModelIDMapFromGoodsViewModes:IDType:;
+ (id)indexPathOfGoodsViewModes:promotionID:passingTest:;
+ (id)indexPathsOfGoodsModelList:productIdsArray:passingTest:;
+ (id)indexPathsOfGoodsViewModes:productIdsArray:passingTest:;
+ (id)modelWithID:andIDType:inModelList:;
+ (id)stringArrayFromPBIntArray:;
+ (id)updatedGoodsModelsWithIdsArray:inGoodsModelList:;
+ (id)updatedGoodsModelsWithIdsArray:inGoodsViewModes:;
+ (id)updateedGoodsModelWithPromotionID:inGoodsViewModels:;
@end
