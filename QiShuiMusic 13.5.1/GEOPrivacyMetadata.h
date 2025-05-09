@interface GEOPrivacyMetadata : PBCodable
@property (nonatomic) BOOL hasIsUnderageAccount;
@property (nonatomic) BOOL isUnderageAccount;
@property (nonatomic) BOOL hasIsManagedAccount;
@property (nonatomic) BOOL isManagedAccount;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (BOOL)hasIsUnderageAccount;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (BOOL)isUnderageAccount;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (void)setHasIsManagedAccount:;
- (unsigned long long)hash;
- (BOOL)hasIsManagedAccount;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (void)setIsUnderageAccount:;
- (id)dictionaryRepresentation;
- (void)setHasIsUnderageAccount:;
- (void)setIsManagedAccount:;
- (BOOL)isManagedAccount;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
@end
