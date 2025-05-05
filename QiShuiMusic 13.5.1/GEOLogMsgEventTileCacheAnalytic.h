@interface GEOLogMsgEventTileCacheAnalytic : PBCodable
@property (nonatomic) BOOL hasCacheHit;
@property (nonatomic) GEOCacheHit cacheHit;
@property (nonatomic) BOOL hasCacheMiss;
@property (nonatomic) GEOCacheMiss cacheMiss;
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
- (BOOL)hasCacheHit;
- (id)cacheHit;
- (void)setCacheHit:;
- (BOOL)hasCacheMiss;
- (id)cacheMiss;
- (void)setCacheMiss:;
+ (BOOL)isValid:;
@end
