@interface AWEYAPIAPProductModel : AWEBaseApiModel
@property (nonatomic) q createTime;
@property (nonatomic) NSString tradeNo;
@property (nonatomic) NSString receipt;
@property (nonatomic) NSString productID;
@property (nonatomic) NSString transactionID;
@property (nonatomic) NSString originalTransactionID;
@property (nonatomic) NSDictionary otherVerifyParams;
@property (nonatomic) BOOL verifyInForeground;
@property (nonatomic) NSString transactionDate;
@property (nonatomic) NSString originalTransactionDate;
@property (nonatomic) NSString outOrderNo;
@property (nonatomic) NSString originalOrderID;
@property (nonatomic) BOOL isFromRefreshReceipt;
@property (nonatomic) NSString currentTransactionState;
@property (nonatomic) q iapType;
@property (nonatomic) NSString merchantId;
@property (nonatomic) BOOL isRetainShown;
- (void)setTradeNo:;
- (void)setIapType:;
- (void)setOriginalTransactionDate:;
- (void)setOriginalTransactionID:;
- (id)tradeNo;
- (id)outOrderNo;
- (void)setOutOrderNo:;
- (id)otherVerifyParams;
- (void)setOtherVerifyParams:;
- (BOOL)verifyInForeground;
- (void)setVerifyInForeground:;
- (id)originalTransactionDate;
- (id)originalOrderID;
- (void)setOriginalOrderID:;
- (BOOL)isFromRefreshReceipt;
- (void)setIsFromRefreshReceipt:;
- (id)currentTransactionState;
- (void)setCurrentTransactionState:;
- (long long)iapType;
- (BOOL)isRetainShown;
- (void)setIsRetainShown:;
- (BOOL)receiptIsValid;
- (BOOL)isRestoreProduct;
- (id)transactionID;
- (void)setProductID:;
- (long long)createTime;
- (id)productID;
- (void)setTransactionDate:;
- (id)transactionDate;
- (void)setCreateTime:;
- (BOOL)isValid;
- (void)setTransactionID:;
- (void).cxx_destruct;
- (id)merchantId;
- (void)setMerchantId:;
- (id)receipt;
- (void)setReceipt:;
- (id)originalTransactionID;
+ (id)JSONKeyPathsByPropertyKey;
@end
