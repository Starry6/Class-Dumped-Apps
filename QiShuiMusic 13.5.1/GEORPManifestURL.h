@interface GEORPManifestURL : PBCodable
@property (nonatomic) BOOL hasUrlName;
@property (nonatomic) NSString urlName;
@property (nonatomic) BOOL hasUrlValue;
@property (nonatomic) NSString urlValue;
- (void)readAll:;
- (id)init;
- (id)initWithJSON:;
- (id)jsonRepresentation;
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
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasUrlName;
- (id)urlName;
- (void)setUrlName:;
- (BOOL)hasUrlValue;
- (id)urlValue;
- (void)setUrlValue:;
+ (BOOL)isValid:;
@end
