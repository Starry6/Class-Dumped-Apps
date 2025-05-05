@interface GEOVLPrecision : PBCodable
@property (nonatomic) Q precisionsCount;
@property (nonatomic) ^I precisions;
- (void)readAll:;
- (void)clearPrecisions;
- (void)dealloc;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)precisions;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (unsigned long long)precisionsCount;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)addPrecisions:;
- (unsigned int)precisionsAtIndex:;
- (void)setPrecisions:count:;
+ (BOOL)isValid:;
@end
