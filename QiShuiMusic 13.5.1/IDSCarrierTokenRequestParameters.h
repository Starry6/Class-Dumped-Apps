@interface IDSCarrierTokenRequestParameters : NSObject
@property (nonatomic) q subscriptionSource;
@property (nonatomic) NSString IMEI;
@property (nonatomic) NSString carrierNonce;
- (id)IMEI;
- (void).cxx_destruct;
- (id)initWithSubscriptionSource:IMEI:carrierNonce:;
- (long long)subscriptionSource;
- (id)carrierNonce;
@end
