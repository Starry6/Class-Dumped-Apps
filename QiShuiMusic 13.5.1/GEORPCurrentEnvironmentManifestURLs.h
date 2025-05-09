@interface GEORPCurrentEnvironmentManifestURLs : PBCodable
@property (nonatomic) BOOL hasEnvironmentDisplayName;
@property (nonatomic) NSString environmentDisplayName;
@property (nonatomic) BOOL hasEnvironmentReleaseName;
@property (nonatomic) NSString environmentReleaseName;
@property (nonatomic) NSMutableArray urls;
- (void)readAll:;
- (id)init;
- (id)urls;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)setUrls:;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasEnvironmentDisplayName;
- (id)environmentDisplayName;
- (void)setEnvironmentDisplayName:;
- (BOOL)hasEnvironmentReleaseName;
- (id)environmentReleaseName;
- (void)setEnvironmentReleaseName:;
- (void)clearUrls;
- (void)addUrl:;
- (unsigned long long)urlsCount;
- (id)urlAtIndex:;
+ (BOOL)isValid:;
+ (Class)urlType;
@end
