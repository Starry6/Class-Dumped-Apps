@interface IESEC3DBottomGoodsViewHandler : NSObject
+ (void)handleForAuctionWithPageUrl:baseLogDataDict:orderLogDataDict:creativeId:entranceInfoJSONString:completionBlock:;
+ (void)handleForBuyActionWithSkuInfo:orderURLString:spellGroupId:adInfoDict:logDataDict:entranceInfoDict:marketingChannel:passthroughEventV3Dict:completionBlock:;
+ (void)handleForDepositReservateWithEnterFrom:roomId:authorId:productId:completion:confirm:;
+ (void)handleForInsuranceWithPageUrl:followStatus:groupType:authorId:itemID:entranceForm:creativeId:completionBlock:;
+ (void)handleForOpenPageWithLinks:promotionSource:trackExtra:completion:;
+ (void)handleForTimingSaleWithIsReserved:authorId:secAuthorId:startTime:productId:promotionId:goodsTitle:goodsItemID:metaParams:parameters:completionBlock:;
@end
