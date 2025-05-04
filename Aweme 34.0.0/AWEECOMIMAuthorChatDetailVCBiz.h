@interface AWEECOMIMAuthorChatDetailVCBiz : AWEECOMIMChatDetailVCBiz
- (id)sendMsgParamsDictWithNeedSenderRole:;
- (id)addAuthorRequestCommonParamsWithOriginalParams:;
- (id)shopInfoModelFromDict:;
- (void)fetchAuthorProductOrOrderWithParams:completion:;
- (void)sendUserCardCardType:extraDict:messageExt:completion:;
- (void)fetchAuthorShopInfoWithPigeonBizType:completion:;
- (void)fetchAuthorServiceInfoCompletion:;
- (void)fetchAuthorQueuedCountWithCompletion:;
- (void)fetchAuthorConversationIconsWithSource:completion:;
- (void)fetchAuthorRobotPredictOrderWithOrderId:completion:;
- (void)fetchAuthorProductOrOrderCompletion:;
- (void)fetchAuthorShopSchemaWithRequestPage:requestBizParams:completion:;
- (void)sendAuthorGoodsCardWithGoodId:completion:;
- (void)sendAuthorOrderCardWithOrderId:skuOrderId:fromOrderPredict:completion:;
- (id)otherTrackParamsDict;
@end
