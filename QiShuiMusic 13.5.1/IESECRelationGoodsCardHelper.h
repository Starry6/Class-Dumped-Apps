@interface IESECRelationGoodsCardHelper : NSObject
+ (id)getGoodsDetailShowRequestWithGoodsModel:viewController:additionalParamsDict:isHalfMode:;
+ (void)handleWithGoodsDetailShowRequest:completion:;
+ (void)jumpToGoodsDetailBySchemaWithGoodsModel:paramsDict:sourceBtmToken:completion:;
@end
