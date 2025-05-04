@interface AWEMusicStreamingImpl.LunaOffer : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) NSString currencyCode;
@property (nonatomic) NSString externalOfferID;
@property (nonatomic) NSString offerID;
@property (nonatomic) NSString offerType;
@property (nonatomic) q amount;
@property (nonatomic) NSDictionary resource;
- (void)setOfferID:;
- (id)externalOfferID;
- (void)setExternalOfferID:;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setResource:;
- (id)offerType;
- (void).cxx_destruct;
- (id)currencyCode;
- (void)setOfferType:;
- (id)resource;
- (id)initWithCoder:;
- (void)setCurrencyCode:;
- (long long)amount;
- (void)setAmount:;
- (id)offerID;
+ (id)JSONKeyPathsByPropertyKey;
@end
