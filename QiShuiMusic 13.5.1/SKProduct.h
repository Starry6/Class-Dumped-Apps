@interface SKProduct : NSObject
@property (nonatomic) NSString _localeIdentifier;
@property (nonatomic) NSString localizedDescription;
@property (nonatomic) NSString localizedTitle;
@property (nonatomic) NSDecimalNumber price;
@property (nonatomic) NSLocale priceLocale;
@property (nonatomic) NSString productIdentifier;
@property (nonatomic) BOOL isDownloadable;
@property (nonatomic) BOOL downloadable;
@property (nonatomic) BOOL isFamilyShareable;
@property (nonatomic) NSArray contentLengths;
@property (nonatomic) NSArray downloadContentLengths;
@property (nonatomic) NSString contentVersion;
@property (nonatomic) NSString downloadContentVersion;
@property (nonatomic) SKProductSubscriptionPeriod subscriptionPeriod;
@property (nonatomic) SKProductDiscount introductoryPrice;
@property (nonatomic) NSString subscriptionGroupIdentifier;
@property (nonatomic) NSArray discounts;
- (id)initWithXPCEncoding:;
- (BOOL)isDownloadable;
- (id)productIdentifier;
- (id)init;
- (id)copyXPCEncoding;
- (id)localizedDescription;
- (void)_setContentVersion:;
- (id)_localeIdentifier;
- (id)subscriptionGroupIdentifier;
- (void)_setLocalizedDescription:;
- (id)contentVersion;
- (void)_setSubscriptionGroupIdentifier:;
- (id)initWithDictionary:;
- (id)subscriptionPeriod;
- (BOOL)downloadable;
- (void)_setLocalizedTitle:;
- (id)priceLocale;
- (void)_setDiscounts:;
- (id)downloadContentVersion;
- (id)discounts;
- (BOOL)isFamilyShareable;
- (id)downloadContentLengths;
- (void)_setPrice:;
- (void)_setDownloadable:;
- (void)_setDownloadContentLengths:;
- (void)_setLocaleIdentifier:;
- (void).cxx_destruct;
- (void)_setPriceLocale:;
- (id)localizedTitle;
- (void)_logMissingLocale;
- (void)_setProductIdentifier:;
- (void)_setSubscriptionPeriod:;
- (id)introductoryPrice;
- (id)price;
- (id)initMinusLocaleWithXPCEncoding:;
- (id)contentLengths;
- (id)initMinusLocaleWithDictionary:;
- (void)_setIntroductoryPrice:;
- (void)_setFamilyShareable:;
+ (id)productsFromDictionaries:;
+ (id)productsFromXPCEncodingsArray:;
@end
