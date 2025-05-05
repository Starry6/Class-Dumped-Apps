@interface ASFIAPItem : NSObject
@property (nonatomic) NSDate originalPurchaseDate;
@property (nonatomic) NSString originalTransactionID;
@property (nonatomic) NSDate purchaseDate;
@property (nonatomic) NSString productID;
@property (nonatomic) NSNumber quantity;
@property (nonatomic) NSString transactionID;
- (id)transactionID;
- (id)productID;
- (void).cxx_destruct;
- (id)purchaseDate;
- (id)copyWithZone:;
- (id)quantity;
- (id)originalPurchaseDate;
- (id)originalTransactionID;
@end
