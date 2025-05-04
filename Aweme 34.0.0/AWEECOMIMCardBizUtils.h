@interface AWEECOMIMCardBizUtils : NSObject
+ (id)buildCardUrlContextParamsWithProductId:entryModel:;
+ (void)requestSelectOrderListSchemeWithShopId:;
+ (id)editAddressHanderWithUrl:shopId:orderId:completion:;
+ (id)formatDeliveryTime:schedule:latest:isSchedule:;
+ (id)reserveDeliveryWithOrderId:shopId:deliveryTime:completion:;
+ (void)openProductDetailPage:entryInfo:unitBtmId:responder:bcmUnitParams:;
+ (id)displayDeliveryTime:dateFormat:;
+ (id)getWeekStringFromWeek:;
+ (void)openOrderDetailPage:entryInfo:unitBtmId:responder:;
+ (void)fetchSchemaWithPage:bizParams:completion:;
+ (id)getSourcePage:;
+ (id)generateOpenProductDetailParamsWithProductId:entryInfo:;
+ (void)viewCardRecord:completion:;
+ (id)showPriceNum:;
+ (id)showIntegerTypePriceNum:;
+ (void)openOrderDetailPage:entryInfo:;
+ (void)fetchRouteAfterSaleUrl:skuOrderId:completion:;
+ (void)viewCardRecord:cardType:completion:;
+ (void)fetchCouponStatusWithParamsDict:completion:;
+ (void)refuseNegotiateWithEncodeShopId:afterSaleId:completion:;
@end
