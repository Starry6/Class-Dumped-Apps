@interface SKProductDiscount : NSObject
@property (nonatomic) NSDecimalNumber price;
@property (nonatomic) NSLocale priceLocale;
@property (nonatomic) NSString identifier;
@property (nonatomic) SKProductSubscriptionPeriod subscriptionPeriod;
@property (nonatomic) Q numberOfPeriods;
@property (nonatomic) Q paymentMode;
@property (nonatomic) Q type;
- (id)initWithXPCEncoding:;
- (void)_setIdentifier:;
- (void)_setType:;
- (id)init;
- (id)copyXPCEncoding;
- (void)_setNumberOfPeriods:;
- (id)initWithDictionary:;
- (id)identifier;
- (id)subscriptionPeriod;
- (void)_setPaymentMode:;
- (id)priceLocale;
- (unsigned long long)paymentMode;
- (void)_setPrice:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (void)_setPriceLocale:;
- (unsigned long long)numberOfPeriods;
- (void)_setSubscriptionPeriod:;
- (id)price;
@end
