@interface GEOPublisherAttributionManifest : PBCodable
@property (nonatomic) NSMutableDictionary publisherAttributionSources;
- (void)readAll:;
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
- (id)publisherAttributionSources;
- (void)setPublisherAttributionSources:;
- (void)clearPublisherAttributionSources;
- (void)setPublisherAttributionSourcesValue:forKey:;
- (id)publisherAttributionSourcesForKey:;
- (void)enumeratePublisherAttributionSourcesUsingBlock:;
- (unsigned long long)publisherAttributionSourcesCount;
+ (BOOL)isValid:;
+ (Class)publisherAttributionSourcesType;
@end
