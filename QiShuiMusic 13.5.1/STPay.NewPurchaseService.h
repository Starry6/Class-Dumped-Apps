@interface STPay.NewPurchaseService : NSObject
- (id)businessIdentify:;
- (void)didFinishProductOrder:resultType:error:;
- (void)didFinishProductOrderInBack:resultType:error:;
- (void)iesBuyProduct:productID:orderID:error:;
- (void)iesCheckFinalResultWithOrderID:receipt:transaction:;
- (void)iesFetchOrderInfoWithProductID:product:;
- (void)iesSendTransactionWithOrderID:receipt:transaction:;
- (BOOL)shouldHandleProduct:;
- (BOOL)shouldInterceptAppStorePaymentQueue:payment:forProduct:;
- (id)init;
- (void).cxx_destruct;
@end
