@interface GEORPPhotoAttributionPreferencesUpdate : PBCodable
@property (nonatomic) BOOL hasPreferences;
@property (nonatomic) GEORPPhotoAttributionPreferences preferences;
- (void)readAll:;
- (void)setPreferences:;
- (id)preferences;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasPreferences;
+ (BOOL)isValid:;
@end
