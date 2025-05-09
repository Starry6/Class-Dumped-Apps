@interface GEORPThirdPartyPhotoSharingPreferenceUpdateResult : PBCodable
@property (nonatomic) Q errorsCount;
@property (nonatomic) ^i errors;
@property (nonatomic) BOOL hasPreference;
@property (nonatomic) GEORPThirdPartyPhotoSharingPreference preference;
- (void)readAll:;
- (id)init;
- (void)dealloc;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (id)preference;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)clearErrors;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)errors;
- (id)dictionaryRepresentation;
- (void)setPreference:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)errorsCount;
- (void)addErrors:;
- (int)errorsAtIndex:;
- (void)setErrors:count:;
- (id)errorsAsString:;
- (int)StringAsErrors:;
- (BOOL)hasPreference;
+ (BOOL)isValid:;
@end
