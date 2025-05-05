@interface AWDCoreRoutineModelDominantPlaceCount : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) I count;
- (void)setCount:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)count;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasCount:;
- (BOOL)hasCount;
@end
