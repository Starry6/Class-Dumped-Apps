@interface AWEECShareManager : NSObject
+ (void)verifyShareSecretWithSchema:requestPage:shareChannel:ecS:bizParams:extraDic:completion:;
+ (void)requesetSafeTokenWithSchema:requestPage:destinationPage:extraDic:completion:;
+ (id)ecomShareSaveToAlbumImageWithSharedImage:bgColorImage:shareScene:bgColor:;
+ (void)trackEcomShareReflowWithUrl:;
+ (void)openGoodsLynxPosterSharePanelWithParams:jsbParams:;
+ (void)openEcomLynxPosterSharePanelWithParams:jsbParams:;
+ (void)requestGoodsInfoBeforeReturnWithRequestPage:itemType:itemId:userId:marketingChannel:extraDic:schema:extraInfo:completion:;
+ (id)ecomTagStackView:shouldHideBoundsView:maxWidth:needCoupon:;
+ (void)requestShareItemImInfoWithItemId:itemType:requestPage:extraDic:logDic:modelClass:withCompletion:;
+ (id)generateGoodsTrackObjectWithParams:;
+ (void)requestBeforeShareWithParams:logDic:completion:;
+ (id)transJSBParamsToActivityModel:jsbParams:;
+ (void)requestBeforeShareWithActivityModel:logDic:completion:;
+ (id)transJSBParamsToGoodsModel:jsbParams:;
+ (void)requesetHotGoodsInfoWithItemId:withSchema:marketChannel:channelId:channelType:extraDic:logDic:withCompletion:;
+ (void)requestBeforeShareWithShareModel:extraDic:logDic:completion:;
+ (void)requestBeforeShareWithShopOwnerModel:extraDic:logDic:completion:;
+ (void)requestBeforeShareWithStoreModel:extraDic:logDic:completion:;
+ (void)annieActivityModelAdapter:jsbParams:;
+ (id)hMacMD5String:;
@end
