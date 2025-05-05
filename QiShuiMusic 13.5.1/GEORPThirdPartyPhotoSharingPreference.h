@interface GEORPThirdPartyPhotoSharingPreference : PBCodable
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) NSString version;
@property (nonatomic) BOOL hasOptIn;
@property (nonatomic) BOOL optIn;
- (void)readAll:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (void)setVersion:;
- (id)version;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (BOOL)hasVersion;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)optIn;
- (void)setOptIn:;
- (void)setHasOptIn:;
- (BOOL)hasOptIn;
+ (BOOL)isValid:;
@end
