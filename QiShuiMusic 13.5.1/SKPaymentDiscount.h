@interface SKPaymentDiscount : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString keyIdentifier;
@property (nonatomic) NSUUID nonce;
@property (nonatomic) NSString signature;
@property (nonatomic) NSNumber timestamp;
- (id)signature;
- (id)identifier;
- (id)nonce;
- (void).cxx_destruct;
- (id)timestamp;
- (id)keyIdentifier;
- (id)initWithIdentifier:keyIdentifier:nonce:signature:timestamp:;
@end
