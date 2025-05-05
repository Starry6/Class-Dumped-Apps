@interface GEORPThirdPartyPhotoSharingPreferenceUpdate : PBCodable
@property (nonatomic) BOOL hasPreference;
@property (nonatomic) GEORPThirdPartyPhotoSharingPreference preference;
- (void)readAll:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (id)preference;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setPreference:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasPreference;
+ (BOOL)isValid:;
@end
