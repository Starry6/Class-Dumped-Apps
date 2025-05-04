@interface AWEEnterpriseGoodsDetailDataController : AWEBaseDataController
- (id)convertModelToDictWithArray:;
- (void)fetchGoodDetailResponseModelWithProductIDs:completion:;
- (void)saveLocalExt:messageId:conversationId:;
@end
