@interface CJPayNewIAPTransactionInfoModel : NSObject
@property (nonatomic) NSString receipt;
@property (nonatomic) NSString productID;
@property (nonatomic) NSString transactionID;
@property (nonatomic) NSString originalTransactionID;
@property (nonatomic) NSString transactionDate;
@property (nonatomic) NSString originalTransactionDate;
- (id)originalTransactionDate;
- (void)setOriginalTransactionDate:;
- (void)setOriginalTransactionID:;
- (id)transactionID;
- (id)productID;
- (void)setProductID:;
- (void)setTransactionID:;
- (void).cxx_destruct;
- (void)setTransactionDate:;
- (id)transactionDate;
- (id)receipt;
- (void)setReceipt:;
- (id)originalTransactionID;
@end
