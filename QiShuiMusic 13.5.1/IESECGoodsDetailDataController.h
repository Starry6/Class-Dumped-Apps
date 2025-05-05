@interface IESECGoodsDetailDataController : NSObject
+ (void)autoGetCouponsWithParams:completion:;
+ (id)cacheTime:;
+ (void)fetchMoreProductsWithParams:completion:;
+ (void)fetchShopRecommendWithParams:openWithSaas:completion:;
+ (void)getGoodsDetailWithParams:requestTargetPromotionID:host:APIPath:enableCache:cacheKey:openWithSaaS:completion:metricsBlock:;
+ (void)getGoodsDetailWithPromotionIDs:itemID:currAddrID:requestTargetPromotionID:metaParams:addition:openWithSaaS:completion:metricsBlock:;
+ (void)reportCpsTrack:productID:reportType:completion:;
+ (void)requestDynamicGroupBuyInfo:completion:;
+ (void)requestDynamicGroupBuyInfoWithPromotionID:KOLID:addition:completion:;
+ (void)requestGoodsDetailWithParams:APIURLString:openWithSaaS:modelClass:completion:metricsBlock:;
+ (void)requestPromotionDetailInfoWithPromotionID:metaParam:enterFrom:commonMeta:openWithSaaS:completion:;
+ (void)requestReplayVideoInfoWithParams:openWithSaas:completion:;
+ (void)requestSearchWordWithBussinessID:wordSource:productID:completion:;
+ (void)requestShareFissionBackFlowWithParams:;
+ (void)requestShopGuideInfoWithCompletion:;
+ (void)requestWhenStayGoodDetailWithDomainParams:;
+ (void)reservationGoodsIdentifier:productID:goodsItemID:goodsOwnerID:secKOLID:metaParam:reservationAction:openWithSaaS:completionBlock:;
+ (void)updateCommentDislikeWithCommentID:dislike:completion:;
+ (void)updateCommentLikeWithCommentID:like:completion:;
+ (void)updateUserGoodsLikeWithParams:like:completion:;
@end
