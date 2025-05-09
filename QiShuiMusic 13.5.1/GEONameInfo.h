@interface GEONameInfo : PBCodable
@property (nonatomic) BOOL hasName;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL hasPhoneticName;
@property (nonatomic) NSString phoneticName;
@property (nonatomic) BOOL hasShield;
@property (nonatomic) NSString shield;
@property (nonatomic) BOOL hasShieldType;
@property (nonatomic) NSInteger shieldType;
@property (nonatomic) BOOL hasPhoneticType;
@property (nonatomic) NSInteger phoneticType;
@property (nonatomic) BOOL hasSignType;
@property (nonatomic) NSInteger signType;
@property (nonatomic) BOOL hasLocale;
@property (nonatomic) NSString locale;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (void)setLocale:;
- (id)unknownFields;
- (id)init;
- (void)setName:;
- (BOOL)hasLocale;
- (id)initWithJSON:;
- (BOOL)hasName;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (void)setShieldType:;
- (id)locale;
- (unsigned long long)hash;
- (void)copyTo:;
- (id)phoneticName;
- (void)mergeFrom:;
- (int)shieldType;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)name;
- (id)dictionaryRepresentation;
- (id)shield;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasShield;
- (void)setShield:;
- (void)setHasShieldType:;
- (BOOL)hasShieldType;
- (BOOL)hasPhoneticName;
- (void)setPhoneticName:;
- (int)phoneticType;
- (void)setPhoneticType:;
- (void)setHasPhoneticType:;
- (BOOL)hasPhoneticType;
- (id)phoneticTypeAsString:;
- (int)StringAsPhoneticType:;
- (int)signType;
- (void)setSignType:;
- (void)setHasSignType:;
- (BOOL)hasSignType;
- (id)signTypeAsString:;
- (int)StringAsSignType:;
+ (BOOL)isValid:;
@end
