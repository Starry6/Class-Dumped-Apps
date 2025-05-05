@interface IDSMessage : IDSBaseMessage
@property (nonatomic) NSNumber wantsDeliveryStatus;
@property (nonatomic) BOOL wantsCertifiedDelivery;
@property (nonatomic) NSDictionary deliveryStatusContext;
@property (nonatomic) NSNumber version;
- (id)init;
- (void)setVersion:;
- (id)version;
- (id)messageBody;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setWantsCertifiedDelivery:;
- (void)setWantsDeliveryStatus:;
- (void)setDeliveryStatusContext:;
- (BOOL)wantsAPSRetries;
- (BOOL)wantsHTTPHeaders;
- (id)userAgentHeaderString;
- (BOOL)wantsUserAgentInHeaders;
- (BOOL)_shouldUseJSONForEncoding;
- (id)_madridServerBag;
- (id)_objectForKeyFromMadridBag:;
- (id)wantsDeliveryStatus;
- (BOOL)wantsCertifiedDelivery;
- (id)deliveryStatusContext;
@end
