@interface GEORPEnrichmentImage : PBCodable
@property (nonatomic) BOOL hasImageId;
@property (nonatomic) NSString imageId;
@property (nonatomic) BOOL hasUrl;
@property (nonatomic) NSString url;
- (void)readAll:;
- (id)url;
- (id)init;
- (BOOL)hasUrl;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)imageId;
- (unsigned long long)hash;
- (void)setUrl:;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setImageId:;
- (id)copyWithZone:;
- (BOOL)hasImageId;
+ (BOOL)isValid:;
@end
