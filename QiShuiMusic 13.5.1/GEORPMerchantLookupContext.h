@interface GEORPMerchantLookupContext : PBCodable
@property (nonatomic) BOOL hasMerchantIndustryCode;
@property (nonatomic) q merchantIndustryCode;
@property (nonatomic) BOOL hasMerchantId;
@property (nonatomic) GEOPDMapsIdentifier merchantId;
@property (nonatomic) BOOL hasMerchantName;
@property (nonatomic) NSString merchantName;
@property (nonatomic) BOOL hasMerchantRawName;
@property (nonatomic) NSString merchantRawName;
@property (nonatomic) BOOL hasMerchantIndustryCategory;
@property (nonatomic) NSString merchantIndustryCategory;
@property (nonatomic) BOOL hasMerchantUrl;
@property (nonatomic) NSString merchantUrl;
@property (nonatomic) BOOL hasMerchantFormattedAddress;
@property (nonatomic) NSString merchantFormattedAddress;
@property (nonatomic) BOOL hasMerchantAdamId;
@property (nonatomic) NSString merchantAdamId;
@property (nonatomic) BOOL hasTransactionTime;
@property (nonatomic) double transactionTime;
@property (nonatomic) BOOL hasTransactionType;
@property (nonatomic) NSString transactionType;
@property (nonatomic) BOOL hasTransactionLocation;
@property (nonatomic) GEOLocation transactionLocation;
@property (nonatomic) BOOL hasCorrelationId;
@property (nonatomic) NSString correlationId;
@property (nonatomic) BOOL hasIsAppleCard;
@property (nonatomic) BOOL isAppleCard;
@property (nonatomic) BOOL hasRequestTransactionType;
@property (nonatomic) NSInteger requestTransactionType;
- (void)readAll:;
- (BOOL)hasGreenTeaWithValue:;
- (id)init;
- (void)clearSensitiveFields:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)transactionType;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setTransactionType:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (long long)merchantIndustryCode;
- (void)setMerchantIndustryCode:;
- (void)setHasMerchantIndustryCode:;
- (BOOL)hasMerchantIndustryCode;
- (BOOL)hasMerchantId;
- (id)merchantId;
- (void)setMerchantId:;
- (BOOL)hasMerchantName;
- (id)merchantName;
- (void)setMerchantName:;
- (BOOL)hasMerchantRawName;
- (id)merchantRawName;
- (void)setMerchantRawName:;
- (BOOL)hasMerchantIndustryCategory;
- (id)merchantIndustryCategory;
- (void)setMerchantIndustryCategory:;
- (BOOL)hasMerchantUrl;
- (id)merchantUrl;
- (void)setMerchantUrl:;
- (BOOL)hasMerchantFormattedAddress;
- (id)merchantFormattedAddress;
- (void)setMerchantFormattedAddress:;
- (BOOL)hasMerchantAdamId;
- (id)merchantAdamId;
- (void)setMerchantAdamId:;
- (double)transactionTime;
- (void)setTransactionTime:;
- (void)setHasTransactionTime:;
- (BOOL)hasTransactionTime;
- (BOOL)hasTransactionType;
- (BOOL)hasTransactionLocation;
- (id)transactionLocation;
- (void)setTransactionLocation:;
- (BOOL)hasCorrelationId;
- (id)correlationId;
- (void)setCorrelationId:;
- (BOOL)isAppleCard;
- (void)setIsAppleCard:;
- (void)setHasIsAppleCard:;
- (BOOL)hasIsAppleCard;
- (int)requestTransactionType;
- (void)setRequestTransactionType:;
- (void)setHasRequestTransactionType:;
- (BOOL)hasRequestTransactionType;
- (id)requestTransactionTypeAsString:;
- (int)StringAsRequestTransactionType:;
+ (BOOL)isValid:;
@end
