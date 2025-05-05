@interface IESTransaction : NSObject
@property (nonatomic) IESProduct product;
@property (nonatomic) NSString orderID;
@property (nonatomic) NSString receipt;
@property (nonatomic) SKPaymentTransaction transaction;
- (id)orderID;
- (id)initWithProduct:orderID:receipt:transaction:;
- (void)setOrderID:;
- (void)setTransaction:;
- (id)transaction;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)product;
- (void)setProduct:;
- (id)receipt;
- (void)setReceipt:;
@end
