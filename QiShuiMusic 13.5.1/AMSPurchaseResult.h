@interface AMSPurchaseResult : NSObject
@property (nonatomic) NSString correlationID;
@property (nonatomic) NSError error;
@property (nonatomic) AMSPurchase purchase;
@property (nonatomic) NSDictionary responseDictionary;
@property (nonatomic) NSURLResponse URLResponse;
- (void)setCorrelationID:;
- (id)correlationID;
- (id)responseDictionary;
- (void)setError:;
- (id)error;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)URLResponse;
- (void)setResponseDictionary:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)purchase;
- (BOOL)isEqualToPurchaseResult:;
- (void)setPurchase:;
- (void)setURLResponse:;
+ (BOOL)supportsSecureCoding;
@end
