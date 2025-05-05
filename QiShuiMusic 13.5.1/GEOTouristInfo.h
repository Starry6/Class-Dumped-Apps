@interface GEOTouristInfo : PBCodable
@property (nonatomic) BOOL hasIsTourist;
@property (nonatomic) BOOL isTourist;
@property (nonatomic) BOOL hasFetchTimestamp;
@property (nonatomic) double fetchTimestamp;
- (BOOL)hasIsTourist;
- (void)setIsTourist:;
- (void)setHasIsTourist:;
- (void)readAll:;
- (BOOL)isTourist;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (void)setFetchTimestamp:;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (BOOL)hasFetchTimestamp;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setHasFetchTimestamp:;
- (double)fetchTimestamp;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
@end
