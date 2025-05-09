@interface GEOPrice : PBCodable
@property (nonatomic) double value;
@property (nonatomic) NSString currencyCode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL hasAmount;
@property (nonatomic) float amount;
@property (nonatomic) BOOL hasCurrencyCode;
@property (nonatomic) NSString currencyCode;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (unsigned long long)hash;
- (id)currencyCode;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (double)value;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setCurrencyCode:;
- (float)amount;
- (void)setAmount:;
- (BOOL)hasCurrencyCode;
- (void)setHasAmount:;
- (BOOL)hasAmount;
+ (BOOL)isValid:;
@end
