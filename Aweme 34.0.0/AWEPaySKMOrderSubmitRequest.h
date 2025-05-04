@interface AWEPaySKMOrderSubmitRequest : CJPayBaseRequest
+ (id)buildUrl:;
+ (void)fetchRMCPayeeInfo:completion:;
+ (void)createOrder:extraParams:completion:;
+ (void)fetchOrderPromotionInfo:completion:;
@end
