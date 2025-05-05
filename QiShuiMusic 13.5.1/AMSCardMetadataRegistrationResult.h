@interface AMSCardMetadataRegistrationResult : NSObject
@property (nonatomic) NSString cardArtwork;
@property (nonatomic) q cardType;
@property (nonatomic) NSString descriptionLong;
@property (nonatomic) NSString descriptionShort;
@property (nonatomic) q paymentNetwork;
@property (nonatomic) NSString serialNumber;
@property (nonatomic) NSString suffix;
@property (nonatomic) NSDictionary dictionary;
- (id)serialNumber;
- (id)dictionary;
- (id)init;
- (void)setDictionary:;
- (void)setSerialNumber:;
- (id)suffix;
- (void).cxx_destruct;
- (void)setSuffix:;
- (long long)paymentNetwork;
- (void)setPaymentNetwork:;
- (id)initWithCardArtwork:cardType:descriptionLong:descriptionShort:paymentNetwork:serialNumber:suffix:;
- (id)cardArtwork;
- (void)setCardArtwork:;
- (long long)cardType;
- (void)setCardType:;
- (id)descriptionLong;
- (void)setDescriptionLong:;
- (id)descriptionShort;
- (void)setDescriptionShort:;
@end
