@interface GEOLocalizedName : PBCodable
@property (nonatomic) BOOL hasIsDefault;
@property (nonatomic) BOOL isDefault;
@property (nonatomic) BOOL hasLanguageCode;
@property (nonatomic) NSString languageCode;
@property (nonatomic) BOOL hasNameType;
@property (nonatomic) NSString nameType;
@property (nonatomic) BOOL hasName;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL hasNameRank;
@property (nonatomic) I nameRank;
@property (nonatomic) BOOL hasPhoneticName;
@property (nonatomic) NSString phoneticName;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (BOOL)isDefault;
- (id)unknownFields;
- (id)init;
- (void)setName:;
- (void)setLanguageCode:;
- (BOOL)hasLanguageCode;
- (id)languageCode;
- (id)initWithJSON:;
- (BOOL)hasName;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)setIsDefault:;
- (void)copyTo:;
- (id)phoneticName;
- (void)mergeFrom:;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)name;
- (id)dictionaryRepresentation;
- (id)nameType;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasPhoneticName;
- (void)setPhoneticName:;
- (id)initWithPlaceDataLocalizedString:;
- (void)setHasIsDefault:;
- (BOOL)hasIsDefault;
- (BOOL)hasNameType;
- (void)setNameType:;
- (unsigned int)nameRank;
- (void)setNameRank:;
- (void)setHasNameRank:;
- (BOOL)hasNameRank;
+ (BOOL)isValid:;
@end
