@interface IESECGoodsOpenPageManager : NSObject
+ (void)openMarketingFloor:enterSource:;
+ (id)VCForOpenGoodsPurposeWithRefVC:;
+ (id)addNGroupType:dict:;
+ (void)addToShoppingCart:SKUInfo:additionInfo:completion:;
+ (void)addToShoppingCartWithParams:needSaaSHeaders:completion:;
+ (void)buyFangXinGouAlikeParams:onViewController:notExistThenAddDict:forceMergeDict:completion:;
+ (void)buyFangXinGouWithCommonMeta:buyMeta:orderURLString:withSKUInfo:onViewController:onSKUViewController:notExistThenAddDict:forceMergeDict:extraDict:completion:;
+ (id)finalParamsFromOriginDict:notExistThenAddDict:forceMergeDict:supportMegaObject:;
+ (id)generateOrderURL:addingIfNotExist:merging:adInfoFallbackDict:;
+ (void)loginThenOpenWebURLString:title:onViewController:;
+ (void)makeDiffWithURL::;
+ (void)openCombinationPageSchema:isHalfScreen:onViewController:;
+ (void)openFangXinGouAlikeGoodsShopCartPageWithWebUrlStr:onViewController:;
+ (void)openGoodsConsultPageWithParams:addition:onViewController:;
+ (void)openGoodsURL:withTrackExtra:onViewController:completion:;
+ (void)openOtherAPPWithScheme:completion:;
+ (void)openTaobaoWithWebURLString:onViewController:completion:;
+ (id)orderURLFromVideoGoodsModel:extraInfo:;
+ (void)paidOrExperienceFangXinGouAlikeParams:onViewController:;
+ (id)queryParamsForOrderURL:;
+ (BOOL)supportMegaFromOrderURL:;
+ (void)wantGoodsPromotionID:awemeID:authorID:addition:add:completion:;
@end
