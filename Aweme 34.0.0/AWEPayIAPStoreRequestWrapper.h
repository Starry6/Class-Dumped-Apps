@interface AWEPayIAPStoreRequestWrapper : NSObject
@property (nonatomic) <AWEYAPIAPStoreDelegateProtocol> originalDelegate;
@property (nonatomic) <AWEPayIAPStoreRequestWrapperProtocol> wrapperProtocol;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)paymentQueue:shouldAddStorePayment:for:;
- (void)didFinishProductOrder:resultType:error:;
- (void)didFinishProductOrderInBack:resultType:error:;
- (BOOL)shouldHandleProduct:;
- (id)businessIdentify:;
- (void)iesFetchOrderInfoWithProductID:product:;
- (void)iesSendTransactionWithOrderID:receipt:transaction:;
- (void)iesCheckFinalResultWithOrderID:receipt:transaction:;
- (void)showLoadingWithStage:productId:text:;
- (BOOL)allowNewBuyingWithUnconfirmedProduct:newBuyingProductID:newOrderParams:;
- (BOOL)shouldInterceptAppStorePaymentQueue:payment:forProduct:;
- (void)iesBuyProduct:productID:orderID:error:;
- (id)wrapperProtocol;
- (void)setWrapperProtocol:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)originalDelegate;
- (void)setOriginalDelegate:;
- (void)event:params:;
+ (id)wrapperWithDelegate:;
@end
